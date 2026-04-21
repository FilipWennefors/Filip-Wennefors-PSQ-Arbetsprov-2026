using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class SmoothFunctionTester : MonoBehaviour
{
    [SerializeField] GameObject indicator;
    [SerializeField] Vector3 startPos;
    [SerializeField] Vector3 endPos;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            StartCoroutine(EaseInOutQuartCoroutine(startPos, endPos));
        }
    }

    private IEnumerator EaseInOutQuartCoroutine(Vector3 _startPos, Vector3 _endPos)
    {
        float t = 0;
        while (t < 1)
        {
            Vector2 easedPosition = EaseInOutQuart(_startPos, _endPos, t);
            indicator.transform.position = new Vector3(easedPosition.x, easedPosition.y, 0f);
            t += 1 * Time.deltaTime;
            yield return null;
        }

    }
    Vector2 EaseInOutQuart(Vector2 start, Vector2 end, float t)
    {
        float time = Mathf.Clamp(t, 0, 1);
        Vector2 distance = end - start;

        float factor;
        if (time < 0.5f)
            factor = 8 * time * time * time * time;
        else
            factor = 1 - Mathf.Pow(-2 * time + 2, 4) / 2;

        return start + distance * factor;
    }
    float EaseInOutQuart(float start, float end, float t)
    {
        float time = Mathf.Clamp(t, 0, 1);
        float distance = end - start;

        float factor;
        if (time < 0.5f)
            factor = 8 * time * time * time * time;
        else
            factor = 1 - Mathf.Pow(-2 * time + 2, 4) / 2;

        return start + distance * factor;
    }
}
