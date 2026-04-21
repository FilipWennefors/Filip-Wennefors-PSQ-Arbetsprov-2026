using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class CourtRecordSystem : MonoBehaviour
{
    [SerializeField] GameObject UI_courtRecord;
    [SerializeField] GameObject UI_evidenceSlots;
    [SerializeField] GameObject UI_selectionMarker;
    [SerializeField] GameObject UI_enterText;
    [SerializeField] TextMeshProUGUI UI_courtRecordSectionText;
    [SerializeField] TextMeshProUGUI UI_evidenceNameText;
    [SerializeField] TextMeshProUGUI UI_evidenceDescriptionText;

    [SerializeField] RawImage UI_evidenceImage;
    [SerializeField] GameObject UI_evidenceFullScreenPreview;

    [SerializeField] Sprite placeholderIcon;
    [SerializeField] Sprite emptyIconPlaceholder;

    #region Numerical Icons
    [SerializeField] Sprite placeholderIcon1;
    [SerializeField] Sprite placeholderIcon2;
    [SerializeField] Sprite placeholderIcon3;
    [SerializeField] Sprite placeholderIcon4;
    [SerializeField] Sprite placeholderIcon5;
    [SerializeField] Sprite placeholderIcon6;
    [SerializeField] Sprite placeholderIcon7;
    [SerializeField] Sprite placeholderIcon8;
    [SerializeField] Sprite placeholderIcon9;
    [SerializeField] Sprite placeholderIcon10;
    [SerializeField] Sprite placeholderIcon11;
    [SerializeField] Sprite placeholderIcon12;
    [SerializeField] Sprite placeholderIcon13;
    #endregion

    RawImage[] courtRecordIcons = new RawImage[10];

    bool courtRecordEnabled;
    bool previewingEvidenceFullScreen;
    bool inEvidence = true;
    

    int evidenceTabSelectedIndex;
    int profilesTabSelectedIndex;
    int evidenceTabArrayOverflow;
    int profilesTabArrayOverflow;

    /// <summary>
    /// Called every time the player presents evidence from the court record
    /// </summary>
    public event EventHandler<OnEvidencePresent_EventArgs> OnEvidencePresent;
    public class OnEvidencePresent_EventArgs
    {
        public string evidenceName;
        public int contradictionIndex;
    }
    /// <summary>
    /// Called every time the player enables or disables the court record
    /// </summary>
    public event EventHandler<OnCourtRecordToggled_EventArgs> OnCourtRecordToggled;
    public class OnCourtRecordToggled_EventArgs
    {
        public bool isCourtRecordEnabled;
    }
    private void Awake()
    {
        StaticReferences.CourtRecord = this;
    }
    // Start is called before the first frame update
    void Start()
    {
        if (UI_courtRecord.activeInHierarchy)
            courtRecordEnabled = true;
        else
            courtRecordEnabled = false;

        if (UI_evidenceFullScreenPreview.activeInHierarchy)
            previewingEvidenceFullScreen = true;
        else
            previewingEvidenceFullScreen = false;

        if (inEvidence)
            UI_courtRecordSectionText.text = "Evidence";
        else
            UI_courtRecordSectionText.text = "Profiles";
        #region Adding Evidence For Testing
        //Adds evidence for testing
        EvidenceManager.AddEvidence("Attorney's badge", "It's my all-important badge. It shows that I am a defense attorney.", placeholderIcon1, null);
        EvidenceManager.AddEvidence("Magatama", "A present from Maya. It reacts to people who have secrets in their hearts.", placeholderIcon2, null);
        EvidenceManager.AddEvidence("Area map", "A map of various areas in on the outskirts of Los Angeles.", placeholderIcon3, new List<Sprite>());
        EvidenceManager.AddEvidence("Los Pollos Hermanos menu", "A list of the foods available at the restaurant, features all kinds of mostly South American dishes.", placeholderIcon4, new List<Sprite>());
        EvidenceManager.AddEvidence("Security tape", "Tape showing Maya go near the kitchen around the time of the murder.", placeholderIcon5, null);
        EvidenceManager.AddEvidence("KFC Fryers", "An array of cooking appliances used by the colonel to prepare his food, can fry plenty of food if needed.", placeholderIcon6, null);


        //Adds profiles for testing
        EvidenceManager.AddProfile("Phoenix Wright", "Me, Every gamers' favourite defense attorney who feels like he could've looked better in this I.D photo", placeholderIcon1);
        EvidenceManager.AddProfile("Maya Fey", "My assistant and a disciple in the Kurain Tradition of spirit channeling. Accused of murder yet again.", placeholderIcon2);
        EvidenceManager.AddProfile("Pearl Fey", "Maya's cousin, and channeling prodigy. She has amazingly powerful spiritual abilities.", placeholderIcon3);
        EvidenceManager.AddProfile("Detective Gumshoe", "Homicide detective at the local precinct. In charge of the initial investigation.", placeholderIcon4);
        EvidenceManager.AddProfile("Judge", "The Judge presiding over this case, a bit absent-minded but wise in his verdicts", placeholderIcon5);

        EvidenceManager.AddProfile("Winston Payne", "I'm not sure I remember him but he's the prosecutor", placeholderIcon6);
        EvidenceManager.AddProfile("Col. Harland Sanders", "Lead Chef of KFC, and primary rival of Los Pollos Hermanos", placeholderIcon7);
        EvidenceManager.AddProfile("Gustavo Fring", "Owner and proprietor of Los Pollos Hermanos, Extremely buff and sexy too.", placeholderIcon8);
        EvidenceManager.AddProfile("Pollos Hermanos", "The Mascot Chickens and lead chefs of their titular restaurant", placeholderIcon9);
        EvidenceManager.AddProfile("Wendy Oldbag", "Security guard working at Los Pollos Hermanos after her diner had to close because of a trademark lawsuit with a large fast food chain", placeholderIcon10);

        EvidenceManager.AddProfile("Tyrus Kitt", "Personal Security for Gus Fring, was away when the murder happened", placeholderIcon11);
        EvidenceManager.AddProfile("J. Robert. Oppenheimer", "IDK, made a big bomb, I just needed to fill this eccentric list of characters", placeholderIcon12);

        EvidenceManager.evidenceList[2].inspected.Add(Resources.Load<Sprite>($"Overlay Images/KFC Map spot selection"));
        EvidenceManager.evidenceList[3].inspected.Add(Resources.Load<Sprite>($"Overlay Images/Pollos Hermanos menu"));
        #endregion

        /*What needs to be done next is to add the images to the list of sprites for the correct evidence.
         The images can be loaded with Resources.Load($"Overlay Images/KFC Map spot selection.png") as Sprite);
        Then it's just making sure it doesn't do any funny business when the images are null
         
         */


        for (int i = 0; i < courtRecordIcons.Length; i++)
        {
            courtRecordIcons[i] = UI_evidenceSlots.transform.GetChild(i).GetComponent<RawImage>();
        }
        RefreshIconsAndText();
        UI_enterText.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Tab))
        {
            if(courtRecordEnabled)
            {
                evidenceTabSelectedIndex = 0;
                profilesTabSelectedIndex = 0;
                evidenceTabArrayOverflow = 0;
                profilesTabArrayOverflow = 0;
                RefreshSelectionMarkerPos();
                RefreshIconsAndText();
            }
            courtRecordEnabled = !courtRecordEnabled;
            OnCourtRecordToggled.Invoke(this, new OnCourtRecordToggled_EventArgs { isCourtRecordEnabled = courtRecordEnabled });
            UI_courtRecord.SetActive(courtRecordEnabled);
        }
        if(Input.GetKeyDown(KeyCode.Return))
        {
            if (EvidenceManager.evidenceList[evidenceTabArrayOverflow + evidenceTabSelectedIndex].inspected != null)
            {
                UI_evidenceFullScreenPreview.GetComponent<RawImage>().texture = EvidenceManager.evidenceList[evidenceTabSelectedIndex].inspected[0].texture;
                previewingEvidenceFullScreen = !previewingEvidenceFullScreen;
                UI_evidenceFullScreenPreview.SetActive(previewingEvidenceFullScreen);
            }
        }
        else if(Input.GetKeyDown(KeyCode.Escape) && previewingEvidenceFullScreen)
        {
            previewingEvidenceFullScreen = !previewingEvidenceFullScreen;
            UI_evidenceFullScreenPreview.SetActive(previewingEvidenceFullScreen);
        }
        if (Input.GetKeyDown(KeyCode.E) && courtRecordEnabled)
        {
            string presentedItemName;
            if (inEvidence)
                presentedItemName = EvidenceManager.evidenceList[evidenceTabArrayOverflow + evidenceTabSelectedIndex].name;
            else
                presentedItemName = EvidenceManager.profileList[profilesTabArrayOverflow + profilesTabSelectedIndex].name;

            previewingEvidenceFullScreen = false;
            UI_evidenceFullScreenPreview.SetActive(previewingEvidenceFullScreen);
            courtRecordEnabled = false;
            OnCourtRecordToggled?.Invoke(this, new OnCourtRecordToggled_EventArgs { isCourtRecordEnabled = courtRecordEnabled });
            OnEvidencePresent?.Invoke(this, new OnEvidencePresent_EventArgs { evidenceName = presentedItemName });
            UI_courtRecord.SetActive(courtRecordEnabled);
        }
        if (Input.GetKeyDown(KeyCode.R) && courtRecordEnabled)
        {
            //Switch between evidence & profiles
            inEvidence = !inEvidence;
            RefreshSelectionMarkerPos();
            RefreshIconsAndText();
        }
        if (Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.RightArrow))
        {
            if (courtRecordEnabled && !previewingEvidenceFullScreen)
            {
                if (inEvidence)
                {
                    Vector2 newIndexes = RefreshIndexesForwardPress(evidenceTabSelectedIndex, evidenceTabArrayOverflow);
                    evidenceTabSelectedIndex = (int)newIndexes.x;
                    evidenceTabArrayOverflow = (int)newIndexes.y;

                    if (EvidenceManager.evidenceList[evidenceTabSelectedIndex].inspected != null)
                        UI_enterText.SetActive(true);
                    else
                        UI_enterText.SetActive(false);
                }
                else
                {
                    Vector2 newIndexes = RefreshIndexesForwardPress(profilesTabSelectedIndex, profilesTabArrayOverflow);
                    profilesTabSelectedIndex = (int)newIndexes.x;
                    profilesTabArrayOverflow = (int)newIndexes.y;
                    UI_enterText.SetActive(false);
                }
                RefreshSelectionMarkerPos();
                RefreshIconsAndText();
            }
        }
        else if (Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.LeftArrow))
        {
            if (courtRecordEnabled && !previewingEvidenceFullScreen)
            {
                if (inEvidence)
                {
                    Vector2 newIndexes = RefreshIndexesBackwardPress(evidenceTabSelectedIndex, evidenceTabArrayOverflow);
                    evidenceTabSelectedIndex = (int)newIndexes.x;
                    evidenceTabArrayOverflow = (int)newIndexes.y;

                    if (EvidenceManager.evidenceList[evidenceTabSelectedIndex].inspected != null)
                        UI_enterText.SetActive(true);
                    else
                        UI_enterText.SetActive(false);
                }
                else
                {
                    Vector2 newIndexes = RefreshIndexesBackwardPress(profilesTabSelectedIndex, profilesTabArrayOverflow);
                    profilesTabSelectedIndex = (int)newIndexes.x;
                    profilesTabArrayOverflow = (int)newIndexes.y;
                    UI_enterText.SetActive(false);
                }
                RefreshSelectionMarkerPos();
                RefreshIconsAndText();
            }
        }
    }
    /// <summary>
    /// 
    /// </summary>
    /// <param name="selectedIndex"></param>
    /// <param name="arrayOverflow"></param>
    /// <returns></returns>
    Vector2 RefreshIndexesForwardPress(int selectedIndex, int arrayOverflow)
    {
        selectedIndex++;
        if (selectedIndex > 9)
        {
            int selectedIndexLastDigit = selectedIndex % 10;

            arrayOverflow = arrayOverflow + (selectedIndex - selectedIndexLastDigit);

            selectedIndex = selectedIndexLastDigit;
        }
        if (inEvidence)
        {
            if ((arrayOverflow + selectedIndex) >= EvidenceManager.evidenceList.Count)
            {
                arrayOverflow = 0;
                selectedIndex = 0;
            }
        }
        else
        {
            if ((arrayOverflow + selectedIndex) >= EvidenceManager.profileList.Count)
            {
                arrayOverflow = 0;
                selectedIndex = 0;
            }
        }


        return new Vector2(selectedIndex, arrayOverflow);
    }
    /// <summary>
    /// 
    /// </summary>
    /// <param name="selectedIndex"></param>
    /// <param name="arrayOverflow"></param>
    /// <returns></returns>
    Vector2 RefreshIndexesBackwardPress(int selectedIndex, int arrayOverflow)
    {
        if (selectedIndex - 1 < 0)
        {

            if (arrayOverflow == 0)
            {
                if (inEvidence)
                    selectedIndex = EvidenceManager.evidenceList.Count;
                else
                    selectedIndex = EvidenceManager.profileList.Count;

                int selectedIndexLastDigit = selectedIndex % 10;
                Debug.Log((selectedIndex - selectedIndexLastDigit));
                arrayOverflow = arrayOverflow + (selectedIndex - selectedIndexLastDigit);
                selectedIndex = selectedIndexLastDigit - 1;
            }
            else
            {
                arrayOverflow = arrayOverflow - 10;
                selectedIndex = 9;
            }
        }
        else
        {
            selectedIndex--;
        }

        return new Vector2(selectedIndex, arrayOverflow);
    }
    /// <summary>
    /// Updates the icons and text to reflect the currently selected evidence or profile
    /// </summary>
    void RefreshIconsAndText()
    {

        if (inEvidence)
        {
            UI_courtRecordSectionText.text = "Evidence";
            UI_evidenceImage.texture = EvidenceManager.evidenceList[evidenceTabSelectedIndex + evidenceTabArrayOverflow].profilePicture.texture;
            UI_evidenceNameText.text = EvidenceManager.evidenceList[evidenceTabSelectedIndex + evidenceTabArrayOverflow].name.ToString();
            UI_evidenceDescriptionText.text = EvidenceManager.evidenceList[evidenceTabSelectedIndex + evidenceTabArrayOverflow].description.ToString();
            //assigns the icons to be the evidence ones
            for (int i = 0; i <= 9; i++)
            {
                if ((i + evidenceTabArrayOverflow) > EvidenceManager.evidenceList.Count - 1)
                    courtRecordIcons[i].texture = emptyIconPlaceholder.texture;
                else
                    courtRecordIcons[i].texture = EvidenceManager.evidenceList[i + evidenceTabArrayOverflow].profilePicture.texture;
            }
        }
        else
        {
            UI_courtRecordSectionText.text = "Profiles";
            UI_evidenceImage.texture = EvidenceManager.profileList[profilesTabSelectedIndex + profilesTabArrayOverflow].profilePicture.texture;
            UI_evidenceNameText.text = EvidenceManager.profileList[profilesTabSelectedIndex + profilesTabArrayOverflow].name.ToString();
            UI_evidenceDescriptionText.text = EvidenceManager.profileList[profilesTabSelectedIndex + profilesTabArrayOverflow].description.ToString();
            //assigns the icons to be the profile ones
            for (int i = 0; i <= 9; i++)
            {
                if ((i + profilesTabArrayOverflow) > EvidenceManager.profileList.Count - 1)
                    courtRecordIcons[i].texture = emptyIconPlaceholder.texture;
                else
                    courtRecordIcons[i].texture = EvidenceManager.profileList[i + profilesTabArrayOverflow].profilePicture.texture;  
            }
        }

    }/// <summary>
    /// Moves the marker which specifies which evidence or profile is currently selected into the correct position
    /// </summary>
    void RefreshSelectionMarkerPos()
    {
        if(inEvidence)
        {
            UI_selectionMarker.transform.position = new Vector3(
            courtRecordIcons[evidenceTabSelectedIndex].gameObject.transform.position.x,
            courtRecordIcons[evidenceTabSelectedIndex].gameObject.transform.position.y,
            courtRecordIcons[evidenceTabSelectedIndex].gameObject.transform.position.z);
        }
        else
        {
            UI_selectionMarker.transform.position = new Vector3(
            courtRecordIcons[profilesTabSelectedIndex].gameObject.transform.position.x,
            courtRecordIcons[profilesTabSelectedIndex].gameObject.transform.position.y,
            courtRecordIcons[profilesTabSelectedIndex].gameObject.transform.position.z);
        }
    }
    /// <summary>
    /// Used to activate or deactivate the court record outside of the CourtRecordSystem class
    /// </summary>
    public void ExternalCourtRecordToggle()
    {
        courtRecordEnabled = !courtRecordEnabled;
        if (courtRecordEnabled)
        {
            evidenceTabSelectedIndex = 0;
            profilesTabSelectedIndex = 0;
            evidenceTabArrayOverflow = 0;
            profilesTabArrayOverflow = 0;
            RefreshSelectionMarkerPos();
            RefreshIconsAndText();
        }
        OnCourtRecordToggled.Invoke(this, new OnCourtRecordToggled_EventArgs { isCourtRecordEnabled = courtRecordEnabled });
        UI_courtRecord.SetActive(courtRecordEnabled);
    }
}
