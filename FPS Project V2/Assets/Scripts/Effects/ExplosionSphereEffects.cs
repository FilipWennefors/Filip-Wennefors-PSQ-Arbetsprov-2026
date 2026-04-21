using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Used to animate the explosion sphere effect for explosive weapons
public class ExplosionSphereEffects : MonoBehaviour
{
    [SerializeField] float duration;
    float startScale;
    float timeElapsed;
    // Start is called before the first frame update
    void Start()
    {
        startScale = this.gameObject.transform.localScale.x;
        Destroy(this.gameObject, duration);        
    }
    private void Update()
    {
        timeElapsed += 1 * Time.deltaTime; 
        float scale = Mathf.SmoothStep(startScale, 0f, timeElapsed / duration);
        transform.localScale = new Vector3(scale, scale, scale);
    }
}
