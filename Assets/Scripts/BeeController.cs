using Pathfinding;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BeeController : MonoBehaviour
{
    public Rigidbody2D mRigidbody;

    public Transform target;

    public GameObject deathVfx;

    public enum STATE
    {
        WAIT,MOVE,ATTACK
    };

    public STATE currentState;

    public float charingTime;

    private float timer;

    public AudioSource beeSound;

    public SpriteRenderer Sp;

    public AIDestinationSetter AI;

    private void Awake()
    {
        mRigidbody = GetComponent<Rigidbody2D>();
        currentState = STATE.WAIT;
    }
    // Start is called before the first frame update
    void Start()
    {
        if (!Level.Instance.PathFindMode)
        {
            gameObject.GetComponent<AIPath>().enabled = false;
            gameObject.GetComponent<AIDestinationSetter>().enabled = false;
        }
        else
        {
            AI.target = this.target;
        }
        if (Level.Instance.TeleportMode)
        {
            target = Level.Instance.teleTargetObj;
        }
        else
        {
            int dogIndexRandom = Random.RandomRange(0, GameController.instance.currentLevel.dogList.Count);
            target = GameController.instance.currentLevel.dogList[dogIndexRandom];
        }

        timer = 0.0f;
        Sp = GetComponentInChildren<SpriteRenderer>();
        if (AudioManager.instance.soundState == 0)
            beeSound.volume = 0.0f;
        else
            beeSound.volume = 1.0f;
    }

    // Update is called once per frame
    void Update()
    {
        if (GameController.instance.currentState == GameController.STATE.FINISH || GameController.instance.currentState == GameController.STATE.GAMEOVER)
        {
            this.currentState = STATE.MOVE;
            mRigidbody.fixedAngle = true;
        }
    }

    private void FixedUpdate()
    {
        if (target == null)
            return;

        switch(currentState)
        {
            case STATE.WAIT:
                break;

            case STATE.MOVE:
                Vector3 force = Vector3.Normalize(target.position - (transform.position + new Vector3(Random.Range(-1, 1), Random.Range(-1, 1)))) * 5;
                if (force.x > 0)
                {
                    Sp.flipX = false;
                }
                else {
                    Sp.flipX = true;
                }
                mRigidbody.AddForce(force);
                break;

            case STATE.ATTACK:
                //Debug.Log("ATTCKING");
                timer += Time.deltaTime;

                if(timer >= charingTime)
                {

                    Vector3 force1 = Vector3.Normalize(target.position - (transform.position + new Vector3(Random.Range(-1, 1), Random.Range(-1, 1)))) * 10;
                    if (force1.x > 0)
                    {
                        Sp.flipX = false;
                    }
                    else
                    {
                        Sp.flipX = true;
                    }
                    mRigidbody.AddForce(force1);
                }
                break;
        }
        
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if(collision.gameObject.tag == "Line")
        {
            StartToAttack();
        }

        if (collision.gameObject.tag == "Bee")
        {
            StartToAttack();
        }

        if (collision.gameObject.tag == "Dog" || collision.gameObject.tag == "LDog")
        {
            StartToAttack();
            collision.gameObject.GetComponent<DogController>().Hurt();
        }

        if (collision.gameObject.tag == "Monster")
        {
            StartToAttack();
            collision.gameObject.GetComponent<DogController>().MonsterHurt();
        }

        if (collision.gameObject.tag == "Lava" || collision.gameObject.tag == "Water" || collision.gameObject.tag == "Laser")
        {
            Instantiate(deathVfx, transform.position, Quaternion.identity);
            Destroy(gameObject);
        }
        
        if (collision.gameObject.tag == "TeleEnter")
        {
            transform.position = Level.Instance.teleOutObj.position;
            int dogIndexRandom = Random.RandomRange(0, GameController.instance.currentLevel.dogList.Count);
            target = GameController.instance.currentLevel.dogList[dogIndexRandom];
        }
    }

    void StartToAttack()
    {
        currentState = STATE.ATTACK;
        timer = 0.0f;
    }

    public void Hurt()
    {
        Instantiate(deathVfx, transform.position, Quaternion.identity);
        Destroy(gameObject);
    }
}
