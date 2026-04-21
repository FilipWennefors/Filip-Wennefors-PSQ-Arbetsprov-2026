using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/// <summary>
/// Class used to handle moving the camera
/// </summary>
public class CameraManager : MonoBehaviour
{
    public DialogueManager dialogueManager;
    

    [SerializeField] string DefenseName;
    [SerializeField] string ProsecutorName;
    [SerializeField] string CoCounselName;
    [SerializeField] string WitnessName;
    public Transform CourtOverviewPosition;
    public Transform DefenseCameraPosition;
    public Transform ProsecutorCameraPosition;
    public Transform WitnessCameraPosition;
    public Transform JudgeCameraPosition;
    // Start is called before the first frame update
    private void Awake()
    {
        StaticReferences.CameraManager = this;
    }
    void Start()
    {
        dialogueManager.OnSpeakerNameUpdate += DialogueManager_OnSpeakerNameUpdate;
    }
    public void DialogueManager_OnSpeakerNameUpdate(object sender, DialogueManager.NameUpdateEventArgs e)
    {
        if (e.SpeakerName == DefenseName)
        {
            gameObject.transform.position = DefenseCameraPosition.position;
            gameObject.transform.rotation = DefenseCameraPosition.rotation;
        }
        else if (e.SpeakerName == ProsecutorName)
        {
            gameObject.transform.position = ProsecutorCameraPosition.position;
            gameObject.transform.rotation = ProsecutorCameraPosition.rotation;
        }
        else if (e.SpeakerName == CoCounselName)
        {
            gameObject.transform.position = DefenseCameraPosition.position;
            gameObject.transform.rotation = DefenseCameraPosition.rotation;
        }
        else if (e.SpeakerName == WitnessName)
        {
            gameObject.transform.position = WitnessCameraPosition.position;
            gameObject.transform.rotation = WitnessCameraPosition.rotation;
        }
        else if (e.SpeakerName == "Judge")
        {
            gameObject.transform.position = JudgeCameraPosition.position;
            gameObject.transform.rotation = JudgeCameraPosition.rotation;
        }
        else
        {
            gameObject.transform.position = CourtOverviewPosition.position;
            gameObject.transform.rotation = CourtOverviewPosition.rotation;
        }
    }
    /// <summary>
    /// Moves the camera to face the person currently speaking
    /// </summary>
    /// <param name="speakerName"></param>
    public void UpdateCameraPosition(string speakerName)
    {
        if (speakerName == DefenseName)
        {
            gameObject.transform.position = DefenseCameraPosition.position;
            gameObject.transform.rotation = DefenseCameraPosition.rotation;
        }
        else if (speakerName == ProsecutorName)
        {
            gameObject.transform.position = ProsecutorCameraPosition.position;
            gameObject.transform.rotation = ProsecutorCameraPosition.rotation;
        }
        else if (speakerName == CoCounselName)
        {
            gameObject.transform.position = DefenseCameraPosition.position;
            gameObject.transform.rotation = DefenseCameraPosition.rotation;
        }
        else if (speakerName == WitnessName)
        {
            gameObject.transform.position = WitnessCameraPosition.position;
            gameObject.transform.rotation = WitnessCameraPosition.rotation;
        }
        else if (speakerName == "Judge")
        {
            gameObject.transform.position = JudgeCameraPosition.position;
            gameObject.transform.rotation = JudgeCameraPosition.rotation;
        }
        else
        {
            gameObject.transform.position = CourtOverviewPosition.position;
            gameObject.transform.rotation = CourtOverviewPosition.rotation;
        }
    }
    // Update is called once per frame
    void Update()
    {
        /*
         The solution to our woes seems to be that when the player presses space, an event is fired off containing the current speaker. We then use a switch statement to
        change to proper camera position.
        Switch statement didn't work. FUCK!

        As for updating witnesses and co-counsel, we're trying to figure out everything as we go without it becoming overwhelming. Right now I am unaware of dialogue parsing
        and its functionality so I will see how it looks in the end.
         */
        string speakername = DefenseName;

        //I soo wish we had a better implementation

    }
}
