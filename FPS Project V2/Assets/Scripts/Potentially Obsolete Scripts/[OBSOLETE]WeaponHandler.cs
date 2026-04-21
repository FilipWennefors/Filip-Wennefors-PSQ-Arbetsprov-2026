using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class ObsoleteWeaponHandler : MonoBehaviour
{
    [SerializeField] List<SO_Weapon> equippedWeapons = new List<SO_Weapon>();

    [SerializeField] LayerMask excludePlayerMask;
    [SerializeField] float weaponWheelScrollSens;


    [SerializeField] TextMeshProUGUI weaponIdentifier;
    [SerializeField] TextMeshProUGUI cooldownIndicator;
    [SerializeField] TextMeshProUGUI ammoCountIndicator;
    [SerializeField] TextMeshProUGUI coroutineIndicator;
    [SerializeField] Camera weaponCamera;
    [SerializeField] AudioSource weaponAudioSource;
    [SerializeField] AudioClip weaponWheelDeactivationSFX;

    [SerializeField] GameObject weaponWheelUI;
    [SerializeField] Sprite wheelSelectedSprite;
    [SerializeField] Sprite wheelUnselectedSprite;


    [SerializeField] List<WeaponWheelUIElement> weaponWheelUIElements = new List<WeaponWheelUIElement>();

    float weaponWheelScrollFactor;

    float weaponFiringCooldown;
    float elapsedReloadTime;

    float weaponWheelScrollDeactivationTime = 0.35f;
    float weaponWheelDeactivationTimeElapsed;

    int currentWeaponIndex;

    bool isReloading = false;
    bool cancelledReload = false;
    bool usingWeaponWheel;

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
        SO_Weapon currentWeapon = equippedWeapons[currentWeaponIndex];
        if (weaponFiringCooldown <= 0)
        {
            if (Input.GetKeyDown(KeyCode.Mouse0) && currentWeapon.clipSize != 0)
            {
                CancelReload();
                //currentWeapon.ShootWeaponSingleBulletHitscan(excludePlayerMask);
                currentWeapon.clipSize--;
                weaponAudioSource.PlayOneShot(currentWeapon.fireSound);
                weaponFiringCooldown = currentWeapon.fireRate;
                if (currentWeapon.clipSize == 0)
                {
                    ReloadWeapon();
                }
            }
        }
        else
            weaponFiringCooldown -= (1 * Time.deltaTime);
        if (Input.GetKeyDown(KeyCode.R) && currentWeapon.clipSize != currentWeapon.maxClipSize)
        {
            ReloadWeapon();
        }
        #region WeaponSwitching
        //Activates Weapon Wheel once scrolling starts
        if (Input.mouseScrollDelta.y != 0)
        {
            usingWeaponWheel = true;
            weaponWheelUI.SetActive(true);

            //Sets all weapons to have the correct ammo count in the weapon wheel
            for (int i = 0; i < weaponWheelUIElements.Count; i++)
            {
                weaponWheelUIElements[i].ammoCounter.text = $"{equippedWeapons[i].clipSize}/{equippedWeapons[i].ammo}";
            }
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
                //Not good idea, sounds bad
                //weaponAudioSource.PlayOneShot(weaponWheelDeactivationSFX);

                currentWeapon.weaponObject.SetActive(false);
                equippedWeapons[(int)weaponWheelScrollFactor].weaponObject.SetActive(true);
                CancelReload();

                currentWeaponIndex = (int)weaponWheelScrollFactor;
                if (equippedWeapons[currentWeaponIndex].clipSize != equippedWeapons[currentWeaponIndex].maxClipSize)
                {
                    ReloadWeapon();
                }
            }

            //Assigns all weapon wheel UI elements to be correct color/image if selected or not
            for (int i = 0; i < weaponWheelUIElements.Count; i++)
            {
                weaponWheelUIElements[i].background.texture = wheelUnselectedSprite.texture;
                weaponWheelUIElements[i].weaponIcon.texture = weaponWheelUIElements[i].iconSpriteUnselected.texture;
                weaponWheelUIElements[i].ammoCounter.color = Color.white;
            }
            weaponWheelUIElements[(int)weaponWheelScrollFactor].background.texture = wheelSelectedSprite.texture;
            weaponWheelUIElements[(int)weaponWheelScrollFactor].weaponIcon.texture = weaponWheelUIElements[(int)weaponWheelScrollFactor].iconSpriteSelected.texture;
            weaponWheelUIElements[(int)weaponWheelScrollFactor].ammoCounter.color = Color.black;
        }
        #endregion

        weaponIdentifier.text = $"Weapon 0{currentWeaponIndex}: {currentWeapon.weaponName}";
        cooldownIndicator.text = $"Fire cooldown: {weaponFiringCooldown}";
        ammoCountIndicator.text = $"{currentWeapon.clipSize}/{currentWeapon.ammo}";
    }
    IEnumerator Reloading()
    {
        coroutineIndicator.text = $"Reloading";
        while (isReloading && elapsedReloadTime <= equippedWeapons[currentWeaponIndex].reloadSpeed)
        {
            elapsedReloadTime += (1 * Time.deltaTime);
            yield return null;
        }
        if (!cancelledReload)
        {
            //Call function here instead for some weapons, solution works for now but can become overpowered for some guns
            equippedWeapons[currentWeaponIndex].ammo -= equippedWeapons[currentWeaponIndex].maxClipSize - equippedWeapons[currentWeaponIndex].clipSize;
            equippedWeapons[currentWeaponIndex].clipSize = equippedWeapons[currentWeaponIndex].maxClipSize;
        }
        elapsedReloadTime = 0;
        coroutineIndicator.text = $"";
    }
    void ReloadWeapon()
    {
        Debug.Log("Reloading Weapon");
        isReloading = true;
        cancelledReload = false;
        StartCoroutine(Reloading());
    }
    void CancelReload()
    {
        isReloading = false;
        cancelledReload = true;
    }
}


#region potentially obsolete code
/*
         //Used for looping in between weapons
        weaponWheelScrollFactor -= Input.mouseScrollDelta.y * weaponWheelScrollSens;
        if (weaponWheelScrollFactor > equippedWeapons.Count - 1)
        {
            weaponWheelScrollFactor = 0;
        }
        else if (weaponWheelScrollFactor < 0)
        {
            weaponWheelScrollFactor = equippedWeapons.Count - 1;
        }
        //Code activates when the player switches weapons
        if ((int)weaponWheelScrollFactor != currentWeaponIndex)
        {
            //Deactivates current weapon and activates swapped to weapon
            currentWeapon.weaponObject.SetActive(false);
            equippedWeapons[(int)weaponWheelScrollFactor].weaponObject.SetActive(true);


            currentWeaponIndex = (int)weaponWheelScrollFactor;
            Debug.Log($"CurrentwWeaponIndex is {currentWeaponIndex}");
            if(equippedWeapons[currentWeaponIndex].clipSize != equippedWeapons[currentWeaponIndex].maxClipSize)
            {
                ReloadWeapon();
            }
        }
 */
#endregion