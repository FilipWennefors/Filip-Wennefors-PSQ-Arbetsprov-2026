using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    [SerializeField] float walkSpeed;
    [SerializeField] CharacterController charController;
    // Start is called before the first frame update

    bool pausedGame;
    void Start()
    {
        Cursor.lockState = CursorLockMode.Confined;
        Cursor.visible = false;

        SettingsMenuStaticRef.SettingsMenuLogic.OnSettingsMenuToggled += SettingsMenuToggled;
    }

    // Update is called once per frame
    void Update()
    {
        if (!pausedGame)
        {
            //TODO: Add acceleration and deceleration for movement

            //Z is forward I hate this
            float xMovement = Input.GetAxis("Horizontal");
            float zMovement = Input.GetAxis("Vertical");
            Vector2 input = new Vector2(xMovement, zMovement);


            Vector3 MoveDirection = (transform.right * input.x + transform.forward * input.y).normalized;
            Vector3 Movement = new Vector3(MoveDirection.x, 0f, MoveDirection.z) * walkSpeed * Time.deltaTime;

            charController.Move(Movement);
        }
        //math curve to use for stuff
        //f(x)=-a^(-ax)+1
    }

    void SettingsMenuToggled(object sender, SettingsMenuLogic.SettingsMenuToggledArgs args)
    {
        pausedGame = args.isMenuActive;
    }
}
