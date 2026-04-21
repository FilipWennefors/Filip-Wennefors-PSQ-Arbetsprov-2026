using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyOutOfBoundsObjects : MonoBehaviour
{
    private void OnTriggerExit2D(Collider2D collision)
    {
        Destroy(collision.gameObject);
    }
}

