namespace PaperPlaneTools 
{
	using System.Collections;
	using System;
	using System.Collections.Generic;

	// Cross-platform alert dialog that supports three buttons, title and message.
	// Simple usage:
	//    new Alert ("Hello", "Hello, world!")
	//	      .SetPositiveButton("OK")
	//        .Show();
	// 
	// Queue support:
	//    Alert supports queue. This means that you can call Alert.Show() regardless if another Alert is presented.
	//    For example code bellow will produce two alerts in a row (second alert will appear after first is dismissed):
	//        for (int i=0; i<2; i++) 
	//        {
	//             new Alert ("Hello", "Hello, world!")
	//	               .SetPositiveButton("OK")
	//                 .Show();
	//        }
	// 
	// Set callbacks:
	//    new Alert ("Hello", "Hello, world!")
	//        .SetPositiveButton("OK", () => { print("Button pressed"); })
	//        .Show();
	//
	// Set dismiss callback:
	//     Dismiss callback is called every time when alert dialog is dismissed
	//     with no respect to the reason of closing:
	//     Dialog can be canceled on Android (tap out of the dialog) or
	//   Dialogue can be closed after the button was pressed
	//     For example:
	//          new Alert ("Hello", "Hello, world!")
	//              .SetPositiveButton("OK", () => { print("Button pressed"); })
	//              .SetOnDismiss(() => { printDialogue is dismissed"); } )
	//              .Show();
	//     output will be:
	//          Button pressed
	//        Dialogue is dismissed    
	//
	// Fine-tuning:
	//     You can customize alert behavior on various platforms (For details see AlertAndroidOptions, AlertIOSOptions)
	//     This example demonstrates how to show alert with Red (destructive) button on IOS devices 
	//     and prevent dialog from cancellation on Android devices:
	//         new Alert ("Delete confirmation", "Do you want to delete selected items?")
	//             .SetPositiveButton("Yes", () => { /*...*/ })
	//             .SetNegativeButton("No")
	//             .AddOptions(new AlertIOSOptions() {
	//                  NegativeButton = AlertIOSButton.Type.Destructive,
	//		            PreferableButton = Alert.ButtonType.Positive
	//	            })
	//             .AddOptions(new AlertAndroidOptions() {
	//                   Cancelable = false
	//	            })
	//             .Show();
	//
	// Extending to other platforms or alter behavior on IOS, Android or UnityEditor
	//     See IAlertAdapter for details
	// 

	/// <summary>
	/// Cross-platform alert dialog. Support title, message, 3 buttons
	/// 
	/// </summary>
	public class Alert {
		public enum ButtonType 
		{
			Positive = 0,
			Negative = 1,
			Neutral  = 2
		};


		/// <summary>
		/// Initializes a new instance of the <see cref="PaperPlaneTools.Alert"/> class.
		/// </summary>
		/// <param name="title">Title</param>
		/// <param name="message">Message</param>
		public Alert(string title = null, string message = null) 
		{
			
			Title = title;
			Message = message;
			Options = new List<Object> ();
		}

		/// <summary>
		/// Alert title
		/// </summary>
		public string Title 
		{
			get;
			private set;
		}

		/// <summary>
		/// Alert message
		/// </summary>
		public string Message {
			get;
			private set;
		}

		/// <summary>
		/// Positive button.
		/// </summary>
		public AlertButton PositiveButton 
		{
			get;
			private set;
		}

		/// <summary>
		/// Negative button.
		/// </summary>
		public AlertButton NegativeButton 
		{
			get;
			private set;
		}

		/// <summary>
		/// Neutral button.
		/// </summary>
		public AlertButton NeutralButton 
		{
			get;
			private set;
		}

		/// <summary>
		/// Platform dependent options that are used by alert adapters.
		/// For example, <see cref="PaperPlaneTools.AlertIOSOptions"/> or <see cref="PaperPlaneTools.AlertAndroidOptions"/> help clarify behavior of native alerts
		/// </summary>
		public List<System.Object> Options 
		{
			get;
			private set;
		}

		/// <summary>
		/// Dismiss callback is called everytime the dialog is dismissed.
		/// </summary>
		public Action OnDismiss 
		{
			get;
			private set;
		}

		/// <summary>
		/// Allow customize how <see cref="PaperPlaneTools.Alert"/> is shown.
		/// </summary>
		public IAlertPlatformAdapter Adapter 
		{
			get;
			private set;
		}

		/// <summary>
		/// Sets the <see cref="PaperPlaneTools.Alert.Title"/>.
		/// </summary>
		public Alert SetTitle(string title) 
		{
			Title = title;
			return this;
		}

		/// <summary>
		/// Sets the <see cref="PaperPlaneTools.Alert.Message"/>.
		/// </summary>
		public Alert SetMessage(string title) 
		{
			Title = title;
			return this;
		}

		/// <summary>
		/// Sets <see cref="PaperPlaneTools.Alert.PositiveButton"/>.
		/// </summary>
		public Alert SetPositiveButton(string title, Action handler = null) 
		{
			PositiveButton = new AlertButton (title, handler);
			return this;
		}

		/// <summary>
		/// Sets <see cref="PaperPlaneTools.Alert.NegativeButton"/>.
		/// </summary>
		public Alert SetNegativeButton(string title, Action handler = null) 
		{
			NegativeButton = new AlertButton (title, handler);
			return this;
		}

		/// <summary>
		/// Sets <see cref="PaperPlaneTools.Alert.NeutralButton"/>.
		/// </summary>
		public Alert SetNeutralButton(string title, Action handler = null) 
		{
			NeutralButton = new AlertButton (title, handler);
			return this;
		}

		/// <summary>
		/// Adds option to <see cref="PaperPlaneTools.Alert.Options"/>.
		/// </summary>
		public Alert AddOptions(Object opt) 
		{
			Options.Add (opt);
			return this;
		}
		/// <summary>
		/// Set <see cref="PaperPlaneTools.Alert.Options"/>.
		/// </summary>
		public Alert SetOptions(List<Object> options)
		{
			Options = options;
			return this;
		}

		/// <summary>
		/// Set <see cref="PaperPlaneTools.Alert.OnDismiss"/>.
		/// </summary>
		public Alert SetOnDismiss(Action handler) 
		{
			OnDismiss = handler;
			return this;
		}

		/// <summary>
		/// Set <see cref="PaperPlaneTools.Alert.Adapter"/>.
		/// </summary>
		public Alert SetAdapter(IAlertPlatformAdapter adaper) 
		{
			Adapter = adaper;
			return this;
		}

		/// <summary>
		/// Add dialog to display queue.
		/// </summary>
		public void Show() 
		{
			AlertManager.Instance.Show (this);
		}

		/// <summary>
		/// Alert can be dismissed while it is presented.
		/// Normally you don't call Dismiss function.
		/// However, in some cases this function can be useful. 
		/// For example, 
		/// Alert that dismissed authomatically after few seconds 
		/// can be done with help of this function
		/// </summary>
		public void Dismiss() 
		{
			AlertManager.Instance.Dismiss (this);
		}

	}

	/// <summary>
	/// Holds button's title and handler
	/// </summary>
	public class AlertButton {
		/// <summary>
		/// Title
		/// </summary>
		public string Title {
			get;
			private set;
		}
		/// <summary>
		/// OnClick callback
		/// </summary>
		public Action Handler {
			get;
			private set;
		}

		/// <summary>
		/// Initializes a new instance of the <see cref="PaperPlaneTools.AlertButton"/> class.
		/// </summary>
		/// <param name="title">Title.</param>
		/// <param name="handler">Handler.</param>
		public AlertButton(string title, Action handler) {
			Title = title;
			Handler = handler;
		}
	}
}