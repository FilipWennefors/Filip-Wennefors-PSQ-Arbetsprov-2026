using System.Collections;
using System.Collections.Generic;
using System.IO;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class SpotSelection_Command : ICommand
{
    RawImage imageOverlay;
    GameObject UI_dialogueBox;

    Texture2D backgroundImage;
    Texture2D correctnessMap;

    public string bgImageFileName = "KFC Map spot selection";
    public string responsesFileName = "SpotSelection_response_";
    public void Initialize(References variableReferences)
    {
        imageOverlay = variableReferences.SpotSelectImageOverlay;
        UI_dialogueBox = variableReferences.DialogueBoxObject;

        //Load in images to use for the command
        try
        {
            backgroundImage = Resources.Load($"Overlay Images/{bgImageFileName}") as Texture2D;
            correctnessMap = Resources.Load($"Correctness Maps/{bgImageFileName} correctness map") as Texture2D;
        }
        catch (FileNotFoundException ex)
        {
            Debug.LogError($"File not found: {ex.FileName}");
        }
        if (backgroundImage.IsUnityNull())
        {
            Debug.Log("Background image texture is null");
        }
        
        imageOverlay.enabled = true;
        imageOverlay.texture = backgroundImage;

        UI_dialogueBox.SetActive(false);
        Debug.Log($"Started {this.GetType().Name}");
    }
    /*
    How this command works is that we create a second b&w texture called a correctness map where white is the area which has the correct answer
     
     */
    public void UpdateCommand(References variableReferences)
    {
        if (Input.GetKeyDown(KeyCode.Mouse0) || Input.GetKeyDown(KeyCode.E))
        {
            //Since the correctnes map and screen can have different resolutions, we have to make sure the position on the screen mathches the relative pos
            //on the correctness map
            Vector2 cursorPosition = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
            Vector2 cursorPositionFactor = new Vector2(cursorPosition.x / Screen.width, cursorPosition.y / Screen.height);
            Vector2 correctnessMapPosition = new Vector2(cursorPositionFactor.x * correctnessMap.width, cursorPositionFactor.y * correctnessMap.height);

            Color imageValues = new Color();
            //assigns the 3 color values based on the correctness map's color values at the mouse position
            imageValues.r = correctnessMap.GetPixel((int)correctnessMapPosition.x, (int)correctnessMapPosition.y).r;
            imageValues.g = correctnessMap.GetPixel((int)correctnessMapPosition.x, (int)correctnessMapPosition.y).g;
            imageValues.b = correctnessMap.GetPixel((int)correctnessMapPosition.x, (int)correctnessMapPosition.y).b;


            //assigns the alpha, basically tells the pc that the image is not transparent
            imageValues.a = 1;

            //Checks which color is specifies and then executes the relevant answers
            if (imageValues.r > 0.5f && imageValues.g > 0.5f && imageValues.b > 0.5f)
            {
                string responseFileName = responsesFileName + "right_answer.txt";

                imageOverlay.enabled = false;
                UI_dialogueBox.SetActive(true);

                StaticReferences.Courtroom_CommandPatternInvoker.FastExecute(new Dialogue_Command(responseFileName));
            }
            else
            {
                string responseFileName = responsesFileName + "wrong_answer.txt";

                imageOverlay.enabled = false;
                UI_dialogueBox.SetActive(true);

                StaticReferences.Courtroom_CommandPatternInvoker.FastExecute(new Dialogue_Command(responseFileName));
            }
        }
    }
    public void Execute(References variableReferences)
    {

    }
    public string GetCommandKeyBinds()
    {
        return "Select area: Left Mouse Button";
    }
}