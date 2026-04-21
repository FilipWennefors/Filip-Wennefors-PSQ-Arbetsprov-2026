using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;


//TODO: Not tested yet, may have undiscovered bugs/errors
namespace UI_Animator
{
    public class UI_Animator : MonoBehaviour
    {
        IEnumerator PlayAnimation(Sprite[] animationFrames, int fps, Sprite uiImage)
        {
            for (int i = 0; i < animationFrames.Count(); i++)
            {
                uiImage = animationFrames[i];
                //This may cause unintended consequences in cases of low frame rates when time.deltatime becomes too large. We'll see
                yield return new WaitForSeconds(1 / fps - Time.deltaTime);
            }
        }
    }
}


/*
 A test needed to be performed is to see if waitforseconds actually waits the time expected to do. Debug.Log gives exact seconds so should be functional for our purpose
 
 */