//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserScopedObjects_IGMediaRecentMutationsTracker_h
#define IGUserScopedObjects_IGMediaRecentMutationsTracker_h
@import Foundation;

#include "IGLRUCache.h"

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IGUserScopedObjects (IGMediaRecentMutationsTracker)
/* instance methods */
- (id)recentMutationsTracker;
@end

#endif /* IGUserScopedObjects_IGMediaRecentMutationsTracker_h */
