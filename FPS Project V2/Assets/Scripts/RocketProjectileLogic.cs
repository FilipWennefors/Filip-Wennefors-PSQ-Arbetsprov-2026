using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RocketProjectileLogic : MonoBehaviour
{
    public LayerMask onlyEnemyLayerMask;
    [SerializeField] AudioClip ExplosionSFX;
    [SerializeField] GameObject explosionSphere;

    int rocketDamage = 100;

    float rocketSpeed = 0.5f;
    float rocketExplosionRadius = 5f;

    float maxRocketCorrectionDist = 12.5f;
    float minRocketCorrectionDist = 2f;
    float rocketCorrectionDist;

    float timeToReachTarget;

    Vector3 cameraRelative;
    Vector2 posCorrectionPerFrame;

    Transform cam;

    bool hasCalledInitialize = false;
    bool pausedGame;


    /// <summary>
    /// Called when the rocket is spawned in order to set various parameters related to game feel and balance
    /// </summary>
    /// <param name="projectileSpeed"></param>
    /// <param name="minCorrectionDistance"></param>
    /// <param name="maxCorrectionDistance"></param>
    /// <param name="onlyEnemies"></param>
    public void Initialize(int damage, float projectileSpeed, float explosionRadius, float minCorrectionDistance, float maxCorrectionDistance, LayerMask onlyEnemies)
    {
        rocketDamage = damage;
        rocketSpeed = projectileSpeed;
        rocketExplosionRadius = explosionRadius;
        minRocketCorrectionDist = minCorrectionDistance;
        maxRocketCorrectionDist = maxCorrectionDistance;
        onlyEnemyLayerMask = onlyEnemies;
        hasCalledInitialize = true;
    }
    // Start is called before the first frame update
    void Start()
    {
        if (!hasCalledInitialize)
            Debug.LogWarning($"Initialize has not been called on projectile {gameObject.name}. The projectile will use default parameters");
        Destroy(gameObject, 5f);

        cam = Camera.main.transform;

        RaycastHit enemyHit;
        Vector3 rayCastOrigin = cam.transform.position + cam.transform.forward * minRocketCorrectionDist;

        bool enemyWithinDist = Physics.Raycast(rayCastOrigin, cam.transform.forward, out enemyHit, maxRocketCorrectionDist, onlyEnemyLayerMask);
        if (enemyWithinDist)
        {
            float distToEnemyHít = Vector3.Distance(cam.transform.position, enemyHit.transform.position);
            rocketCorrectionDist = distToEnemyHít;
        }
        else
            rocketCorrectionDist = maxRocketCorrectionDist;

        timeToReachTarget = rocketCorrectionDist / rocketSpeed;

        cameraRelative = cam.InverseTransformPoint(transform.position);

        posCorrectionPerFrame = new Vector2(cameraRelative.x / timeToReachTarget, cameraRelative.y / timeToReachTarget);

    }
    /*
     * Ideas board
     What we can do next is to transform the forward transform into a unit circle rotation
     
    We can compare the two vectors to see the position difference between the player and the rocket 

    One thing that cane be done is to compare the rocket position to the player position at start to find out how close the rocket and the player are. Now we know the
    distance the rocket needs to move to be on the same pos as the player. The only problem is that it becomes global. So we then need to convert it to a local pos
    relative to the player for it to line up so we can then move the rocket into the position of the crosshair at a certain distance

    Since it can be really annoying if the rocket does not line up when fired, we will do a raycast to check if there is anything closer to the player than the rocket
    correction distance

    What we also can do is create a target pos by having a virtual pos x units away from the player that we then have the rocket move towards

     
     */


    // FixedUpdate is called once every 0.02 seconds
    void FixedUpdate()
    {
        if (!pausedGame)
        {
            //What we need to do next is to also move the rocket slighty to the side so it actually hits the crosshair now


            /*
             New solution.
            We calculate a minimum or maximum distance for the rocket to auto aim at

            We then use the speed in order to calculate how fast the rocket will reach the position specified

            Then we have it gradually move towards that pos

             */

            transform.position += transform.forward * rocketSpeed;

            //Fuck I broke everything

            //Wait, did I break anything or not?
            Vector3 currentCamRelative = cam.InverseTransformPoint(transform.position);

            if (currentCamRelative.x < posCorrectionPerFrame.x)
            {
                posCorrectionPerFrame.x = 0;
            }
            if (currentCamRelative.y < posCorrectionPerFrame.y)
            {
                posCorrectionPerFrame.y = 0;
            }
            transform.position -= transform.right * (posCorrectionPerFrame.x);
            transform.position -= transform.up * (posCorrectionPerFrame.y);
        }

    }
    private void OnTriggerEnter(Collider other)
    {
        Collider[] objectsHit = Physics.OverlapSphere(transform.position, rocketExplosionRadius, onlyEnemyLayerMask);

        foreach (Collider obj in objectsHit)
        {
            if (obj.TryGetComponent<HitboxLogic>(out HitboxLogic hitbox))
            {
                hitbox.OnDamageExplosive(rocketDamage, gameObject.GetInstanceID());
            }
        }
        AudioSource.PlayClipAtPoint(ExplosionSFX, transform.position);


        
        GameObject sphere = Instantiate(explosionSphere, transform.position, new Quaternion());
        sphere.transform.localScale = new Vector3(sphere.transform.localScale.x * rocketExplosionRadius, sphere.transform.localScale.y * rocketExplosionRadius, sphere.transform.localScale.z * rocketExplosionRadius);
        //Wrong

        
        /*Okay we need to do some thinking here.
        If the other collider is an enemy hitbox then we know that an enemy has atleast been hit
        what we can then do is do a spherecast to capture all of the hitboxes within the collision range.

        //Spherecast is not fit for purpose as it is closer to a raymarch algorithm

        Then we call a new function called DealDamageExplosive on the HitboxManager

        In HitboxManager, we check if the rocket has damaged another hitbox on the object during the same frame and then if not then we damage the enemy.
        We can later implement it so we get a reference to the hitbox manager parent which we can then use to calculate damage falloff if we want to
         
         
         */




        Destroy(gameObject);
    }
    void SettingsMenuToggled(object sender, SettingsMenuLogic.SettingsMenuToggledArgs args)
    {
        pausedGame = args.isMenuActive;
    }
}
