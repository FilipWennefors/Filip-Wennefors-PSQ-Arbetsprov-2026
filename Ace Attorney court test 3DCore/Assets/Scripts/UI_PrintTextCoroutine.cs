using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class UI_PrintTextCoroutine : MonoBehaviour
{
    public TextMeshProUGUI DialogueBox;


    private void Awake()
    {
        StaticReferences.UI_PrintTextReference = this;
    }
    public IEnumerator PrintText(char[] textArray)
    {
        foreach (char letter in textArray)
        {
            DialogueBox.text = DialogueBox.text + letter;
            yield return new WaitForSeconds(0.01f);
        }
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
}
