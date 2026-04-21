using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//State fro wehn the player is switching to a weapon
public class WeaponDeployingState : WeaponState
{
    float deployTimeElapsed;

    float deploySpeed;
    WeaponHandler stateMachineRef;
    SO_Weapon currentWeapon;
    // Start is called before the first frame update
    public override void EnterState(WeaponHandler stateMachine)
    {
        stateMachineRef = stateMachine;
        
        
        currentWeapon = stateMachineRef.equippedWeapons[stateMachineRef.currentWeaponIndex];
        deploySpeed = currentWeapon.deploySpeed;
        currentWeapon.weaponObject.SetActive(true);

        
    }
    public override void UpdateState()
    {

        //What we need to do here is keep track of the player weapon deploy time duration. Then if the time goes above the deploy speed, we switch to idle state.

        //If the player happens to switch weapon during the weapon deploy process, we reverse the animation and go into deploy for the new weapon
        if (currentWeapon.animator != null)
        {
            currentWeapon.animator.SetFloat("DeploySpeed", 1 / deploySpeed);
            currentWeapon.animator.Play("Deploying");
        }
        deployTimeElapsed += (1 * Time.deltaTime);
        if (deployTimeElapsed >= deploySpeed)
        {
            //Debug.Log("Shall Swap State");
            stateMachineRef.SwitchState(new WeaponUsingState());
        }
    }
    public override void ExitState()
    {
        Debug.LogWarning("Exit state not implemented");
    }
}
