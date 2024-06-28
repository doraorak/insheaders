//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallCallKitState_h
#define IGVideoCallCallKitState_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@interface IGVideoCallCallKitState : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  BOOL _ringing_incoming;
  BOOL _connecting_incoming;
  BOOL _awaitingAudioSession_incoming;
  BOOL _connected_incoming;
}

/* class methods */
+ (id)awaitingAudioSessionWithIncoming:(BOOL)incoming;
+ (id)connectedWithIncoming:(BOOL)incoming;
+ (id)connectingWithIncoming:(BOOL)incoming;
+ (id)idle;
+ (id)ringingWithIncoming:(BOOL)incoming;
@end

#endif /* IGVideoCallCallKitState_h */
