using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Bomb : MonoBehaviour
{
    public float time;
    public bool isTimeStart;
    public TextMeshPro timeTxt;

    public Rigidbody2D rb;

    private void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (isTimeStart)
        {
            time -= Time.deltaTime;
            if (time < 0)
            {
                Debug.LogError("Bomb Blast");
                Destroy(gameObject);
            }
            timeTxt.text = ((int)time).ToString();
        }
    }
}
