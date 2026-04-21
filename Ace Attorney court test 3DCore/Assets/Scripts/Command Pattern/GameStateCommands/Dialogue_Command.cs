using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using DIALOGUE;
public class Dialogue_Command : ICommand
{
    private string fileName;
    public Dialogue_Command(string dialogueFileName)
    {
        fileName = dialogueFileName;
        Debug.Log(dialogueFileName);
    }

    public TextMeshProUGUI dialogueBox;
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
    
    bool printingText = false;
    bool courtRecordEnabled;

    DIALOGUE_LINE parsedLine = new DIALOGUE_LINE("", "", "");

    public event EventHandler<NameUpdateEventArgs> OnSpeakerNameUpdate;
    public class NameUpdateEventArgs : EventArgs
    {
        public string SpeakerName;
    }
    public void Initialize(References variableReferences)
    {
        dialogueBox = variableReferences.DialogueBox;
        SpeakerName = variableReferences.SpeakerName;
        SpeakerBackground = variableReferences.SpeakerBackground;

        StaticReferences.CourtRecord.OnCourtRecordToggled += CourtRecord_CourtRecordToggled;

        Debug.Log(CurrentLine);
        //This is Bad solution but I can't figure out spreadsheet integration
        ImportData();
        parsedLine = DialogueParser.Parse(TextLines[CurrentLine]);
        UpdateSpeaker();
        //UpdateAnimations();
        UpdateText();
        ExecuteCommands();
        //Have to add 1 to currentline because otherwhise Animator flips out over unassigned objects
        CurrentLine++;
    }
    public void UpdateCommand(References variableReferences)
    {
        //For continiuing reading
        if ((Input.GetKeyDown(KeyCode.Space) || Input.GetKeyDown(KeyCode.Return)) && courtRecordEnabled == false)
        {
            if (TextLines.Count > CurrentLine)
            {
                if (printingText)
                {
                    UpdateText();
                }
                else
                {
                    parsedLine = DialogueParser.Parse(TextLines[CurrentLine]);
                    UpdateSpeaker();
                    //UpdateAnimations();
                    UpdateText();
                    ExecuteCommands();
                    CurrentLine++;
                }
            }
            else
            {
                StaticReferences.CourtRecord.OnCourtRecordToggled -= CourtRecord_CourtRecordToggled;
                StaticReferences.Courtroom_CommandPatternInvoker.NextCommand("Next");
            }
                
        }
    }
    public void UpdateSpeaker()
    {
        SpeakerName.text = parsedLine.speaker.ToString();
        //Change so the currentspeaker is the correct one

        //todo add it so that it changes camera position on update
        StaticReferences.CameraManager.UpdateCameraPosition(parsedLine.speaker.ToString());
        //OnSpeakerNameUpdate?.Invoke(this, new NameUpdateEventArgs { SpeakerName = CurrentSpeakerName[CurrentLine] });
    }
    void UpdateAnimations()
    {

    }
    public void UpdateText()
    {
        if (!printingText)
        {
            printingText = true;
            //What happens here is that we starts a coroutine that prints out the text letter by letter
            dialogueBox.text = new string("");
            char[] dialogue = parsedLine.dialogue.ToCharArray();
            StaticReferences.UI_PrintTextReference.StartCoroutine(PrintText(dialogue));
            //https://forum.unity.com/threads/get-the-actual-width-of-the-visible-text.521457/
        }
        else 
        {
            printingText = false;
            dialogueBox.text = parsedLine.dialogue;
        }
    }
    public IEnumerator PrintText(char[] textArray)
    {
        foreach (char letter in textArray)
        {
            if (!printingText)
                break;
            else
            {
                dialogueBox.text = dialogueBox.text + letter;
                yield return new WaitForSeconds(0.01f);
            }
        }
        printingText = false;
        
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
    /// <summary>
    /// Executes the commands found in the dialogue files
    /// </summary>
    public void ExecuteCommands()
    {
        List<DL_COMMAND_DATA.Command> commands;
        if (parsedLine.commands != null)
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


        //Leftover from older version
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
    public void Execute(References variableReferences)
    {

    }
    public string GetCommandKeyBinds()
    {
        return "Next dialogue: Space\r\nCourt Record: Tab";
    }
    private void CourtRecord_CourtRecordToggled(object sender, CourtRecordSystem.OnCourtRecordToggled_EventArgs e)
    {
        courtRecordEnabled = e.isCourtRecordEnabled;
    }
}