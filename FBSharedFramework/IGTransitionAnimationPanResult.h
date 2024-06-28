//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTransitionAnimationPanResult_h
#define IGTransitionAnimationPanResult_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@interface IGTransitionAnimationPanResult : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  struct CGPoint { double x; double y; } _began_location;
  double _changed_fractionComplete;
  struct CGPoint { double x; double y; } _changed_translation;
  struct CGPoint { double x; double y; } _finished_velocity;
  struct CGPoint { double x; double y; } _cancelled_velocity;
}

/* class methods */
+ (id)beganWithLocation:(struct CGPoint { double x0; double x1; })location;
+ (id)cancelledWithVelocity:(struct CGPoint { double x0; double x1; })velocity;
+ (id)changedWithFractionComplete:(double)complete translation:(struct CGPoint { double x0; double x1; })translation;
+ (id)finishedWithVelocity:(struct CGPoint { double x0; double x1; })velocity;
@end

#endif /* IGTransitionAnimationPanResult_h */
