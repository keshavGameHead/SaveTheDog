namespace PaperPlaneTools 
{

	using System;


	// This is an interface that allow Alert to support different platforms
	// If you want to support (or change behaviour) on any platform (IOS, Android, Mac etc),
	// you shold 
	//  1. imlement this interface
	//  2. register your implementation setting AlertManager.Instance.AlertFactory 

	/// <summary>
	/// An interface that connect <see cref="PaperPlaneTools.Alert"/> with particular alert implimentation.
	/// If you want to support (or change behaviour) on any platform (IOS, Android, Mac etc),
	/// you shold imlement <see cref="PaperPlaneTools.IAlertPlatformAdapter"/> and 
	/// set <see cref="PaperPlaneTools.AlertManager.Instance.AlertFactory"/> or <see cref="PaperPlaneTools.Alert.SetAdapter"/>
	/// </summary>
	public interface IAlertPlatformAdapter 
	{
		/// <summary>
		/// Set a callback to call when alert is dismissed.
		/// </summary>
		/// <param name="action">Callback to call.</param>
		void SetOnDismiss (Action action);

		/// <summary>
		/// Show the specified alert.
		/// </summary>
		/// <param name="alert">Show <see cref="PaperPlaneTools.Alert"/></param>
		void Show(Alert alert);
		/// <summary>
		/// Dismiss this alert.
		/// </summary>
		void Dismiss();

		/// <summary>
		/// Handles an external event. 
		/// For example, this function is used to handle events from iOS or Android native plugins.
		/// </summary>
		/// <param name="name">Event name.</param>
		/// <param name="value">Event value.</param>
		void HandleEvent (string name, string value);
	}
}