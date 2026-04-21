using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    [SerializeField] float minTimeBetweenStrokeSpawn;
    [SerializeField] float maxTimeBetweenStrokeSpawn;

    [SerializeField] float minStrokeMoveSpeed;
    [SerializeField] float maxStrokeMoveSpeed;

    [SerializeField] float upperSafetyMargins;

    [Header("User Interface Elements")]
    [SerializeField] TextMeshProUGUI kanjiMeaning;
    [SerializeField] TextMeshProUGUI japaneseAndChineseReading;

    [Header("Sound Effects")]
    [SerializeField] AudioClip SFX_Shoot;
    [SerializeField] AudioClip SFX_Ding;
    [SerializeField] AudioClip SFX_Success;

    [Header("Technical stuff")]
    [SerializeField] AudioSource SFXAudioSource;

    [SerializeField] GameObject KanjiIconPrefab;
    [SerializeField] GameObject UI_Canvas;
    [SerializeField] GameObject UI_KanjiStrokesAddedParent;
    [SerializeField] GameObject UI_RawImagePrefab;
    [SerializeField] List<SO_Kanji> availableKanji;



    Vector2Int LeftUpperCornerPos = new Vector2Int(-1920 / 2, 1080 / 2);
    Vector2Int LeftLowerCornerPos = new Vector2Int(-1920 / 2, -1080 / 2);

    Vector2Int RightUpperCornerPos = new Vector2Int(1920 / 2, 1080 / 2);
    Vector2Int RightLowerCornerPos = new Vector2Int(1920 / 2, -1080 / 2);


    [SerializeField] Image debugImage1;
    [SerializeField] Image debugImage2;
    [SerializeField] Image debugImage3;
    [SerializeField] Image debugImage4;


    SO_Kanji selectedKanji;

    List<Sprite> alreadyAddedStrokes = new List<Sprite>();
    List<GameObject> kanjiStrokeObjects = new List<GameObject>();

    float strokeSpawnCoolDown;

    public static event EventHandler<OnCorrectKanjiAssembledEventArgs> OnCorrectKanjiAssembled;

    public class OnCorrectKanjiAssembledEventArgs: EventArgs
    {
        public string japaneseCharacter;
        public string chineseReading;
        public string japaneseReading;
    }

    //Start by picking a random kanji in the list

    // Start is called before the first frame update
    void Start()
    {
        ChangeCurrentKanji();

                




        KanjiStrokeLogic.OnKanjiShotEvent += KanjiStrokeLogic_OnKanjiShotEvent;
    }
    // Update is called once per frame
    void Update()
    {
        //Spawn strokes associated with different kanji
        if (strokeSpawnCoolDown <= 0)
        {
            SpawnKanjiStroke();
            strokeSpawnCoolDown = UnityEngine.Random.Range(minTimeBetweenStrokeSpawn, maxTimeBetweenStrokeSpawn);
        }
        else
            strokeSpawnCoolDown -= 1 * Time.deltaTime;




        if (Input.GetKeyDown(KeyCode.Mouse0))
        {
            SFXAudioSource.PlayOneShot(SFX_Shoot);
        }

        if(Input.GetKeyDown(KeyCode.Space))
        {
            ChangeCurrentKanji();
        }
    }


    private void KanjiStrokeLogic_OnKanjiShotEvent(object sender, KanjiStrokeLogic.KanjiShotEventArgs e)
    {
        Sprite shotStroke = e.kanjiShotStroke;

        if(StrokeIsPartOfSelectedKanji(shotStroke) && StrokeHasNotBeenAdded(shotStroke))
        {
            SFXAudioSource.PlayOneShot(SFX_Ding);
            alreadyAddedStrokes.Add(shotStroke);
            GameObject kanjiStrokeObject = Instantiate(UI_RawImagePrefab, UI_KanjiStrokesAddedParent.transform.position, new Quaternion(), UI_KanjiStrokesAddedParent.transform);
            kanjiStrokeObject.GetComponent<RawImage>().texture = shotStroke.texture;
            kanjiStrokeObjects.Add(kanjiStrokeObject);

        }
        if(selectedKanji.strokes.Count == alreadyAddedStrokes.Count)
        {
            SFXAudioSource.PlayOneShot(SFX_Success);
            StartCoroutine(ChangeCurrentKanjiDelayed(0.5f));
            OnCorrectKanjiAssembled?.Invoke(this, new OnCorrectKanjiAssembledEventArgs
            {
                japaneseCharacter = selectedKanji.JapaneseCharacter,
                chineseReading = selectedKanji.chineseReading,
                japaneseReading = selectedKanji.japaneseReading
            });
        }
    }

    private bool StrokeHasNotBeenAdded(Sprite shotStroke)
    {
        if (alreadyAddedStrokes.Count != 0)
        {
            foreach (Sprite alreadyAddedStroke in alreadyAddedStrokes)
            {
                if (shotStroke.texture == alreadyAddedStroke.texture)
                {
                    return false;
                }
            }
        }
        return true;
    }

    private bool StrokeIsPartOfSelectedKanji(Sprite shotStroke)
    {
        foreach (Sprite stroke in selectedKanji.strokes)
        {
            if (shotStroke.texture == stroke.texture)
            {
                return true;
            }
        }
        return false;
    }

    private void SpawnKanjiStroke()
    {
        SO_Kanji randomKanji = availableKanji[UnityEngine.Random.Range(0, availableKanji.Count)];

        Debug.Log($"Random kanji selected is {randomKanji.name}, random kanji strokes count is {randomKanji.strokes.Count}");

        Sprite stroke = randomKanji.strokes[UnityEngine.Random.Range(0, randomKanji.strokes.Count)];

        GameObject kanjiStroke = Instantiate(KanjiIconPrefab, UI_Canvas.transform);
        kanjiStroke.GetComponent<KanjiStrokeLogic>().SetStrokeImage(stroke);

        bool spawnOnLeftSide = UnityEngine.Random.value < 0.5;
        if (spawnOnLeftSide)
        {
            Vector2 SpawnPos = new Vector2(LeftUpperCornerPos.x - 65, UnityEngine.Random.Range(LeftLowerCornerPos.y, LeftUpperCornerPos.y - upperSafetyMargins));
            Vector2 targetPosition = new Vector2(RightUpperCornerPos.x, UnityEngine.Random.Range(RightLowerCornerPos.y, RightUpperCornerPos.y - upperSafetyMargins));
            Vector2 direction = (targetPosition - SpawnPos).normalized;

            kanjiStroke.transform.localPosition = new Vector3(SpawnPos.x, SpawnPos.y, 0f);
            kanjiStroke.GetComponent<KanjiStrokeLogic>().SetMovementDirection(direction);
            kanjiStroke.GetComponent<KanjiStrokeLogic>().SetMovementSpeed(UnityEngine.Random.Range(minStrokeMoveSpeed, maxStrokeMoveSpeed));

        }
        else
        {
            Vector2 SpawnPos = new Vector2(RightUpperCornerPos.x + 65, UnityEngine.Random.Range(RightLowerCornerPos.y, RightUpperCornerPos.y - upperSafetyMargins));
            Vector2 targetPosition = new Vector2(LeftUpperCornerPos.x, UnityEngine.Random.Range(LeftLowerCornerPos.y, LeftUpperCornerPos.y - upperSafetyMargins));
            Vector2 direction = (targetPosition - SpawnPos).normalized;

            kanjiStroke.transform.localPosition = new Vector3(SpawnPos.x, SpawnPos.y, 0f);
            kanjiStroke.GetComponent<KanjiStrokeLogic>().SetMovementDirection(direction);
            kanjiStroke.GetComponent<KanjiStrokeLogic>().SetMovementSpeed(UnityEngine.Random.Range(minStrokeMoveSpeed, maxStrokeMoveSpeed));
        }
    }
    private void ChangeCurrentKanji()
    {
        selectedKanji = GetRandomAvailableKanji();

        kanjiMeaning.text = selectedKanji.englishMeaning;
        japaneseAndChineseReading.text = $"<sprite name=\"ChineseJapaneseFlagSpriteSheet_0\">: {selectedKanji.chineseReading} <sprite name=\"ChineseJapaneseFlagSpriteSheet_1\">: {selectedKanji.japaneseReading}";

        alreadyAddedStrokes.Clear();
        foreach (GameObject kanjiStrokeObject in kanjiStrokeObjects)
        {
            Destroy(kanjiStrokeObject);
        }

    }
    IEnumerator ChangeCurrentKanjiDelayed(float delay)
    {
        yield return new WaitForSeconds(delay);
        ChangeCurrentKanji();
    }
    SO_Kanji GetRandomAvailableKanji()
    {
        SO_Kanji randomKanji = availableKanji[UnityEngine.Random.Range(0, availableKanji.Count)];

        if(randomKanji == selectedKanji)
            return GetRandomAvailableKanji();
        else return randomKanji;
    }
}