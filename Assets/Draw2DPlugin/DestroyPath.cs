using System;
using System.Collections.Generic;
using UnityEngine;

public class DestroyPath : MonoBehaviour
{
	public bool isPermanent;

	private List<Vector2> newVerticies = new List<Vector2>();

	public float destroyCounter;

	private bool canDestroy;

	private Vector2 centerOfMass = Vector2.zero;

	private DrawingManager managerScript;

	private bool dynamicMass;

	private float massScale;

	private void Start()
	{
		this.managerScript = GameObject.Find("DrawingManager").GetComponent<DrawingManager>();
		this.newVerticies = this.managerScript.newVerticies;
		this.destroyCounter = this.managerScript.lifeTime;
		this.isPermanent = this.managerScript.isPermanent;
	}

	private void Update()
	{
		if (Input.GetMouseButtonUp(0) && base.name.Equals("Drawing" + (DrawingManager.cloneNumber - 1)))
		{
			foreach (Vector2 current in this.newVerticies)
			{
				this.centerOfMass += current;
			}
			this.centerOfMass /= (float)this.newVerticies.Count;
			this.canDestroy = true;
		}
		if (this.destroyCounter > 0f && !this.isPermanent && this.canDestroy)
		{
			this.destroyCounter -= Time.deltaTime;
			if (this.destroyCounter <= 0f)
			{
				UnityEngine.Object.Destroy(base.gameObject);
			}
		}
	}
}
