using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SineWaveUpDownMovement : MonoBehaviour
{
    [SerializeField] Double speed;
    [SerializeField] float scale;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        float sineWaveFactor = (float)Math.Sin(Time.timeAsDouble * speed);
        float sineWaveYMovement = sineWaveFactor * scale;
        transform.position += new Vector3(0f, sineWaveYMovement, 0f);
    }
}
