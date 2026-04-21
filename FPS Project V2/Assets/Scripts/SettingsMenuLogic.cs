using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using static System.Net.Mime.MediaTypeNames;

public class SettingsMenuLogic : MonoBehaviour
{
    [SerializeField] GameObject settingsMenu;

    [SerializeField] Slider HorizontalMouseSensSlider;
    [SerializeField] Slider VerticalMouseSensSlider;

    [SerializeField] TextMeshProUGUI HorizontalMouseSensText;
    [SerializeField] TextMeshProUGUI VerticalMouseSensText;

    bool isSettingsMenuActive = false;
    /// <summary>
    /// Called every time the player opens/closes the settings menu, Event args includes whether the player activated or deactivated the menu
    /// </summary>
    public event EventHandler<SettingsMenuToggledArgs> OnSettingsMenuToggled;
    public class SettingsMenuToggledArgs: EventArgs
    {
        public bool isMenuActive;
    }
    public event EventHandler<MouseSensChangedArgs> OnMouseSensitivityChanged;
    public class MouseSensChangedArgs: EventArgs
    {
        public float newMouseXSensitivity;
        public float newMouseYSensitivity;
    }

    // Start is called before the first frame update
    void Start()
    {
        SettingsMenuStaticRef.SettingsMenuLogic = this;
        settingsMenu.SetActive(isSettingsMenuActive);
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Escape))
        {
            isSettingsMenuActive = !isSettingsMenuActive;
            settingsMenu.SetActive(isSettingsMenuActive);
            Cursor.visible = isSettingsMenuActive;

            OnSettingsMenuToggled?.Invoke(this, new SettingsMenuToggledArgs { isMenuActive = isSettingsMenuActive});
        }
    }
    public void OnVerticalMouseSensSliderMoved()
    {
        VerticalMouseSensText.text = $"Horizontal Mouse Sensitivity: {VerticalMouseSensSlider.value * 10}";
        OnMouseSensitivityChanged?.Invoke(this, new MouseSensChangedArgs { newMouseXSensitivity = VerticalMouseSensSlider.value });
    }
    public void OnHorizontalMouseSensSliderMoved()
    {
        HorizontalMouseSensText.text = $"Horizontal Mouse Sensitivity: {HorizontalMouseSensSlider.value * 10}";
        OnMouseSensitivityChanged?.Invoke(this, new MouseSensChangedArgs { newMouseYSensitivity = HorizontalMouseSensSlider.value });
    }
}
public static class SettingsMenuStaticRef
{
    public static SettingsMenuLogic SettingsMenuLogic;
}
