using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloseGameButtonLogic : MonoBehaviour
{
    public void ShutOffGame()   {
        Application.Quit();
    }
}
