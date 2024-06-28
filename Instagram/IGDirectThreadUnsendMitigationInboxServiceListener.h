//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadUnsendMitigationInboxServiceListener_h
#define IGDirectThreadUnsendMitigationInboxServiceListener_h
@import Foundation;

#include "IGScopeEnding-Protocol.h"
#include "IGSubscriptionToken-Protocol.h"

@class IGDirectInboxSubscriptionService, IGDirectUIThreadSet, IGUser, IGUserDefaults, NSString;
@protocol IGDirectThreadUnsendMitigationInboxServiceListenerDelegate;

@interface IGDirectThreadUnsendMitigationInboxServiceListener : NSObject<IGScopeEnding> {
  /* instance variables */
  IGDirectInboxSubscriptionService *_inboxSubscriptionService;
  IGUser *_currentUser;
  IGUserDefaults *_sessionUserDefaults;
  NSObject<IGSubscriptionToken> *_inboxSubscriptionToken;
  IGDirectUIThreadSet *_threadSet;
}

@property (weak, nonatomic) NSObject<IGDirectThreadUnsendMitigationInboxServiceListenerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSubscriptionService:(id)service currentUser:(id)user sessionUserDefaults:(id)defaults;
- (void)startListening;
- (void)stopListening;
- (void)scopeWillEnd;
@end

#endif /* IGDirectThreadUnsendMitigationInboxServiceListener_h */