//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MDCSchedulerSubscriptionPipe_h
#define MDCSchedulerSubscriptionPipe_h
@import Foundation;

#include "MDCDataSubscriptionPipe.h"
#include "IGSubscriptionToken-Protocol.h"
#include "MDCDataSubscriptionPipe.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface MDCSchedulerSubscriptionPipe : MDCDataSubscriptionPipe<NSObject> {
  /* instance variables */
  MDCDataSubscriptionPipe *_subscriptionPipe;
  NSObject<IGSubscriptionToken> *_subscriptionToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSubscriptionPipe:(id)pipe queue:(id)queue;
- (void)dataSubscriptionPipeWillAddFirstSubscriber;
- (void)dataSubscriptionPipeDidRemoveLastSubscriber;
- (void)didReceiveValue:(id)value fromSubscriptionPipe:(id)pipe;
- (void)didReceiveError:(id)error fromSubscriptionPipe:(id)pipe;
- (id)parentInputPipes;
- (id)shortPipeDebugDescription;
@end

#endif /* MDCSchedulerSubscriptionPipe_h */
