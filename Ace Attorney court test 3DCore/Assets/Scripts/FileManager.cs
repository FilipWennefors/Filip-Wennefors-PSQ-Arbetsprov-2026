using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;



//NOTICE FOR PSQ: The following is tutorial code, Read the included document about the project for more info



/// <summary>
/// Class used to handle loading of text files
/// </summary>
public class FileManager
{
    /// <summary>
    /// Gets all lines of text in a text file and returns the results as a list
    /// </summary>
    /// <param name="filePath"></param>
    /// <param name="includeBlankLines"></param>
    /// <returns></returns>
    public static List<string> ReadTextFile(string filePath, bool includeBlankLines = true)
    {
        if(!filePath.StartsWith('/'))
            filePath = FilePaths.root + filePath;
        List<string> lines = new List<string>();
        try
        {
            Debug.Log("trying to read file at " + filePath);
            using (StreamReader sr = new StreamReader(filePath)) 
            {
                while(!sr.EndOfStream)
                {
                    string line = sr.ReadLine();
                    if(includeBlankLines || !string.IsNullOrWhiteSpace(line))
                        lines.Add(line);
                }
            }
        }
        catch(FileNotFoundException ex)
        {
            Debug.LogError($"File not found: {ex.FileName}");
        }

        return lines;
    }
    public static List<string> ReadTextAsset(string filePath, bool includeBlankLines = true)
    {
        return null;
    }
}