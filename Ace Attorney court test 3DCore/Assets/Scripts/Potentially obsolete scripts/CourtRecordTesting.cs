using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class CourtRecordTesting : MonoBehaviour
{
    [SerializeField]TextMeshProUGUI visibleIndex;
    [SerializeField]TextMeshProUGUI textName;
    [SerializeField]TextMeshProUGUI textDescription;

    [SerializeField] int selectedIndex;
    List<Evidence> evidenceList = new List<Evidence>();
    public class Evidence//Template for all evidence
    {
        public string name;
        public string description;
        //public Sprite profilePicture;
        //public List<Sprite> inspected;//for images which are sometimes 2 different ones. Essentially easier to do.
    }
    // Start is called before the first frame update
    void Start()
    {
        AddEvidence(new string("Attorney's badge"), new string("My trusty badge that I flaunt way too often"));
        AddEvidence(new string("Autopsy report"), new string("The victim died at 3AM while playing amogus"));
        AddEvidence(new string("Gum paper"), new string("A piece of chewing gum paper found at the scene, Gum not locatable"));
        AddEvidence(new string("Sussy manga"), new string("The victim had been reading this comic seemingly backwards"));
        AddEvidence(new string("SwagMan69's testimony"), new string("The victim suddenly went quiet, bro, very creepy."));
        Debug.Log(evidenceList.Count);
        visibleIndex.text = "No. " + selectedIndex;
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.RightArrow))
        {
            if (selectedIndex + 1 > evidenceList.Count - 1)
            {
                selectedIndex = 0;
            }
            else
            {
                selectedIndex++;
            }
        }
        else if(Input.GetKeyDown(KeyCode.LeftArrow))
        {
            if (selectedIndex - 1 < 0)
            {
                selectedIndex = evidenceList.Count - 1;
            }
            else
                selectedIndex--;
        }

        visibleIndex.text = "No. " + (selectedIndex + 1);
        textName.text = evidenceList[selectedIndex].name;
        textDescription.text = evidenceList[selectedIndex].description;
        
    }
    public void AddEvidence(string EvidenceName, string EvidenceDescription)
    {
        Evidence e = new Evidence
        {
            name = EvidenceName,
            description = EvidenceDescription
        };
        //e.profilePicture = EvidencePicture;
        //e.inspected = EvidenceInspected;
        evidenceList.Add(e);
    }
}
