using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class WeaponState
{
    /// <summary>
    /// Called right after switching to a state. Like the start function for monobehaviours
    /// </summary>
    /// <param name="stateMachine"></param>
    public abstract void EnterState(WeaponHandler stateMachine);
    /// <summary>
    /// Called every frame.
    /// </summary>
    public abstract void UpdateState();
    public abstract void ExitState();
}
