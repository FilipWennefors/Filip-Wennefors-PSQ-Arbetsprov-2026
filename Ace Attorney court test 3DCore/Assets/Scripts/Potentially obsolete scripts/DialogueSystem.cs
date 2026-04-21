using DIALOGUE;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class DialogueSystem : MonoBehaviour
{
    DialogueManager dialogueManager;

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


    int CurrentLine = 1;

    DIALOGUE_LINE parsedLine = new DIALOGUE_LINE("", "", "");
    // Start is called before the first frame update
    public void StartMethod()
    {
        DialogueBox = dialogueManager.DialogueBox;
        SpeakerName = dialogueManager.SpeakerName;
        SpeakerBackground = dialogueManager.SpeakerBackground;

        Debug.Log(CurrentLine);
        //This is Bad solution but I can't figure out spreadsheet integration
        ImportData();
        parsedLine = DialogueParser.Parse(TextLines[CurrentLine]);
        UpdateSpeaker();
        //UpdateAnimations();
        UpdateText();
        //Have to add 1 to currentline because otherwhise Animator flips out over unassigned objects
        CurrentLine++;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void UpdateSpeaker()
    {
        SpeakerName.text = parsedLine.speaker.ToString();
        //Change so the currentspeaker is the correct one

        //todo add it so that it changes camera position on update
        //OnSpeakerNameUpdate?.Invoke(this, new NameUpdateEventArgs { SpeakerName = CurrentSpeakerName[CurrentLine] });
    }

    public void UpdateText()
    {
        //What happens here is that we starts a coroutine that prints out the text letter by letter
        DialogueBox.text = new string("");
        char[] dialogue = parsedLine.dialogue.ToCharArray();
        dialogueManager.StartCoroutine(dialogueManager.PrintText(dialogue));
        //https://forum.unity.com/threads/get-the-actual-width-of-the-visible-text.521457/
    }
    public void ImportData()
    {
        TextLines = FileManager.ReadTextFile(fileName, false);
        CurrentDialogue = FileManager.ReadTextFile(fileName, false);

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
