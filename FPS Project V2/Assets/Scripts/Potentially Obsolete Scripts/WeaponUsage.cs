//using System.Collections;
//using System.Collections.Generic;
//using TMPro;
//using UnityEngine;

//public class WeaponUsage : MonoBehaviour
//{
//    WeaponState currentWeaponState;
//    public readonly WeaponDeployingState deployState = new WeaponDeployingState();
//    public readonly WeaponDeployedState idleState = new WeaponDeployedState();
//    public readonly WeaponHolsteringState holsterState = new WeaponHolsteringState();

//    [HideInInspector] public string debugMessage;

//    public Animator weaponAnimator;

//    [SerializeField] TextMeshProUGUI stateNameText;
//    [SerializeField] TextMeshProUGUI debugInfo;

//    public WeaponWheelLogic weaponWheelLogic;
//    // Start is called before the first frame update
//    void Start()
//    {
//        currentWeaponState = deployState;
//        deployState.EnterState(this);
//    }

//    // Update is called once per frame
//    void Update()
//    {
//        currentWeaponState.UpdateState();

//        stateNameText.text = $"State: {currentWeaponState}";
//        debugInfo.text = debugMessage;
//    }
//    public void SwitchState(WeaponState newState)
//    {
//        currentWeaponState.ExitState();
//        currentWeaponState = newState;
//        currentWeaponState.EnterState(this);
//    }
//}
