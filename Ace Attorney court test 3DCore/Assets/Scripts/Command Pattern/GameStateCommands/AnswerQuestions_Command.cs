using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Answer_Questions_System;
using UnityEngine.UI;
using UnityEngine.UIElements;
using TMPro;

public class AnswerQuestions_Command : ICommand
{
    GameObject UI_panel;
    VerticalLayoutGroup UI_panel_vericalLayoutGroup;
    GameObject UI_selectionBoxPanel;
    GameObject UI_answersTextBoxPrefab;
    GameObject UI_selectionMarkerPrefab;

    public class answersTextBox
    {
        public GameObject UI_element;
        public UI_ButtonLogic button;
        public TextMeshProUGUI textMesh;
        public LayoutElement layoutElement;
    }

    List<answersTextBox> answersTextBoxes;
    
    /// <summary>
    /// Used to mark the current selected answers
    /// </summary>
    GameObject UI_selectionMarkerInstance;
    
    string answersFileName;
    string responsesFileName = "AnswerQuestions_answer";
    int responsesCount = 3;
    int selectedResponse;
    public AnswerQuestions_Command(string providedAnswers, string responses)
    {
        answersFileName = providedAnswers;
        responsesFileName = responses;
    }
    public void Initialize(References variableReferences)
    {
        //Set various important variables related to UI
        UI_panel = variableReferences.AnswerQuestions_UIPanel;
        UI_panel_vericalLayoutGroup = variableReferences.AnswerQuestions_UIPanel_vericalLayoutGroup;
        UI_selectionBoxPanel = variableReferences.AnswerQuestions_UISelectionBoxPanel;
        UI_answersTextBoxPrefab = variableReferences.AnswerQuestions_UIAnswersTextBoxPrefab;
        UI_selectionMarkerPrefab = variableReferences.AnswerQuestions_UISelectionMarkerPrefab;





        List<string> answers = FileManager.ReadTextFile(answersFileName + ".txt");
        responsesCount = answers.Count;
        selectedResponse = 0;


        //Spawns UI elements for the possible answers
        answersTextBoxes = new List<answersTextBox>();
        for (int i = 1; i <= responsesCount; i++)
        {
            //Works fine
            GameObject textbox = UnityEngine.Object.Instantiate(UI_answersTextBoxPrefab, UI_panel.transform) as GameObject;

            answersTextBox aTB = new answersTextBox
            {
                UI_element = textbox,
                button = textbox.GetComponent<UI_ButtonLogic>(),
                layoutElement = textbox.GetComponent<LayoutElement>(),
                textMesh = textbox.GetComponentInChildren<TextMeshProUGUI>()
            };
            answersTextBoxes.Add(aTB);
            aTB.textMesh.text = answers[i - 1].ToString();
        }
        UI_TriggerLayoutRebuild();
        UI_selectionMarkerInstance = UnityEngine.Object.Instantiate(
            UI_selectionMarkerPrefab,
            new Vector3(
                answersTextBoxes[0].UI_element.transform.position.x,
                answersTextBoxes[0].UI_element.transform.position.y,
                answersTextBoxes[0].UI_element.transform.position.z),
            new Quaternion(),
                UI_selectionBoxPanel.transform) as GameObject;

    }
    public void UpdateCommand(References variableReferences)
    {
        //Lets players select answers based on mouse input.
        for (int i = 0; i < answersTextBoxes.Count; i++)
        {
            if (answersTextBoxes[i].button.StartHoverOver())
            {
                //Debug.Log($"Hovering over button {i}");

                selectedResponse = i;
            }
            //For clicking on answer to specify as final answer
            if (answersTextBoxes[i].button.GetButtonPress())
            {
                string responseFileName = responsesFileName + (i + 1).ToString() + ".txt";
                foreach (answersTextBox textBox in answersTextBoxes)
                {
                    UnityEngine.Object.Destroy(textBox.UI_element);
                }
                StaticReferences.Courtroom_CommandPatternInvoker.FastExecute(new Dialogue_Command(responseFileName));
            }
        }
        //Lets players select answers based on keyboard input.
        if (Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.W))
        {
            if (selectedResponse - 1 < 0)
                selectedResponse = responsesCount - 1;
            else
                selectedResponse--;

            UpdateSelectionMarkerPos();
        }
        else if (Input.GetKeyDown(KeyCode.DownArrow) || Input.GetKeyDown(KeyCode.S))
        {
            if (selectedResponse + 1 > responsesCount - 1)
                selectedResponse = 0;
            else
                selectedResponse++;

            UpdateSelectionMarkerPos();
        }
        //Pick the selected statement as final answer
        if (Input.GetKeyDown(KeyCode.Space) || Input.GetKeyDown(KeyCode.Return))//Keycode.Return is enter. Stupid af
        {
            string responseFileName = responsesFileName + (selectedResponse + 1).ToString() + ".txt";
            foreach(answersTextBox textBox in answersTextBoxes)
            {
                UnityEngine.Object.Destroy(textBox.UI_element);
                UnityEngine.Object.Destroy(UI_selectionMarkerInstance);
            }
            StaticReferences.Courtroom_CommandPatternInvoker.FastExecute(new Dialogue_Command(responseFileName));
        }
    }
    public void Execute(References variableReferences)
    {
    
    }
    /// <summary>
    /// Function created to fix a bug related to the vertical layout group
    /// </summary>
    void UI_TriggerLayoutRebuild()
    {
        //This is some real bullshit right here
        UI_panel_vericalLayoutGroup.CalculateLayoutInputHorizontal();
        UI_panel_vericalLayoutGroup.SetLayoutHorizontal();
        UI_panel_vericalLayoutGroup.CalculateLayoutInputVertical();
        UI_panel_vericalLayoutGroup.SetLayoutVertical();
    }
    /// <summary>
    /// Moves the Selection marker to be in the correct position when the player selects another statement
    /// </summary>
    void UpdateSelectionMarkerPos()
    {
        UI_selectionMarkerInstance.transform.position = new Vector3(
        answersTextBoxes[selectedResponse].UI_element.transform.position.x,
        answersTextBoxes[selectedResponse].UI_element.transform.position.y,
        answersTextBoxes[selectedResponse].UI_element.transform.position.z);
    }
    public string GetCommandKeyBinds()
    {
        return "Answer Up: W\r\nAnswer Down: S\r\nSelect Answer: Space";
    }
}
