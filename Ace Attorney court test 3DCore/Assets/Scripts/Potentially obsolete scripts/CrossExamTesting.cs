using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DIALOGUE;
using TMPro;
using System;

public class CrossExamTesting : MonoBehaviour
{
    /*
     What we need to add here is a couple of things. First of all we need to add a way for the player to cycle through statements. We also need a way to press statements to
    play pieces of dialogue.
     */
    [SerializeField] TextMeshProUGUI dialogueBox;
    [SerializeField] TextMeshProUGUI testDisplay;

    List<string> statements = new List<string>();
    //What statementPresses will probably be is a list of the names of the dialoguefiles that we will parse to get the text used in presses.

    string statementsFileName = "Crossexam_Sanders_statements.txt";
    public string pressesFileName = "Crossexam_Sanders_line";
    int currentLine;

    // Start is called before the first frame update
    void Start()
    {
        List<string> rippedLines = FileManager.ReadTextFile(statementsFileName, false);
        foreach(string line in rippedLines)
        {
            DIALOGUE_LINE parsedLine = new DIALOGUE_LINE("", "", "");
            parsedLine = DialogueParser.Parse(line);
            statements.Add(parsedLine.dialogue.ToString());
        }
        dialogueBox.text = statements[currentLine];

        

        Debug.Log(statements.Count);
        //Import lines then parse
    }

    // Update is called once per frame
    void Update()
    {
        //Lets player cycle through statements
        if (Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.KeypadEnter) || Input.GetKeyDown(KeyCode.Space))
        {
            if (currentLine + 1 > statements.Count -1)
            {
                currentLine = 0;
                dialogueBox.text = statements[currentLine];
                testDisplay.text = "CurrentLine: " + currentLine;
            }
            else
            {
                currentLine++;
                dialogueBox.text = statements[currentLine];
                testDisplay.text = "CurrentLine: " + currentLine;
            }

        }
        else if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            if (currentLine - 1 < 0)
            {
                currentLine = statements.Count - 1;
                dialogueBox.text = statements[currentLine];
                testDisplay.text = "CurrentLine: " + currentLine;
            }
            else
            {
                currentLine--;
                dialogueBox.text = statements[currentLine];
                testDisplay.text = "CurrentLine: " + currentLine;
            }
        }
        //Lets players press statements
        if(Input.GetKeyDown(KeyCode.Q))
        {
            //FIXME: cross exam dialogue files don't feature "" signs

            Debug.Log("Pressed statement at: " + currentLine);
            //Procedurally assigns which dialogue file to get.   Adds 1 to currentline because file names start at 1, not 0
            pressesFileName = "Crossexam_Sanders_line" + (currentLine + 1).ToString() + ".txt";

            List<string> statementPresses = new List<string>();

            List<string> unparsedPresses = new List<string>();
            
            unparsedPresses = FileManager.ReadTextFile(pressesFileName, false);
            
            
            foreach(string line in unparsedPresses)
            {
                DIALOGUE_LINE parsedLine = new DIALOGUE_LINE("", "", "");
                parsedLine = DialogueParser.Parse(line);
                statementPresses.Add(parsedLine.dialogue);

            }

            //Works, despite what the console may imply
            foreach (string line in statementPresses)
            {
                Debug.Log(line);
            }

            //Next what we need to do is print statement presses in the dialogue box.
        }
    }
}