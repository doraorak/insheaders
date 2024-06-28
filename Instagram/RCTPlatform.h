//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTPlatform_h
#define RCTPlatform_h
@import Foundation;

#include "NativePlatformConstantsIOSSpec-Protocol.h"
#include "RCTBridge.h"
#include "RCTBridgeModule-Protocol.h"
#include "RCTBundleManager.h"
#include "RCTCallableJSModules.h"
#include "RCTModuleRegistry.h"
#include "RCTViewRegistry.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface RCTPlatform : NSObject<NativePlatformConstantsIOSSpec, RCTBridgeModule>

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
+ (BOOL)requiresMainQueueSetup;

/* instance methods */
- (id)constantsToExport;
- (id)getConstants;
- (struct shared_ptr<facebook::react::TurboModule> { struct TurboModule * x0; struct __shared_weak_count * x1; })getTurboModule:(const void *)module;
@end

#endif /* RCTPlatform_h */
