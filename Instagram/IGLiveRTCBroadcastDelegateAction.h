//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveRTCBroadcastDelegateAction_h
#define IGLiveRTCBroadcastDelegateAction_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSArray, NSError;

@interface IGLiveRTCBroadcastDelegateAction : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  BOOL _ended_endedRemotely;
  BOOL _ended_wasConnected;
  NSError *_ended_error;
  NSArray *_participantUpdates_updates;
}

/* class methods */
+ (id)connectedAndSwapped;
+ (id)endedWithEndedRemotely:(BOOL)remotely wasConnected:(BOOL)connected error:(id)error;
+ (id)participantUpdatesWithUpdates:(id)updates;

/* instance methods */
@end

#endif /* IGLiveRTCBroadcastDelegateAction_h */
