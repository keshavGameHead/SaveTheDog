using Spine.Unity;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DogController : MonoBehaviour
{
    public Rigidbody2D rb;
    public SkeletonAnimation mAnimator;
    public GameObject deathVfx;
    public static DogController Instance;
    public bool ishurt;
    public bool isMonster;
    public Animator animator;

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
            mAnimator.AnimationName = "4-sting";
        
        GameController.instance.currentState = GameController.STATE.GAMEOVER;
    }
    public void MonsterHurt()
    {
        AudioManager.instance.dogAudio.Play();
        ishurt = true;
        animator.SetBool("Hurt", true);
        //mAnimator.AnimationName = "4-sting";
    }

    public void Hurtdestroy()
    {
        GameController.instance.currentState = GameController.STATE.GAMEOVER;
        Instantiate(deathVfx, transform.position, Quaternion.identity);
        Destroy(gameObject);
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
        if (Level.Instance.laserMode)
        {
            if (col.gameObject.tag == "Laser")
            {
                GameController.instance.currentState = GameController.STATE.GAMEOVER;
                Instantiate(deathVfx, transform.position, Quaternion.identity);
                Destroy(gameObject);
            }
        }


    }

}
