using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//Class placed on an enemy to centrally handle all logic related to its hitboxes

public class HitboxManager : MonoBehaviour
{
    [SerializeField] int health = 20;
    [HideInInspector] public int damageTakenCurrentFrame;
    List<int> objectsHitByID = new List<int>();
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void LateUpdate()
    {
        //Step 

        health -= damageTakenCurrentFrame;
        damageTakenCurrentFrame = 0;
        if (health <= 0)
        {
            Debug.Log("Enemy is dead");
            EnemySpawnerReference.enemySpawner.OnEnemyDead(this);
            Destroy(this.gameObject);
        }
        //Removes all IDs from the list in preparation for the next frame
        for (int i = 0; i < objectsHitByID.Count; i++)
        {
            objectsHitByID.Remove(objectsHitByID[i]);
        }
    }
    public void TakeExplosiveDamage(int damage, int objInstanceID)
    {
        /*
         FIXME: The foreach loop never runs as there is never any objects in the list. And since there never are any objects in the list, it never gets populated. We need to 
        find a way to make it actually run and check the ids
         
         */

        //What this does is that it is responsible for preventing the same enemy from being damaged multiple times by the same rocket. Essentially how this works is that it
        //keeps track of the id of the objects which have hit the enemy in the current frame and only damages the enemy if it has not been hit before by the rocket on the 
        //current frame
        if (objectsHitByID.Count != 0)
        {
            foreach (int id in objectsHitByID)
            {
                if (objInstanceID == id)
                {
                    return;
                }
                else
                {
                    objectsHitByID.Add(id);
                    damageTakenCurrentFrame += damage;
                }
            }
        }
        else
        {
            objectsHitByID.Add(objInstanceID);
            damageTakenCurrentFrame += damage;
        }
    }

}
