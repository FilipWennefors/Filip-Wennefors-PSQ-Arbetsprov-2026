using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "Generic Shotgun", menuName = "Weapons/Shotgun")]
public class SO_Shotguns : SO_Weapon
{
    [Header("Weapon Specific Attributes")]
    [SerializeField] LayerMask excludePlayerMask;//Layer mask containing every layer except for player layer
    [SerializeField] int verticalBulletsCount;
    [SerializeField] int horizontalBulletsCount;
    [SerializeField] float maxVerticalSpreadRotation;
    [SerializeField] float maxHorizontalSpreadRotation;
    public override void PrimaryFire()
    {


        base.PrimaryFire();

        /*
        This block of code simulates shotgun spread by shooting out multiple lower damage shots in a square cone pattern
        How this is achieved is by having a specified spread and angle between bullet directions. Inside a for loop we add a specified amount of rotation each increment
        So if the bullet can spread at max 30 degrees towards either left or right and we fire 5 bullets, then that means that each bullet needs 12 degrees between each other
        So we then use a for loop to fire each of the 5 bullets with 12 degrees difference in spread between each other.

        Then for vertical, we just nest that for loop inside another for loop

        TL;DR
        Create two variables, one for horizontal bullets count, and one for vertical bullets count
        Create a for loop that goes through the horizontal bullets and fire all bullets. 
        Every iteration we increase rotation based on how many shots need to be fired
        Nest the for loop for the horizontal bullets inside one for vertical bullets fired.
         */


        //This area desperately needs to be clarified to improve readability, or maybe i'm just tired
        //https://docs.unity3d.com/ScriptReference/Quaternion.AngleAxis.html

        Vector3 bulletDirectionVertical = mainCam.transform.forward;
        Vector3 testBulletAxis = mainCam.transform.right;
        Vector3 testbulletAxis2 = mainCam.transform.up;

        float totalVerticalSpread = maxVerticalSpreadRotation * 2;
        float rotationVertical = 0 - maxVerticalSpreadRotation;
        float rotationBetweenShotsVertical = totalVerticalSpread / (verticalBulletsCount - 1);

        for (int a = 1; a <= verticalBulletsCount; a++)
        {
            Vector3 rotatedBulletVectorVertical = Quaternion.AngleAxis(rotationVertical, testBulletAxis) * bulletDirectionVertical;
            rotationVertical += rotationBetweenShotsVertical;

            //Variables need to be here or the pattern gets fucked up
            float totalHorizontalSpread = maxHorizontalSpreadRotation * 2;
            float rotationHorizontal = 0 - maxHorizontalSpreadRotation;
            float rotationBetweenShotsHorizontal = totalHorizontalSpread / (horizontalBulletsCount - 1);

            for (int b = 1; b <= horizontalBulletsCount; b++)
            {
                Vector3 rotatedBulletVector = Quaternion.AngleAxis(rotationHorizontal, testbulletAxis2) * rotatedBulletVectorVertical;
                ShootWeaponSingleBulletHitscan(excludePlayerMask, rotatedBulletVector);

                rotationHorizontal += rotationBetweenShotsHorizontal;
            }
        }
    
    }
}
