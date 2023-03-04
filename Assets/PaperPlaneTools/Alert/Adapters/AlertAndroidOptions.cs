namespace PaperPlaneTools 
{

	using System;

	public class AlertAndroidOptions  
	{
		/// <summary>
		/// Default value for <see cref="PaperPlaneTools.AlertAndroidOptions.Cancelable"/>
		/// </summary>
		public static bool DefaultCancelable = true;
	
		/// <summary>
		/// Initializes a new instance of the <see cref="PaperPlaneTools.AlertAndroidOptions"/> class.
		/// </summary>
		public AlertAndroidOptions() 
		{
			Cancelable = DefaultCancelable;		
		}

		/// <summary>
		/// If true, dialog can be canceled.
		/// For more details visit https://developer.android.com/reference/android/app/AlertDialog.Builder.html#setCancelable(boolean)
		/// </summary>
		public bool Cancelable 
		{
			get;
			set;
		}
	}
}
