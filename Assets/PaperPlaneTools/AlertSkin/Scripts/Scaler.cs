namespace PaperPlaneTools
{
	using UnityEngine;
	using System.Collections;
	
	/// <summary>
	/// Downscale the game object to fit the screen
	/// </summary>
	[ExecuteInEditMode]
	public class Scaler : MonoBehaviour {
		public float maxWidth = 1f;
		public float maxHeight = 1f;

		void Update () {
			RectTransform transform = this.GetComponent<RectTransform>();
			//this.GetComponentInParent
			RectTransform parentTransform = (this.transform.parent != null) ? this.transform.parent.GetComponent<RectTransform> () : null;
			float widthFactor = 1f;
		
			float width = transform.rect.width;
			float parentWidth = (parentTransform != null) ? parentTransform.rect.width : 0f;
			if (width > 0 ) {
				widthFactor = Mathf.Min(1f, (parentWidth * this.maxWidth) / width);
			}

			float heightFactor = 1f;
			float height = transform.rect.height;
			float parentHeight = (parentTransform != null) ? parentTransform.rect.height : 0f;
			if (width > 0 ) {
				heightFactor = Mathf.Min(1f, (parentHeight * this.maxHeight) / height);
			}

			float factor = Mathf.Min (widthFactor, heightFactor);

			this.transform.localScale = new Vector3(factor, factor, 1f);
		}
	}
}