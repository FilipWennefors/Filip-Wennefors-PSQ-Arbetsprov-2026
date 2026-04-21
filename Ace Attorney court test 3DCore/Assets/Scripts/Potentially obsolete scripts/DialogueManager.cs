using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using DIALOGUE;

/*
Alright this script needs a big rework. What has hit the fan is that the parsing system works in a way I wasn't thinking about before. Essentially, what will happen is that
when a line is parsed, up to 60 conditional statements will be fired off. That initially doesn't seem like a big deal, however when dozens of lines are parsed, it will add up
to enormous lag spikes. Therefore we need to parse the lines individually when fed into the parser, AKA when space is pressed. So we load in the line, parse it, then print.
This means that saving names, animations, speakers, variables in individual lines is off the table. So we need to rework the script to use a single list instead of multiple
then separate it. 

sigh... when the internal toolset sucks donkeyballs.
*/

public class DialogueManager : MonoBehaviour
{
    private string fileName = "DialogueCourtTest.txt";

    public TextMeshProUGUI DialogueBox;
    public TextMeshProUGUI SpeakerName;
    public GameObject SpeakerBackground;
    [SerializeField] GameObject CurrentSpeaker;
    Animator animator;
    //Substitutes the now non-functional pre-separated lists for dialogue.
    List<string> TextLines = new List<string>();

    List<string> CurrentDialogue = new List<string>();
    List<string> CurrentSpeakerName = new List<string>();
    List<string> CurrentAnimation = new List<string>();
    List<bool> SkipLine = new List<bool>();

    
    public int CurrentLine = 0;
    
    DIALOGUE_LINE parsedLine = new DIALOGUE_LINE("", "", "");
    public event EventHandler<NameUpdateEventArgs> OnSpeakerNameUpdate;
    public class NameUpdateEventArgs : EventArgs
    {
        public string SpeakerName;
    }
    private void Start()
    {
        StartMethod();
    }
    private void Update()
    {
        UpdateMethod();
    }
    public void StartMethod()
    {
        Debug.Log(CurrentLine);
        //This is Bad solution but I can't figure out spreadsheet integration
        ImportData();
        parsedLine = DialogueParser.Parse(TextLines[CurrentLine]);
        Debug.Log(parsedLine);
        UpdateSpeaker();
        //UpdateAnimations();
        UpdateText();
        ExecuteCommands();
        //Have to add 1 to currentline because otherwhise Animator flips out over unassigned objects
        CurrentLine++;

    }

    //Update is called once per frame
    public void UpdateMethod()
    {
        //For continiuing reading
        if (Input.GetKeyDown(KeyCode.Space))
        {
            parsedLine = DialogueParser.Parse(TextLines[CurrentLine]);
            UpdateSpeaker();
            //UpdateAnimations();
            UpdateText();
            ExecuteCommands();
            CurrentLine++;
        }
    }
    public void UpdateSpeaker()
    {
        SpeakerName.text = parsedLine.speaker.ToString();
        //Change so the currentspeaker is the correct one

        //todo add it so that it changes camera position on update
        OnSpeakerNameUpdate?.Invoke(this, new NameUpdateEventArgs { SpeakerName = CurrentSpeakerName[CurrentLine] });
    }
    void UpdateAnimations()
    {

    }
    public void UpdateText()
    {
        //What happens here is that we starts a coroutine that prints out the text letter by letter
        DialogueBox.text = new string("");
        char[] dialogue = parsedLine.dialogue.ToCharArray();
        StartCoroutine(PrintText(dialogue));
        //https://forum.unity.com/threads/get-the-actual-width-of-the-visible-text.521457/
    }
    public IEnumerator PrintText(char[] textArray)
    {
        foreach (char letter in textArray)
        {
            DialogueBox.text = DialogueBox.text + letter;
            yield return new WaitForSeconds(0.01f);
        }
        //Uncomment when skipline is added back
        //if (SkipLine[CurrentLine] == true)
        //{
        //    UpdateSpeaker();
        //    UpdateAnimations();
        //    UpdateText();
        //    CurrentLine++;
        //    Debug.Log("Skipped line");
        //}

    }
    public void ExecuteCommands()
    {
        List<DL_COMMAND_DATA.Command> commands;
        if(parsedLine.commands != null)
        {
            commands = parsedLine.commands.commands;

            foreach (DL_COMMAND_DATA.Command command in commands)
            {
                CommandManager.instance.Execute(command.name, command.arguments);
            }
        }
    }
    public void ImportData()
    {
        TextLines = FileManager.ReadTextFile(fileName, false);
        //CurrentDialogue = FileManager.ReadTextFile(fileName, false);

        CurrentSpeakerName.Add("");
        CurrentSpeakerName.Add("Payne");
        CurrentSpeakerName.Add("Col.Sanders");
        CurrentSpeakerName.Add("Payne");
        CurrentSpeakerName.Add("Judge");
        CurrentSpeakerName.Add("Phoenix");
        CurrentSpeakerName.Add("Payne");
        CurrentSpeakerName.Add("Col.Sanders");
        CurrentSpeakerName.Add("Col.Sanders");
        CurrentSpeakerName.Add("Col.Sanders");
        CurrentSpeakerName.Add("Col.Sanders");
        CurrentSpeakerName.Add("Col.Sanders");
        CurrentSpeakerName.Add("Col.Sanders");
    }
}
