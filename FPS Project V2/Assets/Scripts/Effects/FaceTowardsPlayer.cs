using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceTowardsPlayer : MonoBehaviour
{
    Transform playerCam;
    // Start is called before the first frame update
    void Start()
    {
        playerCam = Camera.main.transform;
    }

    // Update is called once per frame
    void Update()
    {
        transform.LookAt(playerCam); 
    }
}
