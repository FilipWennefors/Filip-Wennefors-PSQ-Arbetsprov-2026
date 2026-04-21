using System;
using System.Collections;
using System.Collections.Generic;
using System.Xml;
using UnityEngine;

public class AmmoDropManager : MonoBehaviour
{
    [Range(0, 100)]
    [SerializeField] int ammoDropChance;
    [SerializeField] GameObject ammoCratePrefab;

    [SerializeField] EnemySpawner enemySpawner;
    // Start is called before the first frame update
    void Start()
    {
        enemySpawner.OnEnemyKilled += OnEnemyDead;
    }
    void OnEnemyDead(object sender, EnemySpawner.EnemyKilledArgs args)
    {
        if (UnityEngine.Random.Range(0, 100) <= ammoDropChance)
            Instantiate(ammoCratePrefab, args.enemyPosition, new Quaternion());
    }
}

/*What we need to do next is to find a way to distribute ammo to the player. Ideally we should give the player ammo for weapons with low ammo counts. But we also don't want
 to encourage the player to just use one weapon.

Potential solutions

Assign a cooldown of one second to determine how often to give certain weapons ammo. If you use a weapon too much, it will run out of ammo before the cooldown has ended
Then we give ammo based on random chance and exclude weapons with full ammo.
Basically.
Once an enemy dies, we check a percentage to see if we should drop ammo,
If true, we check if no weapons are on drop cooldown
Then we check if the weapons not on drop cooldown have enough ammo
if they have enough ammo, we drop some ammo,
else we don't

Track which weapon was used last */