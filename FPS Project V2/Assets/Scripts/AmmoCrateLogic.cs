using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class AmmoCrateLogic : MonoBehaviour
{
    [SerializeField] AudioClip pickUpSFX;
    [SerializeField]float lifeTime;

    WeaponHandler weaponHandler;

    int weaponsCount;

    int intendedWeaponIndex;
    [SerializeField] TextMeshProUGUI weaponNameText;
    [SerializeField] RawImage weaponIcon;
    [SerializeField] List<Sprite> AmmoBoxWeaponIcons = new List<Sprite>();
    // Start is called before the first frame update
    void Start()
    {
        GameObject player = GameObject.FindGameObjectWithTag("Player");
        player.TryGetComponent<WeaponHandler>(out weaponHandler);
        if (weaponHandler != null)
        {
            weaponsCount = weaponHandler.equippedWeapons.Count;
            intendedWeaponIndex = Random.Range(0, weaponsCount - 1);
        }
        weaponNameText.text = $"Ammo: {weaponHandler.equippedWeapons[intendedWeaponIndex].weaponName}";
        weaponIcon.texture = AmmoBoxWeaponIcons[intendedWeaponIndex].texture;

        //Bad solution as ammo can despawn once player is near it but before it gets picked up
        Destroy(this.gameObject, lifeTime);
    }
    private void Update()
    {
           
    }
    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.layer == 3)//3 is player
        {
            SO_Weapon weapon = weaponHandler.equippedWeapons[intendedWeaponIndex];
            //Destroys case if ammo has been added
            if(weapon.TryAddAmmo(weapon.maxAmmo / 2))
            {
                AudioSource.PlayClipAtPoint(pickUpSFX, transform.position, 20f);
                Destroy(this.gameObject);
            }
        }
    }
}
