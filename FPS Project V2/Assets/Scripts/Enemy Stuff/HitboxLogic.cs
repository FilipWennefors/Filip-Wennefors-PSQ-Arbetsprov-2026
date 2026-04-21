using System.Collections;
using System.Collections.Generic;
using System.Data;
using UnityEngine;

//Used as way to handle the logic for individual hitboxes
public class HitboxLogic : MonoBehaviour
{
    private void Awake()
    {
        this.gameObject.layer = 7;
    }
    [SerializeField] HitboxManager hitboxManager;
    /// <summary>
    /// Called every time the hitbot is shot by a hitscan weapon
    /// </summary>
    /// <param name="damage"></param>
    public void OnShotLogic(int damage)
    {
        Debug.Log("Shot Hitbox");
        hitboxManager.damageTakenCurrentFrame += damage;
    }
    /// <summary>
    /// Called every time the hitbox is hit by an explosive
    /// </summary>
    /// <param name="damage"></param>
    /// <param name="explosiveObjInstanceID"></param>
    public void OnDamageExplosive(int damage, int explosiveObjInstanceID)
    {
        hitboxManager.TakeExplosiveDamage(damage, explosiveObjInstanceID);
    }
}
