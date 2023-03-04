#include <stdlib.h>
#include <string.h>
#import <UIKit/UIKit.h>

#define GetStringParam( _x_ ) ( _x_ != NULL ) ? [NSString stringWithUTF8String:_x_] : [NSString stringWithUTF8String:""]


#define AlertControllerStyleAlert 0
#define AlertControllerStyleActionSheet 1

#define AlertActionStyleDefault 0
#define AlertActionStyleCancel 1
#define AlertActionStyleDestructive 2


extern void UnitySendMessage(const char* _1, const char* _2, const char*  _3);

UIAlertController *alertController;
char *alertGameObjectHandler = NULL;

extern void _alertControllerHandler (const char*  gameObjectName) {
    if (alertGameObjectHandler) {
        free(alertGameObjectHandler);
    }
    alertGameObjectHandler = (char*)malloc(sizeof(char) * strlen(gameObjectName));
    
    strcpy(alertGameObjectHandler, gameObjectName);
}

// Create new UIAlertController
// Ensure that previous one is done (dissmised)
// style -
//  1 UIAlertControllerStyleAlert
//  2 UIAlertControllerStyleActionSheet
//
//  Return
//   0 on success
//   1 Error - previous UIAlertController is not dissmised
extern int _alertControllerWithTitle(const char* title, const char* message, const int style) {
    UIAlertControllerStyle alertStyle = UIAlertControllerStyleAlert;
    if (style == AlertControllerStyleActionSheet) {
        alertStyle = UIAlertControllerStyleActionSheet;
    }
    if (alertController != nil) {
        return 1;
    }
    alertController = [UIAlertController alertControllerWithTitle:GetStringParam(title) message:GetStringParam(message) preferredStyle:alertStyle];
    return 0;
}

extern int _alertControllerAddAction(const char* title, const int tag, const int style, const bool preferable) {
    if (alertController == nil) {
        return 2;
    }
    if (alertController.isBeingPresented) {
        return 3;
    }

    UIAlertActionStyle actionStyle = UIAlertActionStyleDefault;
    if (style == AlertActionStyleCancel) {
        actionStyle = UIAlertActionStyleCancel;
    }
    if (style == UIAlertActionStyleDestructive) {
        actionStyle = UIAlertActionStyleDestructive;
    }

    UIAlertAction* button = [UIAlertAction actionWithTitle: GetStringParam(title) style:actionStyle handler: ^(UIAlertAction * _Nonnull action) {
        UnitySendMessage(alertGameObjectHandler, "AlertIOS_OnButtonClick", [[NSString stringWithFormat:@"%d", tag] UTF8String]);

        alertController = nil;
        UnitySendMessage(alertGameObjectHandler, "AlertIOS_OnDismiss", "");
    }];

    [alertController addAction:button];
    if (preferable) {
        //preferredAction was introduced in iOS 9.0
        if ([alertController respondsToSelector:@selector(preferredAction)]) {
            alertController.preferredAction = button;
        }
    }
    return 0;
}

extern int _alertControllerPresent(bool animated) {
    if (alertController == nil) {
        return 2;
    }
    if (alertController.isBeingPresented) {
        return 3;
    }
    UIViewController *viewController = [[[UIApplication sharedApplication] keyWindow] rootViewController];

    [viewController presentViewController:alertController animated:animated completion:nil];
    return 0;
}


extern int _alertControllerDismiss(bool animated) {
    if (alertController == nil) {
        return 2;
    }

    [alertController dismissViewControllerAnimated:animated completion:^{
        UnitySendMessage(alertGameObjectHandler, "AlertIOS_OnDismiss", "");
    }];
    alertController = nil;
    
    return 0;
}
