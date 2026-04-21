using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class TestAnimations : MonoBehaviour
{
    [SerializeField] Animator animator;
    [SerializeField] TextMeshProUGUI text;

    float animationTime;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.W))
        {
            animator.Play("Move Up");
            animationTime = 0;
            StartCoroutine(Timer());
        }
        else if (Input.GetKeyDown(KeyCode.A))
        {
            animator.Play("Move Left");
            animationTime = 0;
            StartCoroutine(Timer());
        }
        else if (Input.GetKeyDown(KeyCode.S))
        {
            animator.Play("Move Down");
            animationTime = 0;
            StartCoroutine(Timer());
        }
        else if (Input.GetKeyDown(KeyCode.D))
        {
            animator.Play("Move Right");
            animationTime = 0;
            StartCoroutine(Timer());
        }

        text.text = $"Animation time is{animationTime}";
    }
    IEnumerator Timer()
    {
        while(animationTime < 1)
        {
            animationTime += 1 * Time.deltaTime;
            yield return null;
        }
    }
}
