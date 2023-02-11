using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CursorManager : MonoBehaviour
{
    public static CursorManager Instance;
    public SpriteRenderer cursorTexture;
    public Sprite unTap;
    public Sprite tap;
    public Vector3 cursorHospot;

    private void Awake()
    {
        if(Instance == null)
        {
            Instance = this;
        }
    }

    private void Update()
    {
        Vector3 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        transform.position = mousePos - cursorHospot;
        if (Input.GetMouseButton(0))
        {
            cursorTexture.sprite = tap;
        }
        else
        {
            cursorTexture.sprite = unTap;
        }
       
    }

}
