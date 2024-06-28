//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTFileRequestHandler_h
#define RCTFileRequestHandler_h
@import Foundation;

#include "RCTBridge.h"
#include "RCTBundleManager.h"
#include "RCTCallableJSModules.h"
#include "RCTInvalidating-Protocol.h"
#include "RCTModuleRegistry.h"
#include "RCTTurboModule-Protocol.h"
#include "RCTURLRequestHandler-Protocol.h"
#include "RCTViewRegistry.h"

@class NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface RCTFileRequestHandler : NSObject<RCTTurboModule, RCTURLRequestHandler, RCTInvalidating> {
  /* instance variables */
  NSOperationQueue *_fileQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
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

/* class methods */
+ (id)moduleName;
+ (void)load;

/* instance methods */
- (void)invalidate;
- (BOOL)canHandleRequest:(id)request;
- (id)sendRequest:(id)request withDelegate:(id)delegate;
- (void)cancelRequest:(id)request;
- (struct shared_ptr<facebook::react::TurboModule> { struct TurboModule * x0; struct __shared_weak_count * x1; })getTurboModule:(const void *)module;
@end

#endif /* RCTFileRequestHandler_h */
