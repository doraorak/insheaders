//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadShhModeReplayMessageInboxServiceListener_h
#define IGDirectThreadShhModeReplayMessageInboxServiceListener_h
@import Foundation;

#include "IGScopeEnding-Protocol.h"
#include "IGSubscriptionToken-Protocol.h"

@class IGDirectInboxSubscriptionService, NSString;
@protocol IGDirectThreadShhModeReplayMessageInboxServiceListenerDelegate;

@interface IGDirectThreadShhModeReplayMessageInboxServiceListener : NSObject<IGScopeEnding> {
  /* instance variables */
  IGDirectInboxSubscriptionService *_inboxSubscriptionService;
  NSObject<IGSubscriptionToken> *_inboxSubscriptionToken;
}

@property (weak, nonatomic) NSObject<IGDirectThreadShhModeReplayMessageInboxServiceListenerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSubscriptionService:(id)service;
- (void)startListening;
- (void)stopListening;
- (void)scopeWillEnd;
@end

#endif /* IGDirectThreadShhModeReplayMessageInboxServiceListener_h */