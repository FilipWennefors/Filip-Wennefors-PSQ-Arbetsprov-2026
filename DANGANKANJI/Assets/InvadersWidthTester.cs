using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InvadersWidthTester : MonoBehaviour
{
    [SerializeField] GameObject IndicatorBox;
    [SerializeField] int InvadersCount;
    [SerializeField] float distBetweenInvaders;


    List<GameObject> indicatorBoxes = new List<GameObject>();
    /*
     spawn middle box to use as reference
     Set to different color to have better reference

    Calculate width of single box
    
    Spawn Boxes in accordance with invaders count

    Move boxes to be correctly placed
     
     
     
     
     */



    // Start is called before the first frame update
    void Start()
    {


        for (int i = 0; i < InvadersCount; i++)
        {
            Debug.Log("Running for loop");

            GameObject indicator = Instantiate(IndicatorBox, this.gameObject.transform);
            indicatorBoxes.Add(indicator);
        }
        Debug.Log($"Invaders width is: {GetInvadersWidth(IndicatorBox, InvadersCount, distBetweenInvaders)}");

        for (int i = 0; i < InvadersCount; i++)
        {
            float indicatorWidth = IndicatorBox.GetComponent<RawImage>().rectTransform.sizeDelta.x;

            float startPos = -(GetInvadersWidth(IndicatorBox, InvadersCount, distBetweenInvaders) + (indicatorWidth + distBetweenInvaders) / 2);

            Debug.Log($"StartPos is {startPos}");


            indicatorBoxes[i].GetComponent<RectTransform>().localPosition = new Vector3 (startPos + (distBetweenInvaders + indicatorWidth) * i, 0, 0);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    float GetInvadersWidth(GameObject _indicatorBox, int _invadersCount, float _distBetweenInvaders)
    {
        float indicatorWidth = _indicatorBox.GetComponent<RawImage>().rectTransform.sizeDelta.x;
        Debug.Log($"Indicator Width is {indicatorWidth}");

        float invadersWidth = (indicatorWidth + distBetweenInvaders) * _invadersCount;

        return invadersWidth;
    }
}
