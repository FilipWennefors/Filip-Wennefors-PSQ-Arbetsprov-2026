using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "Generic Explosive", menuName = "Weapons/Explosives")]
public class SO_Explosives : SO_Weapon
{
    [Header("Weapon Specific attributes")]
    [SerializeField] GameObject weaponProjectile;
    [SerializeField] float projectileSpeed;
    [SerializeField] float explosionRadius;
    [SerializeField] float minCorrectionDistance;
    [SerializeField] float maxCorrectionDistance;
    [SerializeField] LayerMask onlyEnemies;
    public override void PrimaryFire()
    {
        base.PrimaryFire();

        if (weaponBarrel == null)
        {
            Debug.LogError("Weapon Barrel is not assigned");
        }
        else //Spawn Projectile
        {           
            GameObject projectile = Instantiate(weaponProjectile, weaponBarrel.transform.position, Camera.main.transform.rotation);
            projectile.GetComponent<RocketProjectileLogic>().Initialize(damage, projectileSpeed, explosionRadius, minCorrectionDistance, maxCorrectionDistance, onlyEnemies);
        }
    }
}
