//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC19IGVideoPlayerWarmup26IGVideoPlayerWarmupManager_h
#define _TtC19IGVideoPlayerWarmup26IGVideoPlayerWarmupManager_h
@import Foundation;

#include "IGUserLauncherSetProviding-Protocol.h"
#include "_TtP19IGVideoPlayerWarmup27IGVideoPlayerWarmupManaging_-Protocol.h"

@interface _TtC19IGVideoPlayerWarmup26IGVideoPlayerWarmupManager : NSObject<_TtP19IGVideoPlayerWarmup27IGVideoPlayerWarmupManaging_> { // (Swift)
  /* instance variables */
   $__lazy_storage_$_operationQueue;
   playerToWarmupMap;
   concurrencyBumpingOperations;
}

@property (nonatomic, readonly) _TtC19IGVideoPlayerWarmup32IGVideoPlayerWarmupManagerConfig *config;
@property (nonatomic, readonly) NSObject<IGUserLauncherSetProviding> *launcherSet;
@property (nonatomic) BOOL isSuspended;

/* instance methods */
- (id)initWithConfig:(id)config launcherSet:(id)set;
- (id)makeWarmupForPlayer:(id)player request:(id)request;
- (void)didReceiveMemoryWarning;
- (id)init;
@end

#endif /* _TtC19IGVideoPlayerWarmup26IGVideoPlayerWarmupManager_h */
