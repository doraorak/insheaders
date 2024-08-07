//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BillingWizardNativeWrapperModule_h
#define BillingWizardNativeWrapperModule_h
@import Foundation;

#include "NativeBillingWizardNativeWrapperModuleSpec-Protocol.h"
#include "RCTBridge.h"
#include "RCTBundleManager.h"
#include "RCTCallableJSModules.h"
#include "RCTIGUserSessionModule-Protocol.h"
#include "RCTModuleRegistry.h"
#include "RCTViewRegistry.h"

@class IGUserSession, NSString;
@protocol OS_dispatch_queue;

@interface BillingWizardNativeWrapperModule : NSObject<RCTIGUserSessionModule, NativeBillingWizardNativeWrapperModuleSpec>

@property (weak, nonatomic) IGUserSession *userSession;
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
+ (const struct RCTMethodInfo *)__rct_export__360;
+ (const struct RCTMethodInfo *)__rct_export__581;

/* instance methods */
- (void)openNativeWrapper:(id)wrapper accessToken:(id)token;
- (id)isNativeWrapperEnabledForBillingHub:(id)hub;
- (struct shared_ptr<facebook::react::TurboModule> { struct TurboModule * x0; struct __shared_weak_count * x1; })getTurboModule:(const void *)module;
@end

#endif /* BillingWizardNativeWrapperModule_h */
