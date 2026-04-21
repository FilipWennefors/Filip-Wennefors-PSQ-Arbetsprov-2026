using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace CustomFunctions
{
    public class CustomFunctions
    {
    //This function is used to play animations in the overlay. Because UI images cannot show moving pictures, we use a function to play the animation. Irritating workaround
    
    //CRAP, We can't use IEnumerators because it will still be semi-frame dependant
    IEnumerator Overlay_PlayAnimation()
        {
            //What we need to do here is accept a list of images needed to be shown,then loop through them
            yield return null;
        }
    }
}