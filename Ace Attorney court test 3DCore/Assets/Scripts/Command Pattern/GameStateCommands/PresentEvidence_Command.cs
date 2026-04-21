using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//TAKE THAT!!! This script will be used when the court asks a question and evidence is required to answer the question.
public class PresentEvidence_Command : ICommand
{
    string correctEvidence;
    string rightAnswerResponse;
    string wrongAnswerResponse;
    public PresentEvidence_Command(string SpecifiedCorrectEvidence, string SpecifiedResponseCorrectAnswer, string SpecifiedResponseWrongAnswer)
    {
        correctEvidence = SpecifiedCorrectEvidence;
        rightAnswerResponse = SpecifiedResponseCorrectAnswer;
        wrongAnswerResponse = SpecifiedResponseWrongAnswer;
    }
    public void Initialize(References variableReferences)
    {
        StaticReferences.CourtRecord.OnEvidencePresent += CourtRecord_OnEvidencePresent;
        StaticReferences.CourtRecord.ExternalCourtRecordToggle();
    }
    /// <summary>
    /// Event called once the player presents evidence
    /// </summary>
    /// <param name="sender"></param>
    /// <param name="e"></param>
    private void CourtRecord_OnEvidencePresent(object sender, CourtRecordSystem.OnEvidencePresent_EventArgs e)
    {
        if (correctEvidence.ToLower() == e.evidenceName.ToLower())
        {
            StaticReferences.CourtRecord.OnEvidencePresent -= CourtRecord_OnEvidencePresent;
            StaticReferences.Courtroom_CommandPatternInvoker.FastExecute(new Dialogue_Command(rightAnswerResponse + ".txt"));
        }
        else
        {
            StaticReferences.CourtRecord.OnEvidencePresent -= CourtRecord_OnEvidencePresent;
            StaticReferences.Courtroom_CommandPatternInvoker.FastExecute(new Dialogue_Command(wrongAnswerResponse + ".txt"));
        }
        //If the evidence is correct, unsub using StaticReferences.CourtRecord.OnEvidencePresent -= CourtRecord_OnEvidencePresent;
    }
    public void UpdateCommand(References variableReferences)
    {

    }
    public void Execute(References variableReferences)
    {

    }
    public string GetCommandKeyBinds()
    {
        return "Next Item: D\r\nPrevious Item: A\r\nPresent Item: A\r\nToggle Evidence/Profiles: R";
    }
}