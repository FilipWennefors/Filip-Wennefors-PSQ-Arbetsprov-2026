using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class RudimentaryEnemyAI : MonoBehaviour
{
    [SerializeField] NavMeshAgent navMeshAgent;

    Vector3 minPosition;
    Vector3 maxPosition;

    // Start is called before the first frame update
    void Start()
    {
        NavMeshUtils.GetNavMeshSize(out minPosition, out maxPosition);
        MoveToRandomPosition();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void MoveToRandomPosition()
    {
        float xMovePos = Random.Range(minPosition.x, maxPosition.x);
        float yMovePos = Random.Range(minPosition.y, maxPosition.y);
        float zMovePos = Random.Range(minPosition.z, maxPosition.z);

        Vector3 movePosition = new Vector3(xMovePos, yMovePos, zMovePos);

        navMeshAgent.SetDestination(movePosition);
    }
}
/*
 What we need to do in this class is the following:
Get random positions on the navmesh for the enemy to move to.

Move the nav mesh agent there,

Randomly fire off projectiles at player if not on cooldown
 
 
 
 */