namespace PaperPlaneTools {

	using UnityEngine;
	using System.Collections;
	using System;
	using UnityEngine.EventSystems;
	using System.Collections.Generic;
	using UnityEngine.UI;

	public class AlertUnityUIAdapter : MonoBehaviour, IAlertPlatformAdapter {
		[Tooltip("Text component to set alert title. If null title isn't presented.")]
		public Text titleText;
		[Tooltip("Text component to set alert message. If null message isn't presented.")]
		public Text messageText;

		[Tooltip("Button component to set alert positive button text and callback. If null no button is presented.")]
		public Button positiveButton;
		[Tooltip("Button component to set alert neutral button text and callback. If null no button is presented.")]
		public Button neutralButton;
		[Tooltip("Button component to set alert negative button text and callback. If null no button is presented.")]
		public Button negativeButton;

		[Tooltip("Backgroud panel which dismisses the dialog when clicked. If null, dialog doesn't dismiss when click/tap background.")]
		public GameObject dismissPanel;

		private Action onDismiss;

		/// <summary>
		/// Set a callback to call when alert is dismissed.
		/// </summary>
		/// <param name="action">Callback to call.</param>
		void IAlertPlatformAdapter.SetOnDismiss (Action action) 
		{
			onDismiss = action;
		}

		/// <summary>
		/// Dismiss this alert.
		/// </summary>
		void IAlertPlatformAdapter.Dismiss() 
		{
			this.gameObject.SetActive (false);
			if (this.onDismiss != null) 
			{
				this.onDismiss.Invoke();
			}
		}

		/// <summary>
		/// Show the specified alert.
		/// </summary>
		/// <param name="alert">Show <see cref="PaperPlaneTools.Alert"/></param>
		void IAlertPlatformAdapter.Show(Alert alert) 
		{
			//Move to front
			this.transform.SetAsLastSibling ();

			//Set text
			this.titleText.gameObject.SetActive (alert.Title != null);
			if (this.titleText != null) 
			{
				this.titleText.text = alert.Title != null ? alert.Title : "";
			}

			this.messageText.gameObject.SetActive (alert.Message != null);
			if (this.messageText != null ) 
			{
				this.messageText.text = alert.Message != null ? alert.Message : "";
			}

			// Set title and callback for buttons
			SetButton (this.positiveButton, alert.PositiveButton);
			SetButton (this.neutralButton, alert.NeutralButton);
			SetButton (this.negativeButton, alert.NegativeButton);

			// Set background dismiss callback
			if (this.dismissPanel != null) 
			{
				EventTrigger eventTrigger = this.dismissPanel.GetComponent<EventTrigger>();
				if (eventTrigger==null) 
				{
					eventTrigger = this.dismissPanel.AddComponent(typeof(EventTrigger)) as EventTrigger;
				}

				if (eventTrigger!=null) {
					List<EventTrigger.Entry> triggers = new List<EventTrigger.Entry>();
					// Remove all event listeners
					#if UNITY_5_5_OR_NEWER || UNITY_5 && !UNITY_5_0
						//https://docs.unity3d.com/510/Documentation/ScriptReference/EventSystems.EventTrigger-delegates.html
						//Delegates removed in version 5.1.0p1 
						//Please use triggers instead (UnityUpgradable)
						eventTrigger.triggers = triggers;
					#else
						//https://docs.unity3d.com/500/Documentation/ScriptReference/EventSystems.EventTrigger-delegates.html
						//delagates in UNITY 5.0
						eventTrigger.delegates = triggers;
					#endif

					triggers.RemoveAll( (EventTrigger.Entry foo) => {
						return true;
					});
					EventTrigger.Entry entry = new EventTrigger.Entry();
					entry.eventID = EventTriggerType.PointerClick;
					entry.callback.AddListener((eventData) => {
						(this as IAlertPlatformAdapter).Dismiss();
					});
					triggers.Add( entry );
				}
			}

			this.gameObject.SetActive (true);
		}

		/// <summary>
		/// There are no external events => empty implemention
		/// </summary>
		void IAlertPlatformAdapter.HandleEvent (string name, string value) 
		{
		}

		private void SetButton(Button uiButton, AlertButton alertButton) 
		{
			if (uiButton != null) 
			{
				uiButton.gameObject.SetActive(alertButton != null);
				Component[] uiTexts = uiButton.GetComponentsInChildren(typeof(Text), true);
				if (uiTexts != null && uiTexts.Length > 0) 
				{
					Text uiText = uiTexts[0] as Text;
					uiText.text = (alertButton != null && alertButton.Title != null) ? alertButton.Title : "";
				}


				uiButton.onClick.RemoveAllListeners();
				uiButton.onClick.AddListener( () => {
					(this as IAlertPlatformAdapter).Dismiss();
				});
				if (alertButton != null && alertButton.Handler != null) 
				{
					uiButton.onClick.AddListener( () => {
						alertButton.Handler.Invoke();
					} );
				}
			}
		}
	}
}