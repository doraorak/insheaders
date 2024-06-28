//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPrivacyCheckThreadViewSubscriber_h
#define IGDirectPrivacyCheckThreadViewSubscriber_h
@import Foundation;

#include "IGSubscriptionToken-Protocol.h"

@class MDCDataSubscriptionPipe;

@interface IGDirectPrivacyCheckThreadViewSubscriber : NSObject {
  /* instance variables */
  MDCDataSubscriptionPipe *_threadViewModelInputPipe;
  NSObject<IGSubscriptionToken> *_subscriptionToken;
}

/* instance methods */
- (id)initWithPipe:(id)pipe;
- (unsigned long long)subscribe;
- (void)unsubscribe;
@end

#endif /* IGDirectPrivacyCheckThreadViewSubscriber_h */