//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTBridge_RCTUIManager_h
#define RCTBridge_RCTUIManager_h
@import Foundation;

#include "RCTBridge.h"
#include "RCTBridgeModule-Protocol.h"
#include "RCTBundleManager.h"
#include "RCTCallableJSModules.h"
#include "RCTInvalidating-Protocol.h"
#include "RCTLayoutAnimationGroup.h"
#include "RCTModuleRegistry.h"
#include "RCTUIManagerObserverCoordinator.h"
#include "RCTViewRegistry.h"

@class NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface RCTBridge (RCTUIManager)
/* instance methods */
- (id)uiManager;
@end

#endif /* RCTBridge_RCTUIManager_h */