using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public static class FileManager
{
    public static List<string> LoadSentencesFile()
    {
        List<string> lines = new List<string>();

        StreamReader streamReader = new StreamReader($"{Application.dataPath}/TextLines/Hiragana Sentences.txt");

        string line;

        while ((line = streamReader.ReadLine()) != null)
        {
            if (line != "")
            {
                lines.Add(line);
                Debug.Log(line);
            }
        }

        return lines;
    }

}
