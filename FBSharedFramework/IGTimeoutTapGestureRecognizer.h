//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTimeoutTapGestureRecognizer_h
#define IGTimeoutTapGestureRecognizer_h
@import Foundation;

#include "UITapGestureRecognizer.h"
#include "FBTimer.h"

@interface IGTimeoutTapGestureRecognizer : UITapGestureRecognizer {
  /* instance variables */
  struct CGPoint { double x; double y; } _referencePoint;
  FBTimer *_timeoutTimer;
  double _tapTimeout;
  double _maximumAllowableMovement;
}

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (void)reset;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
@end

#endif /* IGTimeoutTapGestureRecognizer_h */
