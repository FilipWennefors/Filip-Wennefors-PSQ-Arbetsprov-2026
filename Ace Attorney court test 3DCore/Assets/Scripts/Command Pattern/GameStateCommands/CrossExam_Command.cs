using DIALOGUE;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class CrossExam_Command : ICommand
{
    public TextMeshProUGUI dialogueBox;
    public TextMeshProUGUI speakerName;

    /// <summary>
    /// UI Element used to specify that the player is currently crossexaminating a witness
    /// </summary>
    GameObject crossExamIndicator;

    List<string> statements = new List<string>();
    //What statementPresses will probably be is a list of the names of the dialoguefiles that we will parse to get the text used in presses.

    string statementsFileName;
    string pressesFileName;
    string correctEvidence;
    string contradictionIndex;
    string rightAnswerResponse;
    string wrongAnswerResponse;
    int currentLine;

    bool courtRecordEnabled;

    public CrossExam_Command(string SpecifiedStatementsFileName, string SpecifiedPressesFileName, string SpecifiedCorrectEvidence, string correctIndex, string SpecifiedResponseCorrectAnswer, string SpecifiedResponseWrongAnswer)
    {
        statementsFileName = SpecifiedStatementsFileName;
        pressesFileName = SpecifiedPressesFileName;
        correctEvidence = SpecifiedCorrectEvidence;
        contradictionIndex = correctIndex;
        rightAnswerResponse = SpecifiedResponseCorrectAnswer;
        wrongAnswerResponse = SpecifiedResponseWrongAnswer;
    }
    public void Initialize(References variableReferences)
    {
        Debug.Log($"Started {this.GetType().Name}");

        speakerName = variableReferences.SpeakerName;
        dialogueBox = variableReferences.DialogueBox;
        crossExamIndicator = variableReferences.CrossExamIndicator;

        StaticReferences.CourtRecord.OnEvidencePresent += CourtRecord_OnEvidencePresent;
        StaticReferences.CourtRecord.OnCourtRecordToggled += CourtRecord_CourtRecordToggled;

        //Need to reset the list of statements here because the computer remembers the statements from prior so when it resumes crossexam after a press, it will once again
        //add the statements to the list, thus breaking the cross exam statement press feature, pretty bad, if I say so myself
        statements = new List<string>();
        

        List<string> rippedLines = FileManager.ReadTextFile(statementsFileName, false);
        foreach (string line in rippedLines)
        {
            DIALOGUE_LINE parsedLine = new DIALOGUE_LINE("", "", "");
            parsedLine = DialogueParser.Parse(line);
            speakerName.text = parsedLine.speaker;
            statements.Add(parsedLine.dialogue.ToString());
        }

        dialogueBox.text = statements[currentLine];
        dialogueBox.color = new Color(0f, 1f, 0.0941176470588235f, 1f);
        crossExamIndicator.SetActive(true);
        StaticReferences.CameraManager.UpdateCameraPosition(speakerName.text);


        Debug.Log(statements.Count);
        //Import lines then parse
    }

    private void CourtRecord_CourtRecordToggled(object sender, CourtRecordSystem.OnCourtRecordToggled_EventArgs e)
    {
        courtRecordEnabled = e.isCourtRecordEnabled;
    }

    /// <summary>
    /// Function to execute upon evidence being presented
    /// </summary>
    /// <param name="sender"></param>
    /// <param name="e"></param>
    private void CourtRecord_OnEvidencePresent(object sender, CourtRecordSystem.OnEvidencePresent_EventArgs e)
    {
        Debug.Log($"OBJECTION: Presented {e.evidenceName}");
        if (correctEvidence.ToLower() == e.evidenceName.ToLower())
        {
            if (contradictionIndex != "null" && int.Parse(contradictionIndex) == currentLine + 1)
            {
                Debug.Log("Contradiction spotted");
                dialogueBox.color = Color.white;
                crossExamIndicator.SetActive(false);
                StaticReferences.CourtRecord.OnEvidencePresent -= CourtRecord_OnEvidencePresent;
                StaticReferences.CourtRecord.OnCourtRecordToggled -= CourtRecord_CourtRecordToggled;
                StaticReferences.Courtroom_CommandPatternInvoker.FastExecute(new Dialogue_Command(rightAnswerResponse + ".txt"));
            }
            else
            {
                crossExamIndicator.SetActive(false);
                dialogueBox.color = Color.white;
                StaticReferences.CourtRecord.OnEvidencePresent -= CourtRecord_OnEvidencePresent;
                StaticReferences.CourtRecord.OnCourtRecordToggled -= CourtRecord_CourtRecordToggled;
                StaticReferences.Courtroom_CommandPatternInvoker.FastExecute(new Dialogue_Command(wrongAnswerResponse + ".txt"));
            }

        }
        else
        {
            crossExamIndicator.SetActive(false);
            dialogueBox.color = Color.white;
            StaticReferences.CourtRecord.OnEvidencePresent -= CourtRecord_OnEvidencePresent;
            StaticReferences.CourtRecord.OnCourtRecordToggled -= CourtRecord_CourtRecordToggled;
            StaticReferences.Courtroom_CommandPatternInvoker.FastExecute(new Dialogue_Command(wrongAnswerResponse + ".txt"));
        }
        //If the evidence is correct, unsub usint StaticReferences.CourtRecord.OnEvidencePresent -= CourtRecord_OnEvidencePresent;
    }

    public void UpdateCommand(References variableReferences)
    {
        //So the player doesn't accidentally switch statements in the court record
        if (courtRecordEnabled == false)
        {
            //Lets player cycle through statements
            if (Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.KeypadEnter) || Input.GetKeyDown(KeyCode.Space))
            {
                if (currentLine + 1 > statements.Count - 1)
                {
                    currentLine = 0;
                    dialogueBox.text = statements[currentLine];
                }
                else
                {
                    currentLine++;
                    dialogueBox.text = statements[currentLine];
                }
            }
            else if (Input.GetKeyDown(KeyCode.LeftArrow) || Input.GetKeyDown(KeyCode.A))
            {
                if (currentLine - 1 < 0)
                {
                    currentLine = statements.Count - 1;
                    dialogueBox.text = statements[currentLine];
                }
                else
                {
                    currentLine--;
                    dialogueBox.text = statements[currentLine];
                }
            }
        }
        //Lets players press statements
        if (Input.GetKeyDown(KeyCode.Q))
        {
            //Procedurally assigns which dialogue file to get.   Adds 1 to currentline because file names start at 1, not 0
            string pressedStatementFileName = pressesFileName + (currentLine + 1).ToString() + ".txt";

            //Used because otherwhise the player will resume back on the original line they pressed.
            //FIXME: Didn't work, caused index above array errors sometimes
            //currentLine++;
            dialogueBox.color = Color.white;
            StaticReferences.CourtRecord.OnEvidencePresent -= CourtRecord_OnEvidencePresent;
            StaticReferences.Courtroom_CommandPatternInvoker.FastExecute(new Dialogue_Command(pressedStatementFileName));

        }
    }
    public void Execute(References variableReferences)
    {

    }
    public string GetCommandKeyBinds()
    {
        return "Next Statement: D, Space\r\nPrevious Statement: A\r\nPress Statement: Q\r\nCourt Record: Tab";
    }
}