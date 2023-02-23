using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Line : MonoBehaviour
{
    private void Awake()
    {
        
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "LaserSwitch")
        {
            Level.Instance.laserLineObj.SetActive(false);
        }
    }

    private void OnCollisionExit2D(Collision2D collision)
    {
        if (Level.Instance.laserMode)
        {
            if (collision.gameObject.tag == "LaserSwitch")
            {
                Level.Instance.laserLineObj.SetActive(true);
            }
        }
    }
}
