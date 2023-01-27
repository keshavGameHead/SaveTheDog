using System;
using UnityEngine;

public class Target : MonoBehaviour
{
	public string targetTagName;

	private void Awake()
	{
		if (string.IsNullOrEmpty(this.targetTagName))
		{
			this.targetTagName = "Character";
		}
	}

	private void OnTriggerEnter2D(Collider2D other)
	{
		if (this.targetTagName.Equals(other.gameObject.tag))
		{
			//GameController.instance.onCharacterMeetTarget(other.gameObject, base.gameObject);
		}
	}
}
