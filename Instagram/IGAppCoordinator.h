//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAppCoordinator_h
#define IGAppCoordinator_h
@import Foundation;

#include "IGDirectSyncNotificationCoordinator.h"
#include "IGPushKitServiceInterface-Protocol.h"
#include "IGSessionManagingListener-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "UNUserNotificationCenterDelegate-Protocol.h"

@class IGDeviceSession, NSString;
@protocol IGSessionManaging, UIWindow<IGApplicationWindow;

@interface IGAppCoordinator : NSObject<IGSessionManagingListener, UNUserNotificationCenterDelegate> {
  /* instance variables */
  NSObject<IGSessionManaging> *_sessionManager;
  BOOL _foregroundServicesExecuted;
  NSObject<IGPushKitServiceInterface> *_pushKitService;
  BOOL _pushKitEnabled;
  IGDirectSyncNotificationCoordinator *_syncNotificationCoordinator;
  IGDeviceSession *_deviceSession;
  BOOL _shouldSkipDidReceiveNotificationPublishOnce;
  NSObject<IGUserLauncherSetProviding> *_presentedUserFeatureSets;
  BOOL _shouldNotifyWillEnterForegroundAnnouncer;
  BOOL _runViewServicesBeforeForegroundServices;
  BOOL _shouldUseFOATokenRegistrationKit;
}

@property (readonly, nonatomic) UIWindow<IGApplicationWindow> *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPushKitEnabled:(BOOL)enabled;
- (void)loginSuccessfulWithUserSession:(id)session previousUser:(id)user loginDestination:(id)destination authLoginType:(long long)type entryPoint:(long long)point;
- (void)willLogoutActiveUserFromEntryPoint:(long long)point;
- (void)didLogoutAllUsersWithLastUserPK:(id)pk fromEntryPoint:(long long)point;
- (void)application:(id)application didFinishLaunchingWithOptions:(id)options sessionManager:(id)manager initialUserSession:(id)session deviceSession:(id)session;
- (void)applicationDidBecomeActive:(id)active;
- (void)applicationWillResignActive:(id)active;
- (void)applicationDidEnterBackground:(id)background;
- (void)applicationWillEnterForeground:(id)foreground;
- (void)applicationWillTerminate:(id)terminate;
- (BOOL)application:(id)application openURL:(id)url options:(id)options;
- (BOOL)application:(id)application continueUserActivity:(id)activity restorationHandler:(id /* block */)handler;
- (void)application:(id)application performActionForShortcutItem:(id)item completionHandler:(id /* block */)handler;
- (void)applicationDidReceiveMemoryWarning:(id)warning;
- (void)application:(id)application handleEventsForBackgroundURLSession:(id)urlsession completion:(id /* block */)completion;
- (unsigned long long)application:(id)application supportedInterfaceOrientationsForWindow:(id)window;
- (long long)_getAccountSwitchEntryPointForLogoutEntryPoint:(long long)point;
- (void)_publishDidReceiveNotification:(id)notification asResponse:(BOOL)response;
- (void)applicationDidRegisterForRemoteNotificationsWithDeviceToken:(id)token error:(id)error;
- (void)application:(id)application didReceiveRemoteNotification:(id)notification channel:(id)channel fetchCompletionHandler:(id /* block */)handler;
- (void)application:(id)application performFetchWithCompletionHandler:(id /* block */)handler;
- (void)userNotificationCenter:(id)center openSettingsForNotification:(id)notification;
- (void)userNotificationCenter:(id)center didReceiveNotificationResponse:(id)response withCompletionHandler:(id /* block */)handler;
- (void)userNotificationCenter:(id)center willPresentNotification:(id)notification withCompletionHandler:(id /* block */)handler;
- (void)_applicationWillEnterForeground;
- (void)_notifyWillEnterForegroundAnnouncerIfNeeded;
@end

#endif /* IGAppCoordinator_h */