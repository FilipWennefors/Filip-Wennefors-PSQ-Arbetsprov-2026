using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class KanjiAssembledCanvas : MonoBehaviour
{
    [SerializeField] float easeOutDuration;
    [SerializeField] float visibleDuration;

    [SerializeField] GameObject UI_MenuObject;
    [SerializeField] TextMeshProUGUI UI_Readings;
    [SerializeField] TextMeshProUGUI UI_KanjiAssembledText;
    Vector2 startPos;
    Vector2 endPos;

    float t;

    void Awake()
    {
        startPos = UI_MenuObject.GetComponent<RectTransform>().localPosition;
        endPos = new Vector2 (startPos.x, startPos.y - 900);

        GameManager.OnCorrectKanjiAssembled += GameManager_OnCorrectKanjiAssembled;

        UI_MenuObject.SetActive (false);
    }

    private void GameManager_OnCorrectKanjiAssembled(object sender, GameManager.OnCorrectKanjiAssembledEventArgs e)
    {
        UI_KanjiAssembledText.text = e.japaneseCharacter;
        UI_Readings.text = $"<sprite name=\"ChineseJapaneseFlagSpriteSheet_0\">: {e.chineseReading} /<sprite name=\"ChineseJapaneseFlagSpriteSheet_1\">: {e.japaneseReading}";
        UI_MenuObject.SetActive(true);
        UI_MenuObject.transform.localPosition = startPos;
        StartCoroutine(EaseOut());
        t = 0;
    }

    IEnumerator EaseOut()
    {
        yield return new WaitForSeconds(visibleDuration);
        while (UI_MenuObject.transform.localPosition != new Vector3(endPos.x, endPos.y, UI_MenuObject.transform.localPosition.z))
        {
            t += 1 * Time.deltaTime;

            UI_MenuObject.transform.localPosition = easeOutQuart(startPos, endPos, t / easeOutDuration);

            yield return null;
        }
    }
    Vector2 easeOutQuart(Vector2 start, Vector2 end, float t)
    {
        float time = Mathf.Clamp(t, 0, 1);
        Vector2 distance = end - start;
        float factor = 1 - Mathf.Pow(1 - time, 4);
        return start + distance * factor;
    }
    float EaseInOutQuart(float x)
    {
        return x < 0.5 ? 8 * x * x * x * x : 1 - Mathf.Pow(-2 * x + 2, 4) / 2;
    }
}
