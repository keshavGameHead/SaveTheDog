namespace PaperPlaneTools 
{

	using System;

	public class AlertIOSOptions  
	{
		/// <summary>
		/// Default value for <see cref="PaperPlaneTools.AlertIOSOptions.PositiveButton"/>
		/// </summary>
		public static AlertIOSButton.Type DefaultPositiveButton  = AlertIOSButton.Type.Default;
		/// <summary>
		/// Default value for <see cref="PaperPlaneTools.AlertIOSOptions.NegativeButton"/>
		/// </summary>
		public static AlertIOSButton.Type DefaultNegativeButton  = AlertIOSButton.Type.Default;
		/// <summary>
		/// Default value for <see cref="PaperPlaneTools.AlertIOSOptions.NeutralButton"/>
		/// </summary>
		public static AlertIOSButton.Type DefaultNeutralButton   = AlertIOSButton.Type.Default;
		/// <summary>
		/// Default value for <see cref="PaperPlaneTools.AlertIOSOptions.PreferableButton"/>
		/// </summary>
		public static Alert.ButtonType DefaultPreferableButton   = Alert.ButtonType.Positive;
		/// <summary>
		/// Default value for <see cref="PaperPlaneTools.AlertIOSOptions.ButtonsAddOrder"/>
		/// </summary>
		public static Alert.ButtonType[] DefaultButtonsAddOrder = new Alert.ButtonType[3]{Alert.ButtonType.Positive, Alert.ButtonType.Neutral, Alert.ButtonType.Negative};

		/// <summary>
		/// Initializes a new instance of the <see cref="PaperPlaneTools.AlertIOSOptions"/> class.
		/// </summary>
		public AlertIOSOptions() 
		{
			PositiveButton   = DefaultPositiveButton;		
			NegativeButton   = DefaultNegativeButton;		
			NeutralButton    = DefaultNeutralButton;		
			PreferableButton = DefaultPreferableButton;	
			ButtonsAddOrder =  DefaultButtonsAddOrder; 
		}

		/// <summary>
		/// Which iOS button type to use for Positive button
		/// </summary>
		public AlertIOSButton.Type PositiveButton 
		{
			get;
			set;
		}

		/// <summary>
		/// Which iOS button type to use for Negative button
		/// </summary>
		public AlertIOSButton.Type NegativeButton 
		{
			get;
			set;
		}

		/// <summary>
		/// Which iOS button type to use for Neutral button
		/// </summary>
		public AlertIOSButton.Type NeutralButton 
		{
			get;
			set;
		}

		/// <summary>
		/// Which button is preferable
		/// </summary>
		public Alert.ButtonType PreferableButton 
		{
			get;
			set;
		}

		/// <summary>
		/// Define buttons add order. 
		/// Disclaimer: buttons in dialog with mixed button types can be in order differ from order that they were added.
		/// </summary>
		public Alert.ButtonType[] ButtonsAddOrder 
		{
			get;
			set;
		}
	}
}
