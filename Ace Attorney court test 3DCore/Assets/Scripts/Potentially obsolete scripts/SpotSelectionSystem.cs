using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;

public class SpotSelectionSystem : MonoBehaviour
{
    #region Explanation
    /*There are multiple approaches to create this
     
    Either we use prefabs in unity or we use selection maps

    Prefabs would work by having the system use a prefab for every spot select where spotselect uses a prefab for every use consisting of the background image and a second 
    invisible image marking out where the correct answer area is. if the player successfully clicks on the invisible image, they get the answer right. The downside here is lots
    of prefabs and being stuck with rectangular areas

    The other approach would be to use a so called correctness map where two images are fed into the system, the background, and then a black/white image where the white parts
    are the area of the correct section. Upon clicking somewhere, the game checks if the color is white and if it is, the answer is correct. Would require using clip studio for
    every image in spot select though

    Will probably go for second approach
     
     */
    #endregion


    //[SerializeField] GameObject imageOverlay;
    [SerializeField] References variableReferences;
    [SerializeField] GameObject UI_dialogueBox;

    GameObject imageOverlay;

    public Sprite backgroundImage;
    public Sprite correctnessMap;

    public string responsesFileName = "SpotSelection_response_";
    // Start is called before the first frame update
    void Start()
    {
        //imageOverlay = variableReferences.SpotSelectImageOverlay;

        variableReferences.SpotSelectImageOverlay.enabled = true;
        variableReferences.SpotSelectImageOverlay.texture = backgroundImage.texture;
        
        
        //imageOverlay.GetComponent<RawImage>().texture = backgroundImage.texture;
        UI_dialogueBox.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Mouse0) || Input.GetKeyDown(KeyCode.E))
        {
            Vector2 cursorPosition = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
            Vector2 cursorPositionFactor = new Vector2(cursorPosition.x / Screen.width, cursorPosition.y / Screen.height);
            Vector2 correctnessMapPosition = new Vector2(cursorPositionFactor.x * correctnessMap.texture.width, cursorPositionFactor.y * correctnessMap.texture.height);

            Color imageValues = new Color();
            //assigns the 3 color values based on the correctness map's color values at the mouse position
            imageValues.r = correctnessMap.texture.GetPixel((int)correctnessMapPosition.x, (int)correctnessMapPosition.y).r;
            imageValues.g = correctnessMap.texture.GetPixel((int)correctnessMapPosition.x, (int)correctnessMapPosition.y).g;
            imageValues.b = correctnessMap.texture.GetPixel((int)correctnessMapPosition.x, (int)correctnessMapPosition.y).b;
            //assigns the alpha, basically tells the pc that the image is not transparent
            imageValues.a = 1;

            if (imageValues.r > 0.5f && imageValues.g > 0.5f && imageValues.b > 0.5f)
            {
                string responseFileName = responsesFileName + "right_answer.txt";
                Debug.Log(responseFileName);
            }
            else
            {
                string responseFileName = responsesFileName + "wrong_answer.txt";
                Debug.Log(responseFileName);
            }

        }
    }
}
