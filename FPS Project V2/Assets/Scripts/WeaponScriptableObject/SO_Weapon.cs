using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using static UnityEngine.UI.Image;


[CreateAssetMenu(fileName = "Generic Weapon", menuName = "Weapons/Generic")]
public class SO_Weapon : ScriptableObject
{
    public string weaponName;
    public int damage;
    [HideInInspector] public int clipSize;
    [HideInInspector] public int ammo;
    public int maxClipSize;
    public int maxAmmo;
    public int ammoPerReload = 1;
    public int ammoExpelledAtOnce = 1;
    public float fireRate;
    public float reloadSpeed;
    public float deploySpeed;
    public float holsterSpeed;
    public float range = 10000f;
    public GameObject weaponModel;


    public Vector3 weaponModelPos;
    public Vector3 weaponModelScale = new Vector3(1, 1, 1);
    public AudioClip fireSound;

    [HideInInspector] public float deployTimeElapsed;
    [HideInInspector] public float holsterTimeElapsed;
    

    [HideInInspector] public GameObject weaponObject;
    [HideInInspector] public GameObject weaponBarrel;
    [HideInInspector] public AudioSource audioSource;
    [HideInInspector] public Animator animator;
    [HideInInspector] public Camera mainCam;


    float weaponFireCooldown;
    float reloadTimeElapsed;
    bool isReloading = false;
    


    [HideInInspector] public enum WeaponState //Obsolete
    {
        Deploying,
        Deployed,
        Holstering

    }
    public WeaponState weaponState;
    /// <summary>
    /// Shoots a single bullet towards a target and deals damage to it
    /// </summary>
    /// <param name="excludePlayerMask"></param>
    /// <param name="direction"></param>
    public void ShootWeaponSingleBulletHitscan(LayerMask excludePlayerMask, Vector3 direction)
    {
        Debug.DrawRay(mainCam.transform.position, direction * 10000f, Color.red, 2f);
        RaycastHit hitObject;

        Debug.Log("Hit object");
        if (Physics.Raycast(mainCam.transform.position, direction, out hitObject, range, excludePlayerMask))
        {
            HitboxLogic shotlogicComponent = hitObject.transform.gameObject?.GetComponent<HitboxLogic>();
            if (shotlogicComponent != null)
            {
                Debug.Log("Invoking OnShotLogic");
                shotlogicComponent.OnShotLogic(damage);
            }
        }
    }
    /// <summary>
    /// Attempts to add ammo to the specified weapon. Returns true if ammo has been added to the weapon
    /// </summary>
    /// <param name="ammoQuantity"></param>
    /// <returns></returns>
    public bool TryAddAmmo(int ammoQuantity)
    {
        Debug.Log($"Tried to add ammo to weapon{weaponName}");
        if( ammo == maxAmmo)
            return false;
        else
        {
            ammo += ammoQuantity;
            ammo = Math.Clamp(ammo, 0, maxAmmo);
            return true;
        }
    }
    public virtual void PrimaryFire()
    {
        
    }
}

/*
     public void WeaponUpdateIdle()
    {


        if (Input.GetKey(KeyCode.Mouse0) && weaponFireCooldown <= 0 && clipSize > 0)
        {
            weaponFireCooldown = fireRate;
            isReloading = false;
            weaponAudioSource.PlayOneShot(weaponSound);
            weaponAnimator.Play("Shooting", -1, 0f);

            clipSize -= ammoExpelledAtOnce;

            PrimaryFire();
        }
        else if (Input.GetKeyDown(KeyCode.R) || (clipSize == 0 && ammo != 0))
        {
            if (clipSize != maxClipSize && !isReloading && weaponFireCooldown <= 0)
            {
                isReloading = true;
                reloadTimeElapsed = 0;
                weaponAnimator.Play("Reloading", -1, 0f);
            }
        }
        if (isReloading == true)
        {
            reloadTimeElapsed += 1 * Time.deltaTime;
            if (reloadTimeElapsed >= reloadSpeed)
            {
                int ammoToAdd;

                if (ammo < ammoPerReload)
                    ammoToAdd = ammo;
                else
                    ammoToAdd = Mathf.Clamp(ammoPerReload, 0, maxClipSize - clipSize);

                clipSize += ammoToAdd;
                ammo -= ammoToAdd;

                //Tells the game to continue reloading if the ammo capacity isn't full
                if (clipSize == maxClipSize || ammo == 0)
                {
                    isReloading = false;
                }
                else
                {
                    //Restarts Reload
                    reloadTimeElapsed = 0;
                    weaponAnimator.Play("Reloading", -1, 0f);
                }
            }
        }

        weaponFireCooldown -= 1 * Time.deltaTime;
    }
 
 */


/*
     public void WeaponUpdate(int weaponIndex, int WeaponSelectedIndex, TextMeshProUGUI debugTextLine3, TextMeshProUGUI debugTextLine4, WeaponSwitchTest weaponSwitcher)
    {
        Debug.Log($"Running Weapon Update at {weaponName}");

        Debug.Log($"Weapon State is {weaponState}");

        if (weaponState == WeaponState.Deploying)
        {
            //This means that the player has not swapped weapons mid deploy so we commence as normal
            if (weaponIndex == WeaponSelectedIndex)
            {
                deployTimeElapsed += 1 * Time.deltaTime;
                if (deployTimeElapsed >= deploySpeed)
                {
                    weaponState = WeaponState.Deployed;
                }
                debugTextLine3.text = $"Weapon Deploy time elapsed is {deployTimeElapsed}";
                weaponAnimator.Play("Deploying");
            }
            else //Player swaps weapon mid deploy, reverse animation and then swap to new weapon
            {

            }
        }
        else if (weaponState == WeaponState.Deployed)
        {
            if (weaponIndex == WeaponSelectedIndex)
            {
                
            }
            else
            {
                weaponState = WeaponState.Holstering;
            }
        }
        else if (weaponState == WeaponState.Holstering)
        {
            weaponAnimator.Play("Holstering");
            holsterTimeElapsed += 1 * Time.deltaTime;
            if (holsterTimeElapsed >= holsterSpeed)
            {
                weaponSwitcher.SwitchWeapon();
            }
            debugTextLine3.text = $"Weapon Holster time elapsed is {holsterTimeElapsed}";
            //debugTextLine4.text = $"Finished Holstering";

        }

    }
 */
