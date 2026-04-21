using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class GravityTesting : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI text;
    float gravitationalConstant = 9.78f;
    float gravitationalStrength = 0f;

    float velocity;
    float jumpForce = 100;

    float timeElapsed = 0f;
    [SerializeField] CharacterController controller;
    /*
     Okay here is a basic explanation of how gravity works.


    We can separate it into various attributes.

    Velocity can be described as 9,8m/s or 9.8*Time.deltaTime.

    Acceleration is velocity/time or velocity*Time.deltaTime
     
     
     
     
     */





    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        bool isGrounded = ((controller.collisionFlags & CollisionFlags.Below) != 0);

        if (Input.GetKeyDown(KeyCode.Space) && isGrounded)
        {
            velocity = jumpForce;
            isGrounded = false;
        }
        if (!isGrounded)
        {
            gravitationalStrength = gravitationalConstant * Mathf.Pow(timeElapsed, 2);
            velocity -= gravitationalStrength;
            timeElapsed += 1 * Time.deltaTime;
            Debug.Log($"Velocity is {gravitationalStrength}");
        }
        else
        {
            gravitationalStrength = -0.1f;
            timeElapsed = 0f;
            velocity = 0f;
        }
        controller.Move(new Vector3(0f, velocity, 0f));

        text.text = gravitationalStrength.ToString();
    }
}
/*
  
 
 
 */