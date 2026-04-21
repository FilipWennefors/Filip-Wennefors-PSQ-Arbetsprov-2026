using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Kanji", menuName = "Kanji")]
public class SO_Kanji : ScriptableObject
{
    public List<Sprite> strokes = new List<Sprite>();

    public string JapaneseCharacter;
    public string englishMeaning;
    public string chineseReading;
    public string japaneseReading;
}
