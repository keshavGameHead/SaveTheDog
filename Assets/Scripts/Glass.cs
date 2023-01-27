using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Glass : MonoBehaviour
{
    private bool isBreaking;

    private SpriteRenderer mSprite;

    public Sprite breakingSprite;

    // Start is called before the first frame update
    void Start()
    {
        mSprite = GetComponent<SpriteRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Dog" || collision.gameObject.tag == "Bee" || collision.gameObject.tag == "Line")
        {
            if(!isBreaking)
            {
                isBreaking = true;
                StartCoroutine(Breaking());
            }
            
        }
    }

    IEnumerator Breaking()
    {
        yield return new WaitForSeconds(1.0f);
        AudioManager.instance.breakAudio.Play();
        mSprite.sprite = breakingSprite;
        yield return new WaitForSeconds(1.0f);
        AudioManager.instance.breakAudio.Play();
        Destroy(gameObject);
    }
}
