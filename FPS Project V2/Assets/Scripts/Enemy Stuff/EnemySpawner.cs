using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.AI;


//I am not sure if this is the proper name since gamemanager seems to be an actual term in unity
public class EnemySpawner : MonoBehaviour
{
    [SerializeField] int maxEnemyCount;
    [SerializeField] int enemiesSpawnedAtStart;
    [SerializeField] float enemySpawnCooldown;

    [Range(0, 100)]
    [SerializeField] int spawnChancePercentage;

    [SerializeField] GameObject enemy;

    List<GameObject> spawnedEnemies = new List<GameObject>();


    int enemyCount;
    int score;
    float enemySpawnCooldownElapsed;

    Vector3 minPosition = new Vector3();
    Vector3 maxPosition = new Vector3();

    [SerializeField] TextMeshProUGUI scoreText;

    public event EventHandler<EnemyKilledArgs> OnEnemyKilled;
    public class EnemyKilledArgs : EventArgs
    {
        public Vector3 enemyPosition;
    }
    // Start is called before the first frame update
    void Start()
    {

        NavMeshUtils.GetNavMeshSize(out minPosition, out maxPosition);

        //Spawns enemies at random positions. I realized that unity already has code to do this in their documentation but only after writing this
        for(int i = 0; i < enemiesSpawnedAtStart; i++)
        {
            SpawnEnemyRandomPosition();
        }
        EnemySpawnerReference.enemySpawner = this;
    }

    // Update is called once per frame
    void Update()
    {
        if (enemySpawnCooldownElapsed >= enemySpawnCooldown && enemyCount < maxEnemyCount)
        {
            if(UnityEngine.Random.Range(1, 100) <= spawnChancePercentage)
            {
                enemySpawnCooldownElapsed = 0;
                SpawnEnemyRandomPosition();
            }
        }
        else
            enemySpawnCooldownElapsed += 1 * Time.deltaTime;
    }
    void SpawnEnemyRandomPosition()
    {
        float xSpawnPos = UnityEngine.Random.Range(minPosition.x, maxPosition.x);
        float ySpawnPos = UnityEngine.Random.Range(minPosition.y, maxPosition.y);
        float zSpawnPos = UnityEngine.Random.Range(minPosition.z, maxPosition.z);
        Vector3 spawnPos = new Vector3(xSpawnPos, ySpawnPos, zSpawnPos);

        NavMeshHit navMeshHit;
        if (NavMesh.SamplePosition(spawnPos, out navMeshHit, 1.0f, NavMesh.AllAreas))
        {
            GameObject spawnedEnemy = Instantiate(enemy, navMeshHit.position, new Quaternion());
            spawnedEnemies.Add(spawnedEnemy);

            enemyCount++;
        }
    }
    /// <summary>
    /// Called every time an enemy dies to add to the score.
    /// </summary>
    /// <param name="hitboxManager"></param>
    public void OnEnemyDead(HitboxManager hitboxManager)
    {
        OnEnemyKilled?.Invoke(this, new EnemyKilledArgs() { enemyPosition = hitboxManager.transform.position});
        enemyCount--;
        score += 100;
        scoreText.text = $"Score: {score}";
    }
}
public static class EnemySpawnerReference 
{
    public static EnemySpawner enemySpawner;
}
