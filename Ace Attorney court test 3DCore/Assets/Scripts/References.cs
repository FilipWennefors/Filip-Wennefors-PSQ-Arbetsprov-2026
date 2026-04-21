using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// Used to get access to various scene objects from objects where it would be impossible to assign via inspector
/// </summary>
public class References : MonoBehaviour
{
    public DialogueManager _dialogueManager;
    
    public TextMeshProUGUI DialogueBox;
    public TextMeshProUGUI SpeakerName;
    public GameObject DialogueBoxObject;
    public GameObject DialogueBackground;
    public GameObject SpeakerBackground;
    public GameObject CrossExamIndicator;
    public RawImage SpotSelectImageOverlay;
    public GameObject AnswerQuestions_UIPanel;
    public VerticalLayoutGroup AnswerQuestions_UIPanel_vericalLayoutGroup;
    public GameObject AnswerQuestions_UISelectionBoxPanel;
    public GameObject AnswerQuestions_UIAnswersTextBoxPrefab;
    public GameObject AnswerQuestions_UISelectionMarkerPrefab;

    public GameObject ThanksForPlayingScreen;
}
public static class StaticReferences
{
    public static UI_PrintTextCoroutine UI_PrintTextReference;

    public static Courtroom_CommandPatternInvoker Courtroom_CommandPatternInvoker;

    public static CourtRecordSystem CourtRecord;

    public static CameraManager CameraManager;
}