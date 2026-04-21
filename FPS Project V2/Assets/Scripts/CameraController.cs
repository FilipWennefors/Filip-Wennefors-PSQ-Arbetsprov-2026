using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    [SerializeField] float xSensitivity;
    [SerializeField] float ySensitivity;

    [SerializeField] Camera camera;

    float xRotation;
    float yRotation;

    bool pausedGame;
    private void Awake()
    {
        Application.targetFrameRate= 360;
    }
    // Start is called before the first frame update
    void Start()
    {
        SettingsMenuStaticRef.SettingsMenuLogic.OnSettingsMenuToggled += SettingsMenuToggled;
        SettingsMenuStaticRef.SettingsMenuLogic.OnMouseSensitivityChanged += MouseSensChanged;
    }
    // Update is called once per frame
    void Update()
    {
        if (!pausedGame)
        {
            float mouseInputX = Input.GetAxisRaw("Mouse Y");
            float mouseInputY = Input.GetAxisRaw("Mouse X");

            xRotation -= mouseInputX * xSensitivity;
            xRotation = Mathf.Clamp(xRotation, -90, 90f);

            yRotation += mouseInputY * ySensitivity;

            camera.transform.rotation = Quaternion.Euler(xRotation, yRotation, 0f);
            gameObject.transform.rotation = Quaternion.Euler(0f, yRotation, 0f);
        }
    }
    void SettingsMenuToggled(object sender, SettingsMenuLogic.SettingsMenuToggledArgs args)
    {
        pausedGame = args.isMenuActive;
    }
    void MouseSensChanged(object sender, SettingsMenuLogic.MouseSensChangedArgs e)
    {
        xSensitivity = e.newMouseXSensitivity;
        ySensitivity = e.newMouseYSensitivity;
    }
}
