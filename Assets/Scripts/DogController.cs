using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DogController : MonoBehaviour
{
    public Rigidbody2D rb;
    public Animator mAnimator;
    public GameObject deathVfx;
    public static DogController Instance;
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
        mAnimator.SetBool("Hurt", true);
        GameController.instance.currentState = GameController.STATE.GAMEOVER;
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
                Debug.LogError("Is Collide with GrilDog");
                UIManager.Instance.isCollideWithGirl = true;
                Level.Instance.StartLoveAnim();
            }
        }
    }

}
