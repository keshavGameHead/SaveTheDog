using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DogController : MonoBehaviour
{
    public Rigidbody2D rb;
    public Animator mAnimator;
    public GameObject deathVfx;
    public static DogController Instance;
    public bool ishurt;
    public bool isMonster;

    private void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
    }


    // Update is called once per frame
    void Update()
    {
       
    }

    public void Hurt()
    {
        AudioManager.instance.dogAudio.Play();
        ishurt = true;
        mAnimator.SetBool("Hurt", true);
        GameController.instance.currentState = GameController.STATE.GAMEOVER;
    }
    public void MonsterHurt()
    {
        AudioManager.instance.dogAudio.Play();
        ishurt = true;
        mAnimator.SetBool("Hurt", true);
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Lava" || collision.gameObject.tag == "Water" || collision.gameObject.tag == "Spike")
        {
            GameController.instance.currentState = GameController.STATE.GAMEOVER;
            Instantiate(deathVfx, transform.position, Quaternion.identity);
            Destroy(gameObject);
        }

        if (Level.Instance.LoveMode)
        {
            if (collision.gameObject.tag == "LDog")
            {
                UIManager.Instance.isCollideWithGirl = true;
                Level.Instance.StartLoveAnim();
            }
        }

    }

    private void OnTriggerEnter2D(Collider2D col)
    {
        if (isMonster)
        {
            if (col.gameObject.tag == "Dog")
            {
                Debug.LogError("Is Collide with Monster");
                col.gameObject.GetComponent<DogController>().Hurt();
                gameObject.GetComponent<CircleCollider2D>().isTrigger = false;
            }
        }
    }

}
