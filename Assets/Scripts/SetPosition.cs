using UnityEngine;
using System.Collections;

public class SetPosition : MonoBehaviour
{
	public float side;
	// Use this for initialization
	void Start ()
	{
	
		transform.position = new Vector3 (side * (Camera.main.orthographicSize * Camera.main.aspect + 0.5f), 0.0F, transform.position.z);
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}
}
