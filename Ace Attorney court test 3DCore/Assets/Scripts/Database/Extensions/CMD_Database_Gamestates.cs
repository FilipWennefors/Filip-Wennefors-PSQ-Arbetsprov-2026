using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class CMD_Database_Gamestates : CMD_DatabaseExtension
{
    public static Courtroom_CommandPatternInvoker commandInvoker;
    //public CMD_Database_Gamestates() 
    //{
    //    commandInvoker = GameObject.Find("Courtroom Game Logic").GetComponentInChildren<Courtroom_CommandPatternInvoker>();
    //    Debug.Log(commandInvoker.IsUnityNull());
    //}
    new public static void ExtendDatabase(CommandDatabase database)
    {
        //Cannot do this, params keyword only allows accepting of one stringarray of params. so because of the commandmanager, we cannot do this

        //This is for adding gamestate "Commands" to the invoker, essentially AddCommand(CrossExam) inside a text file
        database.AddCommand("AddCommand", new Action<string[]>(CommandPattern_AddCommand));
        database.AddCommand("FastExecute", new Action<string[]>(CommandPattern_FastExecute));
        database.AddCommand("NextNextCommand", new Action<string>(CommandPattern_NextNextCommand));
    }
    private static void CommandPattern_AddCommand(string[] parameters)
    {
        //Order of parameters: command name, witness statements, presses, correct evidence, correct statement index, correct answer, wrong answer
        if (parameters[0] == "CrossExam_Command")
        {
            if (CMD_Database_Gamestates.commandInvoker != null)
            {
                CMD_Database_Gamestates.commandInvoker.AddCommand(new CrossExam_Command(parameters[1], parameters[2], parameters[3], parameters[4], parameters[5], parameters[6]));
                Debug.Log("Added Cross Exam Command");
            }
        }
        //Order of parameters: command name, dialogue
        else if (parameters[0] == "Dialogue_Command")
        {
            if (CMD_Database_Gamestates.commandInvoker != null)
            {
                CMD_Database_Gamestates.commandInvoker.AddCommand(new Dialogue_Command(parameters[1]));
                Debug.Log("Added Dialogue Command");
            }
        }
        //Order of parameters: command name, answers, responses file name
        else if (parameters[0] == "AnswerQuestions_Command")
        {
            if (CMD_Database_Gamestates.commandInvoker != null)
            {
                CMD_Database_Gamestates.commandInvoker.AddCommand(new AnswerQuestions_Command(parameters[1], parameters[2]));
                Debug.Log("Added Answer Questions Command");
            }
        }
        //Order of parameters: command name, correct evidence, correct answer, wrong answer
        else if (parameters[0] == "PresentEvidence_Command")
        {
            if (CMD_Database_Gamestates.commandInvoker != null)
            {
                CMD_Database_Gamestates.commandInvoker.AddCommand(new PresentEvidence_Command(parameters[1], parameters[2], parameters[3]));
                Debug.Log("Added Present Evidence Command");
            }
        }
        //Order of parameters: command name, background image, correctness map, correct answer, wrong answer
        else if (parameters[0] == "SpotSelection_Command")
        {
            if (CMD_Database_Gamestates.commandInvoker != null)
            {
                CMD_Database_Gamestates.commandInvoker.AddCommand(new SpotSelection_Command());
                Debug.Log("Added Spot Selection Command");
            }
        }
        else if (parameters[0] == "ThanksForPlaying_Command")
        {
            if (CMD_Database_Gamestates.commandInvoker != null)
            {
                CMD_Database_Gamestates.commandInvoker.AddCommand(new ThanksForPlaying_Command());
                Debug.Log("Added Thanks For PlayingCommand");
            }
        }
        else
            Debug.LogError($"ERROR: COMMAND {parameters[0]} NOT IN DATABASE");
    }
    private static void CommandPattern_FastExecute(string[] parameters)
    {
        if (parameters[0] == "CrossExam_Command")
        {
            if (CMD_Database_Gamestates.commandInvoker != null)
            {
                CMD_Database_Gamestates.commandInvoker.FastExecute(new CrossExam_Command(parameters[1], parameters[2], parameters[3], parameters[4], parameters[5], parameters[6]));
                Debug.Log("Added Cross Exam Command");
            }
        }
        else if (parameters[0] == "Dialogue_Command")
        {
            if (CMD_Database_Gamestates.commandInvoker != null)
            {
                CMD_Database_Gamestates.commandInvoker.FastExecute(new Dialogue_Command(parameters[1]));
                Debug.Log("Added Dialogue Command");
            }
        }
        else if (parameters[0] == "AnswerQuestions_Command")
        {
            if (CMD_Database_Gamestates.commandInvoker != null)
            {
                CMD_Database_Gamestates.commandInvoker.FastExecute(new AnswerQuestions_Command(parameters[1], parameters[2]));
                Debug.Log("Added Answer Questions Command");
            }
        }
        else if (parameters[0] == "PresentEvidence_Command")
        {
            if (CMD_Database_Gamestates.commandInvoker != null)
            {
                CMD_Database_Gamestates.commandInvoker.FastExecute(new PresentEvidence_Command(parameters[1], parameters[2], parameters[3]));
                Debug.Log("Added Present Evidence Command");
            }
        }
        else if (parameters[0] == "SpotSelection_Command")
        {
            if (CMD_Database_Gamestates.commandInvoker != null)
            {
                CMD_Database_Gamestates.commandInvoker.FastExecute(new SpotSelection_Command());
                Debug.Log("Added Spot Selection Command");
            }
        }
        else
            Debug.LogError($"ERROR: COMMAND {parameters[0]} NOT IN DATABASE");
    }
    private static void CommandPattern_NextNextCommand(string parameter)
    {
        Debug.Log("Running next next command");
        if (CMD_Database_Gamestates.commandInvoker != null)
        {
            Debug.Log($"Inside if statement");
            CMD_Database_Gamestates.commandInvoker.NextNextCommand("");
            Debug.Log("Went to the next next command");
        }
        else
            Debug.Log("Invoker is null");
    }
}
