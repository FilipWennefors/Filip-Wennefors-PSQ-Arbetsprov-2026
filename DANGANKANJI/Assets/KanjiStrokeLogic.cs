using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class KanjiStrokeLogic : MonoBehaviour
{
    [SerializeField] RawImage kanjStrokeImage;

    Sprite kanjiStrokeSprite;

    Vector2 _movementDirection;
    float _moveSpeed;

    public static event EventHandler<KanjiShotEventArgs> OnKanjiShotEvent;

    public class KanjiShotEventArgs : EventArgs
    {
        public Sprite kanjiShotStroke;
    }
    // Update is called once per frame
    void Update()
    {
        transform.position += new Vector3(_movementDirection.x, _movementDirection.y, 0f) * _moveSpeed * Time.deltaTime;
    }
    /// <summary>
    /// Set the direction the stroke moves in vertical space
    /// </summary>
    /// <param name="movementDirection"></param>
    public void SetMovementDirection(Vector2 movementDirection) => _movementDirection = movementDirection;

    public void SetMovementSpeed(float moveSpeed) => _moveSpeed = moveSpeed;

    public void SetStrokeImage(Sprite stroke)
    {
        kanjiStrokeSprite = stroke;
        kanjStrokeImage.texture = kanjiStrokeSprite.texture;
    }

    public void OnKanjiShot()
    {
        OnKanjiShotEvent?.Invoke(this, new KanjiShotEventArgs() { kanjiShotStroke = kanjiStrokeSprite});

        _moveSpeed = 0f;
        Destroy(this.gameObject, 0.25f);
    }
}
