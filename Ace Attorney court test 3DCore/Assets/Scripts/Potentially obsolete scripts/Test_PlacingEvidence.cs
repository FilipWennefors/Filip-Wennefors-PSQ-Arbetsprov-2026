using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Test_PlacingEvidence : MonoBehaviour
{
    [SerializeField] GameObject evidenceSlotOG;
    [SerializeField] float offset;
    int time;
    [SerializeField]List<GameObject> evidenceSlot = new List<GameObject>();
    bool coroutineRunning = true;
    // Start is called before the first frame update
    void Start()
    {
        /*
         What the purpose of this script is is to find the position of evidence in the court record. Essentially we use maths to procedurally determine where to place evidence

        How it will work in the final script is that the found offset will be used to determine where to render every slot of evidence's profile. There will be a background
        image used for the empty slots which will be drawn over on the final version
         */

        //evidenceSlot.Add(evidenceSlotOG);
        //StartCoroutine(SpawnEvidenceSlots());
        //We successfully added all of them to the list
        Debug.Log("Evidence slot count: " + evidenceSlot.Count);    
    }
    // Update is called once per frame
    void Update()
    {
        if (coroutineRunning)
        {
            Debug.Log("Update commenced");
            for (int i = 1; i < 9; i++)
            {
                evidenceSlot[i].transform.position = new Vector3(evidenceSlot[i--].transform.position.x + offset, evidenceSlot[i].transform.position.y, 0);
            }
        }
    }
    IEnumerator SpawnEvidenceSlots()
    {

        for (int i = 1; i < 9; i++)
        {
            Debug.Log("Running test script");
            evidenceSlot.Add(Instantiate(evidenceSlotOG, new Vector3(evidenceSlotOG.transform.position.x + offset, evidenceSlotOG.transform.position.y, 0), new Quaternion()));
            yield return new WaitForSeconds(3f);
            Debug.Log("Evidence slot count: " + evidenceSlot.Count);

        }
        //We successfully added all of them to the list
        Debug.Log("Evidence slot count: " + evidenceSlot.Count);
        coroutineRunning = false;
    }
}
