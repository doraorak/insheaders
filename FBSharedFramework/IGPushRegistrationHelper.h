//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPushRegistrationHelper_h
#define IGPushRegistrationHelper_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGAuthHeaderStore.h"
#include "IGMultipleAccountHandling-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@protocol IGPushNotificationRegisterAnnouncer;

@interface IGPushRegistrationHelper : NSObject {
  /* instance variables */
  NSObject<IGMultipleAccountHandling> *_multipleAccountHandler;
  IGAuthHeaderStore *_authHeaderStore;
  NSObject<IGUserLauncherSetProviding> *_launcherSetProvider;
  NSObject<IGPushNotificationRegisterAnnouncer> *_announcer;
  BOOL _needToUpdatePushToken;
}

@property (readonly, nonatomic) NSObject<IGAPIClient> *networker;

/* class methods */
+ (void)_registerForRemoteNotificationsAndShowSystemPushPermissionsAlertIfNecessaryWithModule:(id)module trigger:(unsigned long long)trigger analyticsLogger:(id)logger completion:(id /* block */)completion pushRegistrationAnnouncer:(id)announcer userPk:(id)pk userSession:(id)session launcherSetProvider:(id)provider shouldTriggerNdx:(BOOL)ndx;
+ (void)_registerForRemoteNotificationsWithCompletion:(id /* block */)completion trigger:(unsigned long long)trigger module:(id)module analyticsLogger:(id)logger pushRegistrationAnnouncer:(id)announcer userPk:(id)pk userSession:(id)session launcherSetProvider:(id)provider shouldTriggerNdx:(BOOL)ndx;
+ (void)_showPushPermissionDialogIfNeededWithForce:(BOOL)force trigger:(unsigned long long)trigger completion:(id /* block */)completion module:(id)module currentUserId:(id)id authorizationStatus:(long long)status analyticsLogger:(id)logger pushRegistrationAnnouncer:(id)announcer userPk:(id)pk userSession:(id)session launcherSetProvider:(id)provider shouldTriggerNdx:(BOOL)ndx;

/* instance methods */
- (id)initWithNetworker:(id)networker multipleAccountHandler:(id)handler authHeaderStore:(id)store launcherSetProvider:(id)provider pushRegistrationAnnouncer:(id)announcer;
- (void)_onBackground:(id)background;
@end

#endif /* IGPushRegistrationHelper_h */
