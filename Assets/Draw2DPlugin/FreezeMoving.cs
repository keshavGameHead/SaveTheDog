using System;
using UnityEngine;

public class FreezeMoving : MonoBehaviour
{
	private Rigidbody2D rigiThis;

	private GameObject drawingManager;

	public static bool freeze;

	Vector2 offSet;

	private void Start()
	{
		this.rigiThis = base.GetComponent<Rigidbody2D>();
		this.drawingManager = GameObject.Find("DrawingManager");
	}

	private void Update()
	{
		if (this.drawingManager == null)
			return;
		

		if (this.drawingManager.GetComponent<DrawingManager>().freezeWhileDrawing)
		{
			if (FreezeMoving.freeze)
			{
				this.rigiThis.bodyType = RigidbodyType2D.Static;
			}
			else
			{
				this.rigiThis.bodyType = RigidbodyType2D.Dynamic;
			}
		}

        if (Level.Instance.isWater)
        {
			rigiThis.velocity = offSet * 1 * Time.deltaTime;
        }
	}

    private void OnCollisionEnter2D(Collision2D collision)
    {
		Debug.Log("Is Collided With : " + collision.gameObject.name);
    }
}
