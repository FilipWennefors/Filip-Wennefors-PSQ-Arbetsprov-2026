using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationTester : MonoBehaviour
{
    public Animator animator;
    public string AnimationName;
    // Start is called before the first frame update
    void Start()
    {
        animator.Play("Witness_testimony_overlay");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
