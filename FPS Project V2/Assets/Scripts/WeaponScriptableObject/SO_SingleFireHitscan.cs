using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[CreateAssetMenu(fileName = "Generic Hitscan", menuName = "Weapons/Generic Hitscan")]
public class SO_SingleFireHitscan : SO_Weapon
{
    [Header("Weapon Specific Attributes")]
    [SerializeField] LayerMask excludePlayerMask;
    [SerializeField] int incrementCount;
    [SerializeField] float crosshairRadius;
    //The plan for this weapon type is to cast a bunch of rays in a circle position and then get all the objects hit by the rays. then we apply damage to them
    public override void PrimaryFire()
    {
        //The goal with this code is to give the player a tiny bit of leeway if the target hitbox is not under the exact middle of the screen, so as to avoid a potential 
        //outcome where the player is 1 pixel off from hitting the enemy by counting shots that almost hit an enemy as hits
        //This is done by shooting additional raycasts out in a spherical pattern to make sure that any target has been hit



        //Check if an enemy is hit right in the middle of the screen
        RaycastHit hitObject;
        if (Physics.Raycast(mainCam.transform.position, mainCam.transform.forward, out hitObject, range, excludePlayerMask))
        {
            HitboxLogic shotlogicComponent = hitObject.transform.gameObject?.GetComponent<HitboxLogic>();
            if (shotlogicComponent != null)
            {
                Debug.Log("Invoking OnShotLogic");
                shotlogicComponent.OnShotLogic(damage);
            }
        }
        else if( crosshairRadius != 0) //Check if an enemy was almost hit with additinal raycasts
        {
            List<GameObject> objectsHit = new List<GameObject>();

            float weaponRangeTest = 25f;
            float rotationPerIncrement = 360 / incrementCount;
            for (int a = 0; a < incrementCount; a++)
            {
                float rotation = (a * rotationPerIncrement) * Mathf.Deg2Rad;
                Vector2 unitCirclePosition = new Vector2(Mathf.Cos(rotation) * crosshairRadius, Mathf.Sin(rotation) * crosshairRadius);
                Vector2 unitCirclePosCentered = new Vector2(unitCirclePosition.x + (Screen.width / 2), unitCirclePosition.y + (Screen.height / 2));
                
                //Convert the unit circle screen position into a world position to perform a raycast towards
                Vector3 screenWorldPos = Camera.main.ScreenToWorldPoint(new Vector3(unitCirclePosCentered.x, unitCirclePosCentered.y, weaponRangeTest));
                Vector3 localPosition = screenWorldPos - Camera.main.transform.position;

                //Raycast to find all enemies almost hit
                RaycastHit hitInfo;
                if (Physics.Raycast(Camera.main.transform.position, localPosition.normalized, out hitInfo, weaponRangeTest, excludePlayerMask))
                {
                    objectsHit.Add(hitInfo.transform.gameObject);
                }
            }
            if (objectsHit.Count > 0) //If we hit any enemies, we then deal damage to the one closest to the crosshair
            {
                GameObject objectToDamage = GetClosestToScreenCenter(objectsHit);
                HitboxLogic shotlogicComponent = objectToDamage?.GetComponent<HitboxLogic>();
                if (shotlogicComponent != null)
                {
                    Debug.Log("Invoking OnShotLogic");
                    shotlogicComponent.OnShotLogic(damage);
                }
            }

        }
    }
    /// <summary>
    /// Checks which of the hitboxes were closest to the screen center. This is done to see which enemy was closest to the crosshair
    /// </summary>
    /// <param name="gameObjects"></param>
    /// <returns></returns>
    GameObject GetClosestToScreenCenter(List<GameObject> gameObjects)
    {
        Debug.Log($"Gameobject Count is {gameObjects.Count}");
        GameObject closestToCenter = gameObjects[0];
        Vector2 closestToCenterScreenPos = Camera.main.WorldToScreenPoint(closestToCenter.transform.position);
        Vector2 closestToCenterRelative = new Vector2(closestToCenterScreenPos.x - Screen.width / 2, closestToCenterScreenPos.y - Screen.height / 2);

        for (int i = 1; i < gameObjects.Count; i++)
        {
            Vector2 screenPos = Camera.main.WorldToScreenPoint(gameObjects[i].transform.position);
            Vector2 screenPosCenterRelative = new Vector2(screenPos.x - Screen.width / 2, screenPos.y - Screen.height / 2);

            if (screenPosCenterRelative.sqrMagnitude < closestToCenterRelative.sqrMagnitude)
            {
                closestToCenter = gameObjects[i];
                closestToCenterScreenPos = Camera.main.WorldToScreenPoint(closestToCenter.transform.position);
                closestToCenterRelative = new Vector2(closestToCenterScreenPos.x - Screen.width / 2, closestToCenterScreenPos.y - Screen.height / 2);
            }
        }
        return closestToCenter;
    }
}
