using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

/// <summary>
/// The following script was created to temporarily display key presses in the prototype. A different solution would probably have been employed in the final version
/// </summary>
public class KeyPressIndicators : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI keybindsText;
    Courtroom_CommandPatternInvoker invoker;

    string currentCommandInputs = "Next dialogue: Space\r\nCourt Record: Tab";
    // Start is called before the first frame update
    void Start()
    {
        invoker = StaticReferences.Courtroom_CommandPatternInvoker;
        invoker.OnSwitchCommand += Invoker_OnSwitchCommand;
        StaticReferences.CourtRecord.OnCourtRecordToggled += CourtRecord_CourtRecordToggled;
    }

    private void CourtRecord_CourtRecordToggled(object sender, CourtRecordSystem.OnCourtRecordToggled_EventArgs e)
    {
        if(e.isCourtRecordEnabled)
            keybindsText.text = "Exit Court Record: Tab\r\nNext Evidence: D\r\nPrevious Evidence: A\r\nToggle profiles/evidence: R\r\nPresent evidence: E\r\n(Cross exam and evidence present modes only)";
        else
            keybindsText.text = currentCommandInputs;
    }

    private void Invoker_OnSwitchCommand(object sender, Courtroom_CommandPatternInvoker.CommandSwitchArgs e)
    {
        currentCommandInputs = e.commandKeybinds;
        keybindsText.text = currentCommandInputs;
    }
}
