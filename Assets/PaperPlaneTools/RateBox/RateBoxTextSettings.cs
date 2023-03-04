namespace PaperPlaneTools {
	using UnityEngine;
	using System.Collections;
	

	public class RateBoxTextSettings {
		/// <summary>
		/// Title of the dialog.
		/// Example: "Like the game?"
		/// </summary>
		public string Title 
		{
			get;
			set;
		}

		/// <summary>
		/// Message of the dialog.
		/// Example: "Take a moment to rate us!"
		/// </summary>
		public string Message 
		{
			get;
			set;
		}

		/// <summary>
		/// Title of the rate button.
		/// Example: "Rate"
		/// </summary>
		public string RateButtonTitle 
		{
			get;
			set;
		}

		/// <summary>
		/// Title of the postpone (later) button.
		/// Example: "Later"
		/// </summary>
		public string PostponeButtonTitle 
		{
			get;
			set;
		}

		/// <summary>
		/// Title of the reject (never) button.
		/// Note: if empty string, 2-button dialog will be prompt.
		/// Example: "Never"
		/// </summary>
		public string RejectButtonTitle 
		{
			get;
			set;
		}

	}
}
