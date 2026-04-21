using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class CircleVectorTest : MonoBehaviour
{
    [SerializeField] int imageCount;
    int incrementCount;
    [SerializeField] float radius;
    [SerializeField] Canvas canvas;
    [SerializeField] GameObject demoImage;
    [SerializeField] GameObject demoCube;

    List<GameObject> demoImages = new List<GameObject>();
    [SerializeField] List<GameObject> demoCubes = new List<GameObject>();

    [SerializeField] TextMeshProUGUI debugTextLine1;
    [SerializeField] TextMeshProUGUI debugTextLine2;
    [SerializeField] TextMeshProUGUI debugTextLine3;
    [SerializeField] TextMeshProUGUI debugTextLine4;

    [SerializeField] GameObject player;

    //What this script is for is to see if we can successfully raycast in a circle on the screen. Will be used for the AR and pistol for extra good feels so you don't have
    //to hit bullseye every time
    //https://docs.unity3d.com/6000.0/Documentation/ScriptReference/Camera.ScreenToWorldPoint.html
    /*Important to remember: The screen to world point needs a z vector for length or else it ends up useless*/

    // Start is called before the first frame update
    void Start()
    {
        incrementCount = imageCount;
        for (int i = 0; i < imageCount; i++)
        {
            GameObject image = Instantiate(demoImage, new Vector3(), Quaternion.Euler(0, 0, 0), canvas.transform);
            demoImages.Add(image);

        }
        for (int i = 0; i < imageCount; i++)
        {
            GameObject cube = Instantiate(demoCube, new Vector3(), Quaternion.Euler(0, 0, 0), canvas.transform);
            demoCubes.Add(cube);

        }

    }
    //https://docs.unity3d.com/6000.0/Documentation/ScriptReference/Screen-width.html
    // Update is called once per frame
    //This has to be done in lateUpdate after the player camera has moved as otherwhise it will be off in pos for a couple of frames
    void LateUpdate()
    {
        /*
         What we do next after succesfully doing the vector circle screen math is that we do a raycast to see if the player has hit any enemy bullseye and if that is true,
        then we do damage to that enemy.

        The conundrum becomes if the player does not hit any enemy bullseye, Cause if that happens we will have to make a decision what enemy to favour, either we do the enemy
        closest to the player or closest to the crosshair. Crosshair seems fairer yet harder and player seems less fair but quite easy

        Actually world to screen point seems the best. We know the screen center so all we have to do is see which point is closest to center
         

        https://docs.unity3d.com/6000.0/Documentation/ScriptReference/Camera.WorldToScreenPoint.html
         */
        List<GameObject> objectsHit = new List<GameObject>();

        float weaponRangeTest = 25f;
        float rotationPerIncrement = 360 / incrementCount;
        for (int a = 0; a < incrementCount; a++)
        {
            float rotation = (a * rotationPerIncrement) * Mathf.Deg2Rad;
            Vector2 unitCirclePosition = new Vector2(Mathf.Cos(rotation) * radius, Mathf.Sin(rotation) * radius);
            Vector2 unitCirclePosCentered = new Vector2(unitCirclePosition.x + (Screen.width / 2), unitCirclePosition.y + (Screen.height / 2));
            Vector3 screenWorldPos = Camera.main.ScreenToWorldPoint(new Vector3(unitCirclePosCentered.x, unitCirclePosCentered.y, weaponRangeTest));
            demoCubes[a].transform.position = screenWorldPos;

            Vector3 localPosition = screenWorldPos - Camera.main.transform.position;
            Debug.DrawRay(Camera.main.transform.position, localPosition, Color.blue, 0.1f);
            RaycastHit hitInfo;
            if(Physics.Raycast(Camera.main.transform.position, localPosition.normalized, out hitInfo, weaponRangeTest))
            {
                objectsHit.Add(hitInfo.transform.gameObject);
            }
        }


        //Getting closest object in array



        /*
         what we need to do here is to loop through an array of objects. we start by assigning one of them to be "closest" to the crosshair. Then we compare each subsequent
        object screen pos to see if it is closer to the center pos. If true we assign it.
         */


        Debug.Log($"Closest to center evaluated as {GetClosestToScreenCenter(demoCubes).name}");
        
    }
    /// <summary>
    /// Takes in a list and returns the object which is closest to the middle of the screen
    /// </summary>
    /// <param name="gameObjects"></param>
    /// <returns></returns>
    GameObject GetClosestToScreenCenter(List<GameObject> gameObjects)
    {
        GameObject closestToCenter = gameObjects[0];
        Vector2 closestToCenterScreenPos = Camera.main.WorldToScreenPoint(closestToCenter.transform.position);
        Vector2 closestToCenterRelative = new Vector2(closestToCenterScreenPos.x - Screen.width / 2, closestToCenterScreenPos.y - Screen.height / 2);

        for (int i = 1; i <= gameObjects.Count; i++)
        {
            Vector2 screenPos = Camera.main.WorldToScreenPoint(demoCubes[1].transform.position); ;
            Vector2 screenPosCenterRelative = new Vector2(screenPos.x - Screen.width / 2, screenPos.y - Screen.height / 2);

            if (screenPosCenterRelative.sqrMagnitude < closestToCenterRelative.sqrMagnitude)
            {
                closestToCenter = gameObjects[i];
                closestToCenterScreenPos = Camera.main.WorldToScreenPoint(closestToCenter.transform.position);
                closestToCenterRelative = new Vector2(closestToCenterScreenPos.x - Screen.width / 2, closestToCenterScreenPos.y - Screen.height / 2);
            }
        }
        return closestToCenter;
    }



}
