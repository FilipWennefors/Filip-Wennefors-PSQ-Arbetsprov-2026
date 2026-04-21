using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Testing_Dialogue_Command : ICommand
{
    string pressesFileName;
    public Testing_Dialogue_Command(string DialogueFileName)
    {
        pressesFileName = DialogueFileName;
    }
    public void Initialize(References variableReferences)
    {
        Debug.Log($"Started {this.GetType().Name}");
        Debug.Log($"presses file is {pressesFileName}");
    }
    public void UpdateCommand(References variableReferences)
    {
        //Debug.Log($"Running update at {this.GetType().Name}");
    }
    public void Execute(References variableReferences)
    {

    }
    public string GetCommandKeyBinds()
    {
        return "Not Written Yet";
    }
}
