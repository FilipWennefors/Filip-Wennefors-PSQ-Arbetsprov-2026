using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class WeaponSwitchTest : MonoBehaviour
{
    public List<SO_Weapon> equippedWeapons = new List<SO_Weapon>();

    [SerializeField] Camera weaponCamera;

    [SerializeField] TextMeshProUGUI currentWeaponIndexIndicator;
    [SerializeField] TextMeshProUGUI currentWeaponSelectedIndexIndicator;
    [SerializeField] TextMeshProUGUI debugTextLine3;
    [SerializeField] TextMeshProUGUI debugTextLine4;

    public int currentWeaponIndex;
    public int currentWeaponSelectedIndex;
    // Start is called before the first frame update
    void Start()
    {
        foreach (SO_Weapon weapon in equippedWeapons)
        {
            weapon.weaponObject = Instantiate(weapon.weaponModel, new Vector3(), new Quaternion(), weaponCamera.transform);
            weapon.weaponObject.transform.localPosition = weapon.weaponModelPos;
            weapon.weaponObject.transform.localScale = weapon.weaponModelScale;
            weapon.weaponObject.SetActive(false);
            weapon.ammo = weapon.maxAmmo;
            weapon.clipSize = weapon.maxClipSize;
            weapon.animator = weapon.weaponObject.GetComponent<Animator>();
            weapon.weaponState = SO_Weapon.WeaponState.Deploying;
        }
        equippedWeapons[currentWeaponIndex].weaponObject.SetActive(true);
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.UpArrow))
        {
            currentWeaponSelectedIndex++;
        }
        else if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            currentWeaponSelectedIndex--;
        }

        //equippedWeapons[currentWeaponIndex].WeaponUpdate(currentWeaponIndex, currentWeaponSelectedIndex, debugTextLine3, debugTextLine4, this);











        currentWeaponIndexIndicator.text = $"Current Index{currentWeaponIndex}";
        currentWeaponSelectedIndexIndicator.text = $"Current Selected Index{currentWeaponSelectedIndex}";
        //
    }
    public void SwitchWeapon()
    {
        equippedWeapons[currentWeaponIndex].deployTimeElapsed = 0;
        equippedWeapons[currentWeaponIndex].holsterTimeElapsed = 0;
        equippedWeapons[currentWeaponIndex].weaponState = SO_Weapon.WeaponState.Deploying;
        equippedWeapons[currentWeaponIndex].weaponObject.SetActive(false);
        currentWeaponIndex = currentWeaponSelectedIndex;
        equippedWeapons[currentWeaponIndex].weaponObject.SetActive(true);
    }
}
