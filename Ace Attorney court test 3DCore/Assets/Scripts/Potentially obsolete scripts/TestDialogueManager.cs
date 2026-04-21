using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using DIALOGUE;


/*Alright troopers, what needs to happen here is that we need to get parsed dialogue on the screen, essentially in a way adaptible for the main game*/
public class TestDialogueManager : MonoBehaviour
{
    private string fileName = "DialogueCourtTest.txt";

    public TextMeshProUGUI dialogueText;

    DIALOGUE_LINE parsedLines = new DIALOGUE_LINE("", "", "");
    
    List<string> lines = new List<string>();
    
    int currentLine;
    // Start is called before the first frame update
    void Start()
    {
        lines = FileManager.ReadTextFile(fileName, false);
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            currentLine++;
            UpdateText();
        }
    }
    private void UpdateText()
    {
        parsedLines = DialogueParser.Parse(lines[currentLine]);
        dialogueText.text = parsedLines.dialogue;
        Debug.Log(parsedLines.dialogue);
    }
}
