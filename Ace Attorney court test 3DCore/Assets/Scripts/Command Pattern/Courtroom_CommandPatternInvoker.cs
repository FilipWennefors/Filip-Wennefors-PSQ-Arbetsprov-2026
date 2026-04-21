using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//For better explanation of functionality: https://www.youtube.com/watch?v=oLRINAn0cuw&t=257s
public class Courtroom_CommandPatternInvoker : MonoBehaviour
{

    /*
     Okayy, what this script is for is to manage all the commands during court segments. So this means everything gets placed in a list and then handled from here on out

     */
    int commandIndex;

    [SerializeField] References variableReferences;

    List<ICommand> commandsList;

    public event EventHandler<CommandSwitchArgs> OnSwitchCommand;
    public class CommandSwitchArgs: EventArgs
    {
        public string commandKeybinds;
    }
    //Constructor
    public Courtroom_CommandPatternInvoker()
    {
        commandsList = new List<ICommand>();   
    }
    private void Awake()
    {
        CMD_Database_Gamestates.commandInvoker = this;
        StaticReferences.Courtroom_CommandPatternInvoker = this;
    }
    private void Update()
    {
        //Debug.Log(commandsList.Count);
        //Debug.Log($"Running Command {GetCurrentCommand().GetType().Name} at index {commandIndex}  ");
        commandsList[commandIndex].UpdateCommand(this.variableReferences);

        //string result = "List contents: ";
        //foreach (var item in commandsList)
        //{
        //    result += item.ToString() + ", ";
        //}
        //Debug.Log(result);
    }
    /// <summary>
    /// Adds the command to the list of commands to execute at the back of the list
    /// </summary>
    /// <param name="newCommand"></param>
    public void AddCommand(ICommand newCommand)
    {
        Debug.Log("added command");
        commandsList.Add(newCommand);
    }
    /// <summary>
    /// Goes to the next command in the list of commands and executes it
    /// </summary>
    /// <param name="next"></param>
    public void NextCommand(string next)
    {
        Debug.Log($"CommandsList count is { commandsList.Count }");
        Debug.Log($"Command Index is {commandIndex}");
        commandsList[commandIndex + 1].Initialize(this.variableReferences);
        commandIndex++;
        InvokeOnSwitchCommand();
    }
    /// <summary>
    /// Goes forward two indexes in the list of commands and then executes it
    /// </summary>
    /// <param name="next"></param>
    public void NextNextCommand(string next)
    {
        Debug.Log($"CommandsList count is {commandsList.Count}");
        Debug.Log($"Command Index is {commandIndex}");
        commandsList[commandIndex + 2].Initialize(this.variableReferences);
        commandIndex = commandIndex + 2;
        InvokeOnSwitchCommand();
    }
    public void ChangeCommand(int index)
    {
        commandsList[index].Initialize(this.variableReferences);
        commandIndex = index;
        InvokeOnSwitchCommand();
    }
    /// <summary>
    /// Immediately executes the command that is specified
    /// </summary>
    /// <param name="newCommand"></param>
    public void FastExecute(ICommand newCommand)
    {
        Debug.Log("added command");
        commandsList.Insert(commandIndex, newCommand);
        commandsList[commandIndex].Initialize(this.variableReferences);
        InvokeOnSwitchCommand();
    }


    //Could probably use getters and setters but this works for now
    /// <summary>
    /// Returns the command currently being executed
    /// </summary>
    /// <returns></returns>
    public ICommand GetCurrentCommand()
    {
        return commandsList[commandIndex];
    }
    public void InvokeOnSwitchCommand()
    {

        OnSwitchCommand?.Invoke(this, new CommandSwitchArgs { commandKeybinds = GetCurrentCommand().GetCommandKeyBinds() });
    }
}

