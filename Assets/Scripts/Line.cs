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
        
        if (collision.gameObject.tag == "Wall")
        {
            for (int i = 0; i < Level.Instance.spider.Length; i++)
            {
                if (Level.Instance.spider[i].isCollideWithLine)
                {
                    Level.Instance.spider[i].isCollided = false;
                    Level.Instance.spider[i].offset = Vector2.zero;
                    //this.gameObject.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
                }
            }
        }
    }

    private void OnCollisionStay2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "LaserSwitch")
        {
            for (int i = 0; i < Level.Instance.laserLineObj.Length; i++)
            {
                Level.Instance.laserLineObj[i].SetActive(false);
            }
        }
    }

    private void OnCollisionExit2D(Collision2D collision)
    {
        if (Level.Instance.laserMode)
        {
            if (collision.gameObject.tag == "LaserSwitch")
            {
                for (int i = 0; i < Level.Instance.laserLineObj.Length; i++)
                {
                    Level.Instance.laserLineObj[i].SetActive(true);
                }
            }
        }
        if (collision.gameObject.tag == "Wall")
        {
            for (int i = 0; i < Level.Instance.spider.Length; i++)
            {
                if (Level.Instance.spider[i].isCollideWithLine)
                {
                    Level.Instance.spider[i].isCollided = true;
                    Level.Instance.spider[i].offset = Vector2.up;
                    //this.gameObject.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
                }
            }
        }
    }

}