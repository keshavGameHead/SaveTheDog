using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class SpiderControl : MonoBehaviour
{

    LineRenderer lr;
    public Vector2 offset = Vector2.down;
    public List<Vector2> points = new List<Vector2>();
    Vector2 startPos;
    public bool isCollided = false;
    GameObject collidedObj;
    public bool isCollideWithLine;

    // Start is called before the first frame update
    void Start()
    {
        startPos = transform.position;
        lr = GetComponent<LineRenderer>();
        SetPoints();
    }

    private void SetPoints()
    {
        points.Add(transform.position);
        lr.positionCount = points.Count;
        lr.SetPosition(points.Count - 1, transform.position);
    }

    // Update is called once per frame
    void Update()
    {
        if (isCollided == false)
        {
            Vector2 pos = transform.position;
            pos += offset * 2f * Time.deltaTime;
            transform.position = pos;
        }
        else
        {
            transform.position = Vector2.MoveTowards(transform.position, startPos, 1f * Time.deltaTime);
        }
        if (Vector3.Distance(points.Last(),transform.position) > 0.1f)
        {
            SetPoints();
        }   
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Line")
        {
            isCollided = true;
            isCollideWithLine = true;
            offset = Vector2.up;
            collision.transform.SetParent(this.gameObject.transform);
            collision.gameObject.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Kinematic;
        }
    }
}
