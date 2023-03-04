#import <StoreKit/StoreKit.h>
#import <Availability.h>

#ifdef __IPHONE_10_3
extern bool _reviewControllerIsAvailable() {
	//SKStoreReviewController is available in iOS 10.3 and later.
	return [SKStoreReviewController class] ? true : false;
}

extern void _reviewControllerShow() {
	if( _reviewControllerIsAvailable() ) {
		[SKStoreReviewController requestReview] ;
	}
}
#else 

extern bool _reviewControllerIsAvailable() {
	return false;
}

extern void _reviewControllerShow() {

}

#endif
