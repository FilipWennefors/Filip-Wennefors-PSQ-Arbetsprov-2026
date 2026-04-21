using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponHolsteringState : WeaponState
{
    float holsterTimeElapsed;
    float holsterSpeed;

    WeaponHandler stateMachineRef;
    SO_Weapon currentWeapon;
    // Start is called before the first frame update
    public override void EnterState(WeaponHandler stateMachine)
    {
        stateMachineRef = stateMachine;
        currentWeapon = stateMachineRef.equippedWeapons[stateMachineRef.currentWeaponIndex];
        holsterSpeed = currentWeapon.holsterSpeed;
    }
    public override void UpdateState()
    {
        if (currentWeapon.animator != null)
        {
            currentWeapon.animator.SetFloat("HolsterSpeed", 1 / holsterSpeed);
            currentWeapon.animator.Play("Holstering"); 
        }

        holsterTimeElapsed += 1 * Time.deltaTime;
        if (holsterTimeElapsed >= holsterSpeed)
        {
            ResetWeaponClip();
            stateMachineRef.SwitchWeapon();
            stateMachineRef.SwitchState(new WeaponDeployingState());
        }
    }
    public override void ExitState()
    {
        
    }
    /// <summary>
    /// Sets the weapon clip size to the max allowed capacity based on max size and ammo available
    /// </summary>
    void ResetWeaponClip()
    {
        if (currentWeapon.clipSize != currentWeapon.maxClipSize) //To fix a bug where the weapon clip would reset to 0 if you didn't fire your weapon
        {
            int ammoMissingInClip = currentWeapon.maxClipSize - currentWeapon.clipSize;
            ammoMissingInClip = Mathf.Clamp(ammoMissingInClip, 0, currentWeapon.ammo);
            currentWeapon.ammo -= ammoMissingInClip;
            currentWeapon.clipSize = ammoMissingInClip;
        }
        currentWeapon = null;
    }
}
