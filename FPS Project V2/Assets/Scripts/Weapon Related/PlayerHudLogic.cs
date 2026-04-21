using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class PlayerHudLogic : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI ammoCount;
    [SerializeField] TextMeshProUGUI health;

    [SerializeField] WeaponHandler weaponWheel;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        SO_Weapon weaponInformation = weaponWheel.equippedWeapons[weaponWheel.currentWeaponIndex];
        ammoCount.text = $"{weaponInformation.clipSize}/{weaponInformation.ammo}";
    }
}
