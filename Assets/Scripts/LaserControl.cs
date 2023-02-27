using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaserControl : MonoBehaviour
{

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Dog")
        {
            collision.gameObject.GetComponent<DogController>().Hurtdestroy();
        }

        if (collision.gameObject.tag == "Bee")
        {
            collision.gameObject.GetComponent<BeeController>().Hurt();
        }
    }
}
