using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Answer_Questions_System : MonoBehaviour
{
    // Start is called before the first frame update

    [SerializeField] GameObject UI_panel;
    [SerializeField] VerticalLayoutGroup UI_panel_vericalLayoutGroup;
    [SerializeField] GameObject UI_selectionBoxPanel;
    [SerializeField] GameObject UI_answersTextBoxPrefab;
    [SerializeField] GameObject UI_selectionMarkerPrefab;

    public class answersTextBox
    {
        public GameObject UI_element;
        public UI_ButtonLogic button;
        public TextMeshProUGUI text;
        public LayoutElement layoutElement;
    }

    List<answersTextBox> answersTextBoxes = new List<answersTextBox>();

    GameObject UI_selectionMarkerInstance;

    string questionsFileName;
    string answersFileName = "AnswerQuestions_answer";
    int answersCount = 3;
    int selectedAnswer;

    void Start()
    {
        //Spawns the answer boxes
        for (int i = 1; i <= answersCount ; i++)
        {
            //Works fine
            GameObject textbox = Instantiate(UI_answersTextBoxPrefab, UI_panel.transform);
            
            answersTextBox aTB = new answersTextBox();
            aTB.UI_element = textbox;
            aTB.button = textbox.GetComponent<UI_ButtonLogic>();
            aTB.layoutElement = textbox.GetComponent<LayoutElement>();
            aTB.text = textbox.GetComponentInChildren<TextMeshProUGUI>();
            answersTextBoxes.Add(aTB);
        }
        UI_TriggerLayoutRebuild();
        UI_selectionMarkerInstance = Instantiate(
            UI_selectionMarkerPrefab,
            new Vector3(
                answersTextBoxes[0].UI_element.transform.position.x,
                answersTextBoxes[0].UI_element.transform.position.y,
                answersTextBoxes[0].UI_element.transform.position.z),
            new Quaternion(),
            UI_selectionBoxPanel.transform);

    }

    // Update is called once per frame
    void Update()
    {
        //Lets players press statements based on mouse input.
        for (int i = 0; i < answersTextBoxes.Count; i++)
        {
            if (answersTextBoxes[i].button.StartHoverOver())
            {
                selectedAnswer = i;
            }
            if (answersTextBoxes[i].button.GetButtonPress())
            {
                string answerFileName = answersFileName + (i + 1).ToString() + ".txt";
                StaticReferences.Courtroom_CommandPatternInvoker.FastExecute(new Dialogue_Command(answerFileName));
            }
        }
        //Lets players press statements based on keyboard input. To be added.
        if(Input.GetKeyDown(KeyCode.UpArrow))
        {
            if(selectedAnswer - 1 < 0)
                selectedAnswer = answersCount - 1; 
            else
                selectedAnswer--; 
        }
        else if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            if (selectedAnswer + 1 > answersCount - 1)
                selectedAnswer = 0;
            else
                selectedAnswer++;
        }
        if (Input.GetKeyDown(KeyCode.Space) || Input.GetKeyDown(KeyCode.Return))//Keycode Return is enter. Stupid af
        {
            string answerFileName = answersFileName + (selectedAnswer + 1).ToString() + ".txt";
            StaticReferences.Courtroom_CommandPatternInvoker.FastExecute(new Dialogue_Command(answerFileName));
        }



        //Moves selection marker into proper position
        UI_selectionMarkerInstance.transform.position = new Vector3(
            answersTextBoxes[selectedAnswer].UI_element.transform.position.x,
            answersTextBoxes[selectedAnswer].UI_element.transform.position.y,
            answersTextBoxes[selectedAnswer].UI_element.transform.position.z);

    }
    //Used because we need to rebuild the UI before accessing positional values or it spawns at the wrong position
    //For more info, see https://stackoverflow.com/questions/72602311/how-to-get-correct-position-of-a-gameobject-thatis-inside-a-vertical-layout-grou
    void UI_TriggerLayoutRebuild()
    {
        //This is some real bullshit right here
        UI_panel_vericalLayoutGroup.CalculateLayoutInputHorizontal();
        UI_panel_vericalLayoutGroup.SetLayoutHorizontal();
        UI_panel_vericalLayoutGroup.CalculateLayoutInputVertical();
        UI_panel_vericalLayoutGroup.SetLayoutVertical();
    }
}
