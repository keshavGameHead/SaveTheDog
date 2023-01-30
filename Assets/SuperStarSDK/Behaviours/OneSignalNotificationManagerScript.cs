//using UnityEngine;
//using System.Collections.Generic;
//using OneSignalPush.MiniJSON;
//using System;
//using SuperStarSdk;

//public class OneSignalNotificationManagerScript : MonoBehaviour
//{
//    public static OneSignalNotificationManagerScript Instance;
//    //  public string OneSignalAppId;
//    private static string extraMessage;

//    private static bool requiresUserPrivacyConsent = false;

//    private void Awake()
//    {
//        if (Instance == null)
//        {
//            Instance = this;
//        }
//    }

//    // Start is called before the first frame update
//    void Start()
//    {
//        extraMessage = null;

//        // Enable line below to debug issues with setuping OneSignal. (logLevel, visualLogLevel)
//        OneSignal.SetLogLevel(OneSignal.LOG_LEVEL.VERBOSE, OneSignal.LOG_LEVEL.NONE);

//        // If you set to true, the user will have to provide consent
//        // using OneSignal.UserDidProvideConsent(true) before the
//        // SDK will initialize
//        OneSignal.SetRequiresUserPrivacyConsent(requiresUserPrivacyConsent);

//        // The only required method you need to call to setup OneSignal to receive push notifications.
//        // Call before using any other methods on OneSignal (except setLogLevel or SetRequiredUserPrivacyConsent)
//        // Should only be called once when your app is loaded.
//        // OneSignal.Init(OneSignal_AppId);
//        OneSignal.StartInit(SuperStarSdkManager.Instance.Settings.OneSignalAppId)
//            .HandleNotificationReceived(HandleNotificationReceived)
//            .HandleNotificationOpened(HandleNotificationOpened)
//            .HandleInAppMessageClicked(HandlerInAppMessageClicked)
//            .EndInit();

//        OneSignal.inFocusDisplayType = OneSignal.OSInFocusDisplayOption.Notification;
//        OneSignal.permissionObserver += OneSignal_permissionObserver;
//        OneSignal.subscriptionObserver += OneSignal_subscriptionObserver;
//        OneSignal.emailSubscriptionObserver += OneSignal_emailSubscriptionObserver;

//        var pushState = OneSignal.GetPermissionSubscriptionState();

//        //OneSignalInAppMessageTriggerExamples();
//        //OneSignalOutcomeEventsExamples();
//    }

//    // Examples of using OneSignal In-App Message triggers
//    private void OneSignalInAppMessageTriggerExamples()
//    {
//        // Add a single trigger
//        OneSignal.AddTrigger("key", "value");

//        // Get the current value to a trigger by key
//        var triggerKey = "key";
//        var triggerValue = OneSignal.GetTriggerValueForKey(triggerKey);
//        String output = "Trigger key: " + triggerKey + " value: " + (String)triggerValue;
//        Console.WriteLine(output);

//        // Add multiple triggers
//        OneSignal.AddTriggers(new Dictionary<string, object>() { { "key1", "value1" }, { "key2", 2 } });

//        // Delete a trigger
//        OneSignal.RemoveTriggerForKey("key");

//        // Delete a list of triggers
//        OneSignal.RemoveTriggersForKeys(new List<string>() { "key1", "key2" });

//        // Temporarily puase In-App messages; If true is passed in.
//        // Great to ensure you never interrupt your user while they are in the middle of a match in your game.
//        OneSignal.PauseInAppMessages(false);
//    }

//    private void OneSignalOutcomeEventsExamples()
//    {
//        OneSignal.SendOutcome("normal_1");
//        OneSignal.SendOutcome("normal_2", (OSOutcomeEvent outcomeEvent) =>
//        {
//            printOutcomeEvent(outcomeEvent);
//        });

//        OneSignal.SendUniqueOutcome("unique_1");
//        OneSignal.SendUniqueOutcome("unique_2", (OSOutcomeEvent outcomeEvent) =>
//        {
//            printOutcomeEvent(outcomeEvent);
//        });

//        OneSignal.SendOutcomeWithValue("value_1", 3.2f);
//        OneSignal.SendOutcomeWithValue("value_2", 3.2f, (OSOutcomeEvent outcomeEvent) =>
//        {
//            printOutcomeEvent(outcomeEvent);
//        });
//    }

//    private void printOutcomeEvent(OSOutcomeEvent outcomeEvent)
//    {
//        Console.WriteLine(outcomeEvent.session + "\n" +
//                string.Join(", ", outcomeEvent.notificationIds) + "\n" +
//                outcomeEvent.name + "\n" +
//                outcomeEvent.timestamp + "\n" +
//                outcomeEvent.weight);
//    }

//    private void OneSignal_subscriptionObserver(OSSubscriptionStateChanges stateChanges)
//    {
//        Debug.Log("SUBSCRIPTION stateChanges: " + stateChanges);
//        Debug.Log("SUBSCRIPTION stateChanges.to.userId: " + stateChanges.to.userId);
//        Debug.Log("SUBSCRIPTION stateChanges.to.subscribed: " + stateChanges.to.subscribed);
//    }

//    private void OneSignal_permissionObserver(OSPermissionStateChanges stateChanges)
//    {
//        Debug.Log("PERMISSION stateChanges.from.status: " + stateChanges.from.status);
//        Debug.Log("PERMISSION stateChanges.to.status: " + stateChanges.to.status);
//    }

//    private void OneSignal_emailSubscriptionObserver(OSEmailSubscriptionStateChanges stateChanges)
//    {
//        Debug.Log("EMAIL stateChanges.from.status: " + stateChanges.from.emailUserId + ", " + stateChanges.from.emailAddress);
//        Debug.Log("EMAIL stateChanges.to.status: " + stateChanges.to.emailUserId + ", " + stateChanges.to.emailAddress);
//    }

//    // Called when your app is in focus and a notificaiton is recieved.
//    // The name of the method can be anything as long as the signature matches.
//    // Method must be static or this object should be marked as DontDestroyOnLoad
//    private static void HandleNotificationReceived(OSNotification notification)
//    {
//        OSNotificationPayload payload = notification.payload;
//        string message = payload.body;

//        print("GameControllerExample:HandleNotificationReceived: " + message);
//        print("displayType: " + notification.displayType);
//        extraMessage = "Notification received with text: " + message;

//        Dictionary<string, object> additionalData = payload.additionalData;
//        if (additionalData == null)
//            Debug.Log("[HandleNotificationReceived] Additional Data == null");
//        else
//            Debug.Log("[HandleNotificationReceived] message " + message + ", additionalData: " + Json.Serialize(additionalData) as string);
//    }

//    // Called when a notification is opened.
//    // The name of the method can be anything as long as the signature matches.
//    // Method must be static or this object should be marked as DontDestroyOnLoad
//    public static void HandleNotificationOpened(OSNotificationOpenedResult result)
//    {
//        OSNotificationPayload payload = result.notification.payload;
//        string message = payload.body;
//        string actionID = result.action.actionID;

//        print("GameControllerExample:HandleNotificationOpened: " + message);
//        extraMessage = "Notification opened with text: " + message;

//        Dictionary<string, object> additionalData = payload.additionalData;
//        if (additionalData == null)
//            Debug.Log("[HandleNotificationOpened] Additional Data == null");
//        else
//            Debug.Log("[HandleNotificationOpened] message " + message + ", additionalData: " + Json.Serialize(additionalData) as string);

//        if (actionID != null)
//        {
//            // actionSelected equals the id on the button the user pressed.
//            // actionSelected will equal "__DEFAULT__" when the notification itself was tapped when buttons were present.
//            extraMessage = "Pressed ButtonId: " + actionID;
//        }
//    }

//    public static void HandlerInAppMessageClicked(OSInAppMessageAction action)
//    {
//        String logInAppClickEvent = "In-App Message Clicked: " +
//            "\nClick Name: " + action.clickName +
//            "\nClick Url: " + action.clickUrl +
//            "\nFirst Click: " + action.firstClick +
//            "\nCloses Message: " + action.closesMessage;

//        print(logInAppClickEvent);
//        extraMessage = logInAppClickEvent;
//    }

//    public void SendNotification()
//    {
//        OneSignal.IdsAvailable((userId, pushToken) =>
//        {
//            if (pushToken != null)
//            {
//                // See http://documentation.onesignal.com/docs/notifications-create-notification for a full list of options.
//                // You can not use included_segments or any fields that require your OneSignal 'REST API Key' in your app for security reasons.
//                // If you need to use your OneSignal 'REST API Key' you will need your own server where you can make this call.

//                var notification = new Dictionary<string, object>();
//                notification["contents"] = new Dictionary<string, string>() { { "en", "Test Message" } };
//                // Send notification to this device.
//                notification["include_player_ids"] = new List<string>() { userId };
//                // Example of scheduling a notification in the future.
//                //notification["send_after"] = System.DateTime.Now.ToUniversalTime().AddSeconds(30).ToString("U");

//                extraMessage = "Posting test notification now.";

//                OneSignal.PostNotification(notification, (responseSuccess) =>
//                {
//                    extraMessage = "Notification posted successful! Delayed by about 30 secounds to give you time to press the home button to see a notification vs an in-app alert.\n" + Json.Serialize(responseSuccess);
//                }, (responseFailure) =>
//                {
//                    extraMessage = "Notification failed to post:\n" + Json.Serialize(responseFailure);
//                });
//            }
//            else
//            {
//                extraMessage = "ERROR: Device is not registered.";
//            }
//        });
//    }
//}