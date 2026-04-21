using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class UI_ButtonLogic : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    bool buttonDown = false;
    bool hoverOverButton= false;
    bool firstFrameHoveringOver;
    void LateUpdate()
    {
        buttonDown = false;
    }
    public void OnButtonPress()
    {
        buttonDown = true;
    }

    public bool GetButtonPress()
    {
        return buttonDown;
    }
    public bool GetHoverOver()
    {
        return hoverOverButton;
    }
    public bool StartHoverOver() 
    {
        //Only returns true if the player started hovering over the button.
        if(hoverOverButton && firstFrameHoveringOver)
        {
            firstFrameHoveringOver = false;
            return true;
        }
        else return false;
    }

    //Modify these for button hover over
    public void OnPointerEnter(PointerEventData eventData)
    {
        hoverOverButton = true;
        firstFrameHoveringOver = true;
    }
    public void OnPointerExit(PointerEventData eventData)
    {
        hoverOverButton = false;
    }
}
