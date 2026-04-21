using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class WeaponHandler : MonoBehaviour
{
    public List<SO_Weapon> equippedWeapons = new List<SO_Weapon>();

    [SerializeField] float weaponWheelScrollSens;

    [SerializeField] Camera weaponCamera;

    [SerializeField] GameObject weaponWheelUI;

    float weaponWheelScrollFactor;

    float weaponWheelScrollDeactivationTime = 0.35f;
    float weaponWheelDeactivationTimeElapsed;

    [HideInInspector] public int currentWeaponIndex;
    [HideInInspector] public int selectedWeaponIndex;

    bool usingWeaponWheel;

    WeaponState currentWeaponState;
    public readonly WeaponDeployingState deployState = new WeaponDeployingState();
    public readonly WeaponUsingState idleState = new WeaponUsingState();
    public readonly WeaponHolsteringState holsterState = new WeaponHolsteringState();

    [HideInInspector] public string debugMessage;
    /// <summary>
    /// Called every time the player switches weapons
    /// </summary>
    public event EventHandler<WeaponSwitchArgs> OnSwitchToWeapon;
    public class WeaponSwitchArgs: EventArgs
    {
        public int newSelectedWeaponIndex;
    }
    public event EventHandler<WeaponFiredArgs> OnWeaponFired;
    public class WeaponFiredArgs : EventArgs
    {
        public string WeaponName;
    }

    [HideInInspector] public Animator weaponAnimator;
    bool pausedGame;

    // Start is called before the first frame update
    void Start()
    {
        //Spawns in all the player weapons and sets their default values
        foreach (SO_Weapon weapon in equippedWeapons)
        {
            AudioSource weaponAudioSource;

            weapon.weaponObject = Instantiate(weapon.weaponModel, new Vector3(), new Quaternion(), weaponCamera.transform);
            weapon.weaponObject.transform.localPosition = weapon.weaponModelPos;
            weapon.weaponObject.transform.localScale = weapon.weaponModelScale;
            weapon.weaponObject.SetActive(false);
            weapon.ammo = weapon.maxAmmo;
            weapon.clipSize = weapon.maxClipSize;
            weapon.animator = weapon.weaponObject.GetComponent<Animator>();
            weapon.weaponObject.TryGetComponent<AudioSource>(out weaponAudioSource);
            weapon.audioSource = weaponAudioSource;
            weapon.mainCam = Camera.main;
            weapon.weaponObject.TryGetComponent<WeaponBarrelRef>(out WeaponBarrelRef barrelRef);
            
            if(barrelRef != null) 
                weapon.weaponBarrel = barrelRef.weaponBarrel;
        }

        currentWeaponState = deployState;
        //Debug.Log("Will Enter Deploy State");
        deployState.EnterState(this);

        SettingsMenuStaticRef.SettingsMenuLogic.OnSettingsMenuToggled += SettingsMenuToggled;

        Cursor.lockState = CursorLockMode.Confined;
    }

    // Update is called once per frame
    void Update()
    {
        if (!pausedGame)
        {
            #region WeaponSwitching
            //Activates Weapon Wheel once scrolling starts
            if (Input.mouseScrollDelta.y != 0)
            {
                usingWeaponWheel = true;
                weaponWheelUI.SetActive(true);

            }
            //Running when using wheel. Determine time until deactivation
            if (usingWeaponWheel)
            {
                //Scroll Between weapons
                weaponWheelScrollFactor -= Input.mouseScrollDelta.y * weaponWheelScrollSens;
                if (weaponWheelScrollFactor > equippedWeapons.Count - 1)
                {
                    weaponWheelScrollFactor = 0;
                }
                else if (weaponWheelScrollFactor < 0)
                {
                    weaponWheelScrollFactor = equippedWeapons.Count - 1;
                }
                selectedWeaponIndex = (int)weaponWheelScrollFactor;
                //Used to determine when to deactivate weapon wheel
                if (Input.mouseScrollDelta.y == 0)
                {
                    weaponWheelDeactivationTimeElapsed += (1 * Time.deltaTime);
                }
                else //Mouse Scroll Delta is 1
                {
                    weaponWheelDeactivationTimeElapsed = 0;
                }
                if (weaponWheelDeactivationTimeElapsed > weaponWheelScrollDeactivationTime)
                {
                    usingWeaponWheel = false;
                    weaponWheelUI.SetActive(false);

                    //Here is where we would then notify to switch weapons
                    if (selectedWeaponIndex != currentWeaponIndex)
                    {
                        OnSwitchToWeapon?.Invoke(this, new WeaponSwitchArgs { newSelectedWeaponIndex = selectedWeaponIndex });
                    }
                }
            }
            #endregion

            currentWeaponState.UpdateState();
        }
    }
    public void SwitchState(WeaponState newState)
    {
        currentWeaponState.ExitState();
        currentWeaponState = newState;
        currentWeaponState.EnterState(this);
    }
    /// <summary>
    /// Called in order to switch to the selected weapon after finishing holstering a weapon
    /// </summary>
    public void SwitchWeapon()
    {
        equippedWeapons[currentWeaponIndex].weaponObject.SetActive(false);
        currentWeaponIndex = selectedWeaponIndex;
        equippedWeapons[currentWeaponIndex].weaponObject.SetActive(true);
    }
    public void WeaponFired()
    {
        OnWeaponFired?.Invoke(this, new WeaponFiredArgs{ WeaponName = equippedWeapons[currentWeaponIndex].weaponName});
    }
    void SettingsMenuToggled(object sender, SettingsMenuLogic.SettingsMenuToggledArgs args)
    {
        pausedGame = args.isMenuActive;
    }
}
