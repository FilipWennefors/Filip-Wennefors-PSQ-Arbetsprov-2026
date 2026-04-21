using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PseudoVFX : MonoBehaviour
{

    [SerializeField] GameObject shootVFX;
    float size;
    
    float startSize = 6.5f;
    float maxSize = 8f;
    float endSize;

    float timeToMaxScale = 0.033f;


    // Start is called before the first frame update
    void Start()
    {
        shootVFX.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Mouse0))
        {
            PlayShootFX();
        }
        

    }
    void PlayShootFX()
    {
        shootVFX.SetActive(true);
        StartCoroutine(AnimateSize());
        StartCoroutine(DisableVFX(0.1f));
    }
    IEnumerator DisableVFX(float activeTime)
    {
        yield return new WaitForSeconds(activeTime);
        shootVFX.SetActive(false);
    }
    IEnumerator AnimateSize()
    {
        while (size != maxSize)
        {
            float fxTime = 0;
            size = Mathf.Lerp(startSize, endSize, fxTime);
            fxTime += (1 * Time.deltaTime) * timeToMaxScale;



            yield return null;
        }
    }

}
