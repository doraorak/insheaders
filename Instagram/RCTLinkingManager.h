//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTLinkingManager_h
#define RCTLinkingManager_h
@import Foundation;

#include "RCTEventEmitter.h"
#include "NativeLinkingManagerSpec-Protocol.h"
#include "RCTBridge.h"
#include "RCTBundleManager.h"
#include "RCTCallableJSModules.h"
#include "RCTModuleRegistry.h"
#include "RCTViewRegistry.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface RCTLinkingManager : RCTEventEmitter<NativeLinkingManagerSpec>

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
+ (BOOL)application:(id)application openURL:(id)url options:(id)options;
+ (BOOL)application:(id)application openURL:(id)url sourceApplication:(id)application annotation:(id)annotation;
+ (BOOL)application:(id)application continueUserActivity:(id)activity restorationHandler:(id /* block */)handler;
+ (const struct RCTMethodInfo *)__rct_export__920;
+ (const struct RCTMethodInfo *)__rct_export__1191;
+ (const struct RCTMethodInfo *)__rct_export__1542;
+ (const struct RCTMethodInfo *)__rct_export__1693;
+ (const struct RCTMethodInfo *)__rct_export__1874;

/* instance methods */
- (void)startObserving;
- (void)stopObserving;
- (id)supportedEvents;
- (void)handleOpenURLNotification:(id)urlnotification;
- (void)openURL:(id)url resolve:(id /* block */)resolve reject:(id /* block */)reject;
- (void)canOpenURL:(id)url resolve:(id /* block */)resolve reject:(id /* block */)reject;
- (void)getInitialURL:(id /* block */)url reject:(id /* block */)reject;
- (void)openSettings:(id /* block */)settings reject:(id /* block */)reject;
- (void)sendIntent:(id)intent extras:(id)extras resolve:(id /* block */)resolve reject:(id /* block */)reject;
- (struct shared_ptr<facebook::react::TurboModule> { struct TurboModule * x0; struct __shared_weak_count * x1; })getTurboModule:(const void *)module;
@end

#endif /* RCTLinkingManager_h */