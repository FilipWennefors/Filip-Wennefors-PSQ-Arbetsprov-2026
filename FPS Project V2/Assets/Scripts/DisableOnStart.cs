using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisableOnStart : MonoBehaviour
{
    // Start is called before the first frame update
    private void Awake()
    {
        this.gameObject.SetActive(false);
    }
}
