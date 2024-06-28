//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBReactPerformanceLogger_h
#define FBReactPerformanceLogger_h
@import Foundation;

#include "NativeReactPerformanceLoggerSpec-Protocol.h"
#include "RCTBridge.h"
#include "RCTBundleManager.h"
#include "RCTCallableJSModules.h"
#include "RCTModuleRegistry.h"
#include "RCTViewRegistry.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface FBReactPerformanceLogger : NSObject<NativeReactPerformanceLoggerSpec>

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
+ (const struct RCTMethodInfo *)__rct_export__200;
+ (const struct RCTMethodInfo *)__rct_export__281;

/* instance methods */
- (void)logEvents:(id)events;
- (void)finish:(id)finish;
- (struct shared_ptr<facebook::react::TurboModule> { struct TurboModule * x0; struct __shared_weak_count * x1; })getTurboModule:(const void *)module;
@end

#endif /* FBReactPerformanceLogger_h */