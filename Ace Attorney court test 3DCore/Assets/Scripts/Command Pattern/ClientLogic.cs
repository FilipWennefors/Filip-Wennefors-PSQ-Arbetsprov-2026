using DIALOGUE;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using UnityEngine;

public class ClientLogic : MonoBehaviour
{
    /*What client means in terms of command pattern implementations is any script that adds the list of commands to the invoker. There can be any number of clients which add
     commands to the invoker
    
     I suspect what the update field will be used for in this test will be to switch between states as kind of a way to test conditions without modifying the invoker too much
    */

    [SerializeField] References variableReferences;
    [SerializeField] Courtroom_CommandPatternInvoker invoker;
    // Start is called before the first frame update
    void Start()
    {
        //TODO: Need to properly parse the config file
        //Probably done
        List<string> unparsedConfig = FileManager.ReadTextFile("TestLevel_ConfigurationFile.txt", false);

        //This method of getting the args works.
        foreach (string line in unparsedConfig)
        {
            DIALOGUE_LINE parsedLine = DialogueParser.Parse(line);
            List<DL_COMMAND_DATA.Command> commands;
            if (parsedLine.commands != null)
            {
                commands = parsedLine.commands.commands;

                foreach (DL_COMMAND_DATA.Command command in commands)
                {
                    string[] parametersList = new string[command.arguments.Length + 1];
                    parametersList[0] = command.name;
                    for(int i = 1; i <= command.arguments.Length; i++)
                    {
                        Debug.Log($"On iteration {i} at {command.name}");
                        parametersList[i] = command.arguments[i - 1];
                    }
                    CommandManager.instance.Execute("AddCommand", parametersList);
                }
            }
        }

        invoker.GetCurrentCommand().Initialize(variableReferences);
    }

    // Update is called once per frame
    void Update()
    {
        //if (Input.GetKeyDown(KeyCode.Space))
        //{
        //    invoker.NextCommand("");
        //}


    }
}
