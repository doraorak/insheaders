//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQPTurnOnPushDirectOnlyActionHandler_h
#define IGQPTurnOnPushDirectOnlyActionHandler_h
@import Foundation;

#include "IGApplicationWillEnterForegroundCriticalEventsListener-Protocol.h"
#include "IGQPActionHandlerProtocol-Protocol.h"
#include "IGTopMostViewControllerProvider-Protocol.h"

@class IGNotificationSettingsAPIClient, IGUserSession, NSString;

@interface IGQPTurnOnPushDirectOnlyActionHandler : NSObject<IGQPActionHandlerProtocol, IGApplicationWillEnterForegroundCriticalEventsListener> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGTopMostViewControllerProvider> *_topMostViewControllerProvider;
  IGNotificationSettingsAPIClient *_pushAPIClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session pushAPIClient:(id)apiclient topMostViewControllerProvider:(id)provider;
- (void)handleActionURL:(id)url successHandler:(id /* block */)handler failureHandler:(id /* block */)handler;
- (void)applicationWillEnterForegroundListener;
@end

#endif /* IGQPTurnOnPushDirectOnlyActionHandler_h */