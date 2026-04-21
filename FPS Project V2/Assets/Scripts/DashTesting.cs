using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DashTesting : MonoBehaviour
{
    [SerializeField] CharacterController controller;

    /*
     Here is where we will code how the dash works. So what we need is an upwards and a forwards velocity. The upwards velocity is fast and falls off quickly.
    the forwards velocity lasts for a short while. Basically creating an up and forward movement
     
     
     */

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    //I have no idea how to describe this function but in desmos it looks like it gives a pretty good curve to represent upwards and forwards movement of the dash
    float GetYPosition(float x, float a)
    {
        a = Mathf.Abs(a);

        return Mathf.Pow(-a, (-a * x)) + 1;
    }
}
