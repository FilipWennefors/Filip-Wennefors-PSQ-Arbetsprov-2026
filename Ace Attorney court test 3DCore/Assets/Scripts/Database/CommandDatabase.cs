using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static DL_COMMAND_DATA;


//NOTICE FOR PSQ: The following is tutorial code, Read the included document about the project for more info


public class CommandDatabase
{
    private Dictionary<string, Delegate> database = new Dictionary<string, Delegate>();

    public bool HasCommand(string commandName) => database.ContainsKey(commandName);

    public void AddCommand(string commandName, Delegate command) 
    {
        if (!database.ContainsKey(commandName))
        {
            database[commandName] = command;
        }
        else
            Debug.LogError($"Command already exists in database '{commandName}'");

    }
    public void AddCommand(string commandName, string[] fileName, Delegate command)
    {
        if (!database.ContainsKey(commandName))
        {
            database[commandName] = command;
        }
        else
            Debug.LogError($"Command already exists in database '{commandName}'");

    }
    public Delegate GetCommand(string commandName)
    {
        if (!database.ContainsKey(commandName))
        {
            Debug.LogError($"Command '{commandName}' does not exist in database");
            return null;
        }
        return database[commandName];
    }
        
}
