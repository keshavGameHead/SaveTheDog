namespace PaperPlaneTools 
{
	#if UNITY_IOS

	using UnityEngine;
	using System.Collections;
	using System;
	using System.Collections.Generic;
	using System.Runtime.InteropServices;

	/// <summary>
	/// Implements native iOS alert
	/// </summary>
	public class AlertIOS 
	{
		[DllImport("__Internal")]
		extern static private void _alertControllerHandler (string gameObjectName);

		[DllImport("__Internal")]
		extern static private int _alertControllerWithTitle (string title, string message, int style);

		[DllImport("__Internal")]
		extern static private int _alertControllerAddAction (string title, int tag, int style, bool isPreferable);

		[DllImport("__Internal")]
		extern static private int _alertControllerPresent (bool animated);

		[DllImport("__Internal")]
		extern static private int _alertControllerDismiss (bool animated);

		public enum AlertStyle 
		{
			ALERT = 0
		};

		private List<AlertIOSButton> buttons = new List<AlertIOSButton>();

		/// <summary>
		/// Dismiss callback
		/// </summary>
		public Action OnDismiss = null;

		/// <summary>
		/// Initializes a new instance of the <see cref="PaperPlaneTools.AlertIOS"/> class.
		/// </summary>
		/// <param name="title">Title</param>
		/// <param name="message">Message</param>
		public AlertIOS(string title = null, string message = null) 
		{
			Title = title;
			Message = message;
		}

		/// <summary>
		/// Alert title
		/// </summary>
		public string Title 
		{
			get;
			set;
		}
		/// <summary>
		/// Alert message
		/// </summary>
		public string Message 
		{
			get;
			set;
		}

		/// <summary>
		/// Adds a button
		/// </summary>
		/// <param name="whichButton">Button.</param>
		/// <param name="title">Title</param>
		/// <param name="handler">Callback</param>
		/// <param name="isPreferable">If set to <c>true</c> title will be bold.</param>
		public void AddButton(AlertIOSButton.Type whichButton, string title, Action handler, bool isPreferable) 
		{
			buttons.Add( new AlertIOSButton(whichButton, title, handler, isPreferable) );
		}

		/// <summary>
		/// Show native ios alert
		/// </summary>
		/// <param name="gameObjectName">Game object name in the scene to handle callbacks</param>
		/// <param name="animated">Animated emerge</param>
		public void Show(string gameObjectName, bool animated) 
		{
			_alertControllerHandler(string.Format ("{0}", gameObjectName));
			_alertControllerWithTitle(string.Format ("{0}", Title), string.Format ("{0}", Message), (int)AlertStyle.ALERT);
			int tagIndex = 0;
			foreach (AlertIOSButton button in buttons) {
				_alertControllerAddAction(string.Format ("{0}", button.Title), tagIndex, (int)button.WhichButton, button.IsPreferable);
				tagIndex++;
			}

			_alertControllerPresent(animated);
		}

		/// <summary>
		/// Dismiss current alert
		/// </summary>
		public void Dismiss(bool animated) 
		{
			_alertControllerDismiss(animated);
		}

		/// <summary>
		/// Callback for button click
		/// </summary>
		public void HandleButtonClick(int tag) 
		{
			if (tag < buttons.Count) 
			{
				AlertIOSButton button = buttons [tag];
				if (button.Handler != null) 
				{
					button.Handler.Invoke ();
				}
			}
		}

		/// <summary>
		/// Callback for dismiss
		/// </summary>
		public void HandleDismiss() 
		{
			if (OnDismiss != null) 
			{
				OnDismiss.Invoke ();
			}
		}
	}

	#endif
}