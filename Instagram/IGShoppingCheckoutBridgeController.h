//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingCheckoutBridgeController_h
#define IGShoppingCheckoutBridgeController_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGUserSession, NSString;
@protocol IGShoppingCheckoutBridgeControllerDelegate;

@interface IGShoppingCheckoutBridgeController : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_analyticsModule;
  long long _prefetchAttemptCount;
}

@property (weak, nonatomic) NSObject<IGShoppingCheckoutBridgeControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module;
- (void)didDismissAndShouldAddToBag:(BOOL)bag;
- (void)refreshPDP;
@end

#endif /* IGShoppingCheckoutBridgeController_h */