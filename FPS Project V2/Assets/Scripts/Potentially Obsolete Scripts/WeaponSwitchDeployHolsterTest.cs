using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class WeaponSwitchDeployHolsterTest : MonoBehaviour
{
    [SerializeField] List<SO_Weapon> equippedWeapons = new List<SO_Weapon>();
    float weaponWheelScrollFactor;
    int currentWeaponIndex;

    [SerializeField] TextMeshProUGUI holsterIdentifer;
    [SerializeField] TextMeshProUGUI weaponIdentifier;


    [SerializeField] Camera weaponCamera;



    [SerializeField] float weaponWheelScrollSens;

    [SerializeField] GameObject weaponWheelUI;


    float weaponWheelScrollDeactivationTime = 0.35f;
    float weaponWheelDeactivationTimeElapsed;
    bool usingWeaponWheel = false;
    
    // Start is called before the first frame update
    void Start()
    {
        weaponWheelScrollFactor = currentWeaponIndex;

        foreach (SO_Weapon weapon in equippedWeapons)
        {
            weapon.weaponObject = Instantiate(weapon.weaponModel, new Vector3(), new Quaternion(), weaponCamera.transform);
            weapon.weaponObject.transform.localPosition = weapon.weaponModelPos;
            weapon.weaponObject.transform.localScale = weapon.weaponModelScale;
            weapon.weaponObject.SetActive(false);
            weapon.ammo = weapon.maxAmmo;
            weapon.clipSize = weapon.maxClipSize;
        }
        equippedWeapons[currentWeaponIndex].weaponObject.SetActive(true);
    }

    // Update is called once per frame
    void Update()
    {
        //Since Input.MouseScrollDelta doesn't work how I was hoping, by sometimes returning 0 even if scrolling, we have to implement a different method

        //Once the player starts scrolling, we set a boolean that says the weapon wheel is active.

        //Then if mouse scroll delta hasn't been 1 after a few millseconds, we set the boolean to false and deactivate the wheel. Then we can assign the weapon chosen.


        SO_Weapon currentWeapon = equippedWeapons[currentWeaponIndex];

        //Activates Weapon Wheel once scrolling starts
        if (Input.mouseScrollDelta.y != 0)
        {
            usingWeaponWheel = true;
            weaponWheelUI.SetActive(true);
        }
        //Running when using wheel. Determine time until deactivation
        if(usingWeaponWheel)
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
            //Used to determine when to deactivate weapon wheel
            if (Input.mouseScrollDelta.y == 0)
            {
                weaponWheelDeactivationTimeElapsed += (1 * Time.deltaTime);
            }
            else //Mouse Scroll Delta is 1
            {
                weaponWheelDeactivationTimeElapsed = 0;
            }
            if(weaponWheelDeactivationTimeElapsed > weaponWheelScrollDeactivationTime)
            {
                usingWeaponWheel = false;
                weaponWheelUI.SetActive(false);

                currentWeapon.weaponObject.SetActive(false);
                equippedWeapons[(int)weaponWheelScrollFactor].weaponObject.SetActive(true);
                currentWeaponIndex = (int)weaponWheelScrollFactor;

            }
        }
        
        
        holsterIdentifer.text = $"Weapon Wheel scroll factor is{(int)weaponWheelScrollFactor}";




        //SO_Weapon currentWeapon = equippedWeapons[currentWeaponIndex];

        //weaponWheelScrollFactor -= Input.mouseScrollDelta.y * weaponWheelScrollSens;
        //if (weaponWheelScrollFactor > equippedWeapons.Count - 1)
        //{
        //    weaponWheelScrollFactor = 0;
        //}
        //else if (weaponWheelScrollFactor < 0)
        //{
        //    weaponWheelScrollFactor = equippedWeapons.Count - 1;
        //}
        ////Code activates when the player switches weapons
        //if ((int)weaponWheelScrollFactor != currentWeaponIndex)
        //{
        //    if (currentWeapon.holsterTimeElapsed >= currentWeapon.holsterSpeed)
        //    {
        //        currentWeapon.weaponObject.SetActive(false);
        //        equippedWeapons[(int)weaponWheelScrollFactor].weaponObject.SetActive(true);
        //        currentWeaponIndex = (int)weaponWheelScrollFactor;
        //        currentWeapon.holsterTimeElapsed = 0;
        //    }
        //    else
        //        currentWeapon.holsterTimeElapsed += (1 * Time.deltaTime);
        //}
        //if (currentWeapon.holsterTimeElapsed != 0)
        //{
        //    holsterIdentifer.text = $"Holstering weapon: Time elapsed = {currentWeapon.holsterTimeElapsed}";   
        //}
        //else
        //{
        //    holsterIdentifer.text = "Not Holstering weapon";
        //}
        weaponIdentifier.text = $"Weapon 0{currentWeaponIndex}: {currentWeapon.weaponName}";
    }
}
