//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoTimelineScrubbingGestureState_h
#define IGVideoTimelineScrubbingGestureState_h
@import Foundation;

#include "IGPanGestureRecognizer.h"

@interface IGVideoTimelineScrubbingGestureState : NSObject {
  /* instance variables */
  IGPanGestureRecognizer *_playheadPanGesture;
  double _panVelocity;
  double _horizontalTranslation;
  double _relativeTranslation;
  double _relativeX;
  double _playheadProgress;
  double _rangeStart;
  double _rangeDuration;
}

@property (readonly, nonatomic) double offset;

/* class methods */
+ (id)newWithGesture:(id)gesture panVelocity:(double)velocity horizontalTranslation:(double)translation relativeTranslation:(double)translation relativeX:(double)x offset:(double)offset;

/* instance methods */
@end

#endif /* IGVideoTimelineScrubbingGestureState_h */