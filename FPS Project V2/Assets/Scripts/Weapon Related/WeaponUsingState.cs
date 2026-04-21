using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponUsingState : WeaponState
{
    float weaponFireCooldown;
    float reloadTimeElapsed;
    bool isReloading = false;

    float idleAnimSpeed = 1;
    WeaponHandler stateMachineRef;
    SO_Weapon weapon;
    public override void EnterState(WeaponHandler stateMachine)
    {
        stateMachineRef = stateMachine;
        
        weapon = stateMachineRef.equippedWeapons[stateMachineRef.currentWeaponIndex];

        stateMachineRef.weaponAnimator = weapon.animator;
        stateMachineRef.OnSwitchToWeapon += OnWeaponSwitch;

        if (weapon.animator != null)
        {
            weapon.animator.SetFloat("IdleAnimSpeed", 1 / idleAnimSpeed);
            weapon.animator.SetFloat("FireAnimSpeed", 1 / weapon.fireRate);
            weapon.animator.SetFloat("ReloadSpeed", 1 / weapon.reloadSpeed);
            weapon.animator.Play("Idle");
        }
    }
    public override void UpdateState()
    {
        
        WeaponUpdateIdle();
    }
    public override void ExitState()
    {
        Debug.LogWarning("Idle ExitState not implemented");
    }
    void OnWeaponSwitch(object sender, WeaponHandler.WeaponSwitchArgs args)
    {
        ExitState();
        stateMachineRef.SwitchState(new WeaponHolsteringState());
    }
    public void WeaponUpdateIdle()
    {


        if (Input.GetKey(KeyCode.Mouse0) && weaponFireCooldown <= 0 && weapon.clipSize > 0)
        {
            weaponFireCooldown = weapon.fireRate;
            isReloading = false;
            weapon.audioSource.PlayOneShot(weapon.fireSound);
            weapon.animator.Play("Shooting", -1, 0f);

            weapon.clipSize -= weapon.ammoExpelledAtOnce;

            weapon.PrimaryFire();
        }
        else if (Input.GetKeyDown(KeyCode.R) || (weapon.clipSize == 0 && weapon.ammo != 0))
        {
            if (weapon.clipSize != weapon.maxClipSize && !isReloading && weaponFireCooldown <= 0)
            {
                isReloading = true;
                reloadTimeElapsed = 0;
                weapon.animator.Play("Reloading", -1, 0f);
            }
        }
        if (isReloading == true)
        {
            reloadTimeElapsed += 1 * Time.deltaTime;
            if (reloadTimeElapsed >= weapon.reloadSpeed)
            {
                int ammoToAdd;

                if (weapon.ammo < weapon.ammoPerReload)
                    ammoToAdd = weapon.ammo;
                else
                    ammoToAdd = Mathf.Clamp(weapon.ammoPerReload, 0, weapon.maxClipSize - weapon.clipSize);

                weapon.clipSize += ammoToAdd;
                weapon.ammo -= ammoToAdd;

                //Tells the game to continue reloading if the ammo capacity isn't full
                if (weapon.clipSize == weapon.maxClipSize || weapon.ammo == 0)
                {
                    isReloading = false;
                }
                else
                {
                    //Restarts Reload
                    reloadTimeElapsed = 0;
                    weapon.animator.Play("Reloading", -1, 0f);
                }
            }
        }

        weaponFireCooldown -= 1 * Time.deltaTime;
    }
}
