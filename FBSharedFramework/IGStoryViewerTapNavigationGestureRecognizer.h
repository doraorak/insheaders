//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryViewerTapNavigationGestureRecognizer_h
#define IGStoryViewerTapNavigationGestureRecognizer_h
@import Foundation;

#include "UIGestureRecognizer.h"

@class NSTimer;

@interface IGStoryViewerTapNavigationGestureRecognizer : UIGestureRecognizer {
  /* instance variables */
  struct CGPoint { double x; double y; } _referencePoint;
  NSTimer *_maximumTapDurationTimer;
  double _maximumTapDuration;
  double _maximumAllowableMovement;
}

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (void)reset;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)_maximumTapDurationTimerDidFire:(id)fire;
@end

#endif /* IGStoryViewerTapNavigationGestureRecognizer_h */
