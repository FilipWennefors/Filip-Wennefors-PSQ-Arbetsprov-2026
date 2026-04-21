using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Testing_CrossExam_Command : ICommand
{
    public void Initialize(References variableReferences)
    {
        Debug.Log($"Started {this.GetType().Name}");
    }
    public void UpdateCommand(References variableReferences)
    {
        Debug.Log($"Running update at {this.GetType().Name}");
    }
    public void Execute(References variableReferences)
    {

    }
    public string GetCommandKeyBinds()
    {
        return "Not Written Yet";
    }
}

