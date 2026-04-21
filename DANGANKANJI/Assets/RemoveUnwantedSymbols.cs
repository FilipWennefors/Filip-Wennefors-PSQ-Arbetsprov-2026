using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RemoveUnwantedSymbols : MonoBehaviour
{
    List<string> TextLinesWithUnwantedSymbols;

    List<string> TextLinesParsed;

    //char[] unwantedCharacters = new char[];

    // Start is called before the first frame update
    void Start()
    {
        TextLinesWithUnwantedSymbols = FileManager.LoadSentencesFile();


        foreach (string line in TextLinesWithUnwantedSymbols)
        {
            char[] letters = line.ToCharArray();

            foreach (char c in letters)
            {
            
            }
        }
    }
}
