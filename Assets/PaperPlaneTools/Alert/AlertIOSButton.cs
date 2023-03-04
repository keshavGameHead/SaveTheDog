namespace PaperPlaneTools 
{
	using System;

	/// <summary>
	/// Helper class to hold buttons in <see cref="PaperPlaneTools.AlertIOS.buttons"/>
	/// </summary>
	public class AlertIOSButton 
	{

		public enum Type
		{
			Default = 0,
			Cancel = 1,
			Destructive = 2
		};

		/// <summary>
		/// Initializes a new instance of the <see cref="PaperPlaneTools.AlertIOSButton"/> class.
		/// </summary>
		/// <param name="whichButton">Button type</param>
		/// <param name="title">Button title</param>
		/// <param name="handler">OnClick callback</param>
		/// <param name="isPreferable">If <c>true</c>, title will be bold</param>
		public AlertIOSButton(AlertIOSButton.Type whichButton, string title, Action handler, bool isPreferable) 
		{
			WhichButton = whichButton;
			Title = title;
			Handler = handler;
			IsPreferable = isPreferable;
		}

		/// <summary>
		/// Button type
		/// </summary>
		public AlertIOSButton.Type WhichButton 
		{
			get;
			private set;
		}

		/// <summary>
		/// Button title
		/// </summary>
		public string Title 
		{
			get;
			private set;
		}

		/// <summary>
		/// OnClick callback
		/// </summary>
		/// <value>The handler.</value>
		public Action Handler 
		{
			get;
			private set;
		}

		/// <summary>
		/// If true title will be bold
		/// </summary>
		public bool IsPreferable 
		{
			get;
			private set;
		}			
	}
}