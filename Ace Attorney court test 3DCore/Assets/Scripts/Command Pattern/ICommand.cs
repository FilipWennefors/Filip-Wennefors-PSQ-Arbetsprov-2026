//Abstract command Interface
using UnityEngine;

public interface ICommand
{
    void Initialize(References variableReferences);
    void UpdateCommand(References variableReferences);
    void Execute(References variableReference);
    string GetCommandKeyBinds();
}