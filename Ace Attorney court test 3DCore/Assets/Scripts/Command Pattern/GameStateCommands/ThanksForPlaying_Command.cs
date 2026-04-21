using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;

//Used to create the thanks for playing screen at the end of the game prototype
public class ThanksForPlaying_Command : ICommand
{
    // Start is called before the first frame update
    public void Initialize(References variableReferences)
    {
        variableReferences.ThanksForPlayingScreen.SetActive(true);
    }
    public void UpdateCommand(References variableReferences)
    {

    }
    public void Execute(References variableReferences)
    {

    }
    public string GetCommandKeyBinds()
    {
        return "Not Written Yet";
    }
}
