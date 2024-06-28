//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRTCVideoCallParticipantVideoInfo_h
#define IGRTCVideoCallParticipantVideoInfo_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class UIView;

@interface IGRTCVideoCallParticipantVideoInfo : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  UIView *_stalled_view;
  UIView *_running_view;
}

/* class methods */
+ (id)disabled;
+ (id)runningWithView:(id)view;
+ (id)stalledWithView:(id)view;

/* instance methods */
@end

#endif /* IGRTCVideoCallParticipantVideoInfo_h */