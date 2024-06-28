//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTPushNotificationManager_h
#define RCTPushNotificationManager_h
@import Foundation;

#include "RCTEventEmitter.h"
#include "NativePushNotificationManagerIOSSpec-Protocol.h"
#include "RCTBridge.h"
#include "RCTBundleManager.h"
#include "RCTCallableJSModules.h"
#include "RCTModuleRegistry.h"
#include "RCTViewRegistry.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface RCTPushNotificationManager : RCTEventEmitter<NativePushNotificationManagerIOSSpec>

@property (retain, nonatomic) NSMutableDictionary *remoteNotificationCallbacks;
@optional
@property (weak, nonatomic) RCTModuleRegistry *moduleRegistry;
@optional
@property (weak, nonatomic) RCTViewRegistry *viewRegistry_DEPRECATED;
@optional
@property (weak, nonatomic) RCTBundleManager *bundleManager;
@optional
@property (weak, nonatomic) RCTCallableJSModules *callableJSModules;
@optional
@property (readonly, weak, nonatomic) RCTBridge *bridge;
@optional
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)moduleName;
+ (void)load;
+ (void)didRegisterForRemoteNotificationsWithDeviceToken:(id)token;
+ (void)didFailToRegisterForRemoteNotificationsWithError:(id)error;
+ (void)didReceiveNotification:(id)notification;
+ (void)didReceiveRemoteNotification:(id)notification fetchCompletionHandler:(id /* block */)handler;
+ (void)setInitialNotification:(id)notification;
+ (const struct RCTMethodInfo *)__rct_export__3020;
+ (const struct RCTMethodInfo *)__rct_export__3171;
+ (const struct RCTMethodInfo *)__rct_export__3252;
+ (const struct RCTMethodInfo *)__rct_export__3333;
+ (const struct RCTMethodInfo *)__rct_export__3764;
+ (const struct RCTMethodInfo *)__rct_export__3815;
+ (const struct RCTMethodInfo *)__rct_export__4266;
+ (const struct RCTMethodInfo *)__rct_export__4407;
+ (const struct RCTMethodInfo *)__rct_export__4688;
+ (const struct RCTMethodInfo *)__rct_export__4819;
+ (const struct RCTMethodInfo *)__rct_export__51110;
+ (const struct RCTMethodInfo *)__rct_export__53411;
+ (const struct RCTMethodInfo *)__rct_export__54612;
+ (const struct RCTMethodInfo *)__rct_export__55213;
+ (const struct RCTMethodInfo *)__rct_export__55814;
+ (const struct RCTMethodInfo *)__rct_export__57115;

/* instance methods */
- (void)startObserving;
- (void)stopObserving;
- (id)supportedEvents;
- (void)invalidate;
- (void)dealloc;
- (void)handleLocalNotificationReceived:(id)received;
- (void)handleRemoteNotificationReceived:(id)received;
- (void)handleRemoteNotificationsRegistered:(id)registered;
- (void)handleRemoteNotificationRegistrationError:(id)error;
- (void)onFinishRemoteNotification:(id)notification fetchResult:(id)result;
- (void)setApplicationIconBadgeNumber:(double)number;
- (void)getApplicationIconBadgeNumber:(id /* block */)number;
- (void)requestPermissions:(struct SpecRequestPermissionsPermission *)permissions resolve:(id /* block */)resolve reject:(id /* block */)reject;
- (void)abandonPermissions;
- (void)checkPermissions:(id /* block */)permissions;
- (void)presentLocalNotification:(struct Notification *)notification;
- (void)scheduleLocalNotification:(struct Notification *)notification;
- (void)cancelAllLocalNotifications;
- (void)cancelLocalNotifications:(id)notifications;
- (void)getInitialNotification:(id /* block */)notification reject:(id /* block */)reject;
- (void)getScheduledLocalNotifications:(id /* block */)notifications;
- (void)removeAllDeliveredNotifications;
- (void)removeDeliveredNotifications:(id)notifications;
- (void)getDeliveredNotifications:(id /* block */)notifications;
- (void)getAuthorizationStatus:(id /* block */)status;
- (struct shared_ptr<facebook::react::TurboModule> { struct TurboModule * x0; struct __shared_weak_count * x1; })getTurboModule:(const void *)module;
@end

#endif /* RCTPushNotificationManager_h */
