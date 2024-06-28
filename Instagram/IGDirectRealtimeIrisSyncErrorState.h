//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRealtimeIrisSyncErrorState_h
#define IGDirectRealtimeIrisSyncErrorState_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSNumber;

@interface IGDirectRealtimeIrisSyncErrorState : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  BOOL _awaitingDeltas_lastSnapshotWasManualFetch;
  NSNumber *_awaitingDeltas_latestServerSequenceId;
}

/* class methods */
+ (id)awaitingDeltasWithLastSnapshotWasManualFetch:(BOOL)fetch latestServerSequenceId:(id)id;
+ (id)canNotSubscribeToIris;
+ (id)none;

/* instance methods */
@end

#endif /* IGDirectRealtimeIrisSyncErrorState_h */