//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDualSchedulerLogger_h
#define IGDualSchedulerLogger_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface IGDualSchedulerLogger : NSObject<NSObject> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)logDualRankingResults:(id)results iteratorQueue:(id)queue legacyQueue:(id)queue legacySnapshot:(id)snapshot serlizedGraph:(id)graph;
@end

#endif /* IGDualSchedulerLogger_h */
