using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class WeaponWheelUILogic : MonoBehaviour
{
    [SerializeField] WeaponHandler weaponWheelLogic;

    [SerializeField] List<WeaponWheelUIElement> weaponWheelUIElements = new List<WeaponWheelUIElement>();

    List<SO_Weapon> equippedWeapons;
    [SerializeField] Sprite wheelUnselectedSprite;
    [SerializeField] Sprite wheelSelectedSprite;

    [System.Serializable]
    class WeaponWheelUIElement
    {
        public RawImage background;
        public RawImage weaponIcon;
        public Sprite iconSpriteSelected;
        public Sprite iconSpriteUnselected;
        public TextMeshProUGUI ammoCounter;
    }
    // Start is called before the first frame update
    void Start()
    {
        equippedWeapons = weaponWheelLogic.equippedWeapons;
    }

    // Update is called once per frame
    void Update()
    {
        //Sets all weapons to have the correct ammo count in the weapon wheel
        for (int i = 0; i < weaponWheelUIElements.Count; i++)
        {
            weaponWheelUIElements[i].ammoCounter.text = $"{equippedWeapons[i].clipSize}/{equippedWeapons[i].ammo}";
        }

        //Assigns all weapon wheel UI elements to be correct color/image if selected or not
        for (int i = 0; i < weaponWheelUIElements.Count; i++)
        {
            weaponWheelUIElements[i].background.texture = wheelUnselectedSprite.texture;
            weaponWheelUIElements[i].weaponIcon.texture = weaponWheelUIElements[i].iconSpriteUnselected.texture;
            weaponWheelUIElements[i].ammoCounter.color = Color.white;
        }
        weaponWheelUIElements[weaponWheelLogic.selectedWeaponIndex].background.texture = wheelSelectedSprite.texture;
        weaponWheelUIElements[weaponWheelLogic.selectedWeaponIndex].weaponIcon.texture = weaponWheelUIElements[weaponWheelLogic.selectedWeaponIndex].iconSpriteSelected.texture;
        weaponWheelUIElements[weaponWheelLogic.selectedWeaponIndex].ammoCounter.color = Color.black;
    }
}