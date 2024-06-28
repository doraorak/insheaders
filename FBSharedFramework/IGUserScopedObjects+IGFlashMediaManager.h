//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserScopedObjects_IGFlashMediaManager_h
#define IGUserScopedObjects_IGFlashMediaManager_h
@import Foundation;

#include "FBTimer.h"
#include "IGAPIClient-Protocol.h"
#include "IGObjectCacheConsolidator.h"
#include "NSObject-Protocol.h"

@class NSDate, NSMapTable, NSString;
@protocol IGScheduler><IGSynchronousScheduler, OS_dispatch_queue;

@interface IGUserScopedObjects (IGFlashMediaManager)
/* instance methods */
- (id)flashMediaManager;
@end

#endif /* IGUserScopedObjects_IGFlashMediaManager_h */