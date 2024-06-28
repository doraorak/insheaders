//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedPlaybackStrategy_h
#define IGFeedPlaybackStrategy_h
@import Foundation;

#include "IGPlaybackCoordinatorStrategy-Protocol.h"

@interface IGFeedPlaybackStrategy : NSObject<IGPlaybackCoordinatorStrategy> { // (Swift)
  /* instance variables */
   isAutoplayEnabled;
   playbackReservationKey;
}

@property (nonatomic, readonly) BOOL requiresUpdatesOnVisibilityUnchanged;

/* class methods */
+ (id)prioritizedPlaybackContextFor:(id)for;
+ (id)prioritizedPauseContextFor:(id)for;
+ (id)reservedPlaybackContextFor:(id)for;

/* instance methods */
- (id)init;
- (id)resolve:(id)resolve withContext:(id)context;
- (void)voiceoverStatusDidChange:(id)change;
@end

#endif /* IGFeedPlaybackStrategy_h */