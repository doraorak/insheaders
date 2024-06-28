//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPushCoordinator_h
#define IGPushCoordinator_h
@import Foundation;

#include "IGSilentPushManager.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@protocol IGPushNotificationHandling;

@interface IGPushCoordinator : NSObject {
  /* instance variables */
  long long _startupOrigin;
  NSObject<IGPushNotificationHandling> *_pushNotificationHandler;
  IGSilentPushManager *_silentPushManager;
  BOOL _hasReceivedNotification;
  BOOL _ignoreInteractedInBackgroundNotifications;
  BOOL _appBeingActiveOnce;
  NSObject<IGUserLauncherSetProviding> *_featureSetProvider;
}

/* instance methods */
- (id)initWithApplication:(id)application launchOptions:(id)options pushNotificationHandler:(id)handler featureSetProvider:(id)provider;
- (void)receivedNotification:(id)notification deviceSession:(id)session presentedUserSession:(id)session;
- (void)receivedNotificationResponse:(id)response deviceSession:(id)session presentedUserSession:(id)session;
- (void)handleNotification:(id)notification deviceSession:(id)session presentedUserSession:(id)session;
- (void)applicationDidBecomeActive:(id)active;
- (BOOL)_canHandleNotification:(id)notification;
- (void)_didReceiveRemoteNotification:(id)notification deviceSession:(id)session presentedUserSession:(id)session;
- (BOOL)_isBackgroundAccountDirectNotification:(id)notification;
- (BOOL)_isBroadcastChannelRepliesNotificationForUserInfo:(id)info;
- (BOOL)_isInstamadilloNotificationForUserInfo:(id)info;
- (void)_handleNotification:(id)notification presentedUserSession:(id)session;
- (void)_handleUserSessionOperationResponse:(id)response presentedUserSession:(id)session didSwitchAccount:(BOOL)account;
- (void)_handleUNNotificationResponse:(id)response deviceSession:(id)session presentedUserSession:(id)session;
- (void)_logPushNotificationDeliveryEventWithUserInfo:(id)info userSession:(id)session isE2EE:(BOOL)ee;
- (void)_logPushNotificationUserActionWithResponse:(id)response userSession:(id)session isBGAccount:(BOOL)bgaccount;
- (void)_handleForcedLogoutLoginPush:(id)push presentedUserSession:(id)session deviceSession:(id)session appNavigationHandler:(id)handler completion:(id /* block */)completion;
@end

#endif /* IGPushCoordinator_h */