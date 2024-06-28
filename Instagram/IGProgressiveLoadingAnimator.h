//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProgressiveLoadingAnimator_h
#define IGProgressiveLoadingAnimator_h
@import Foundation;

@interface IGProgressiveLoadingAnimator : NSObject {
  /* instance variables */
  struct CGPoint { double x; double y; } _c1;
  struct CGPoint { double x; double y; } _c2;
  double _startTime;
  double _previousAnimatedProgressDelta;
  id /* block */ _updateBlock;
  BOOL _isInCompletion;
  double _currentProgressValue;
}

/* instance methods */
- (id)initWithUpdateBlock:(id /* block */)block;
- (void)reset;
@end

#endif /* IGProgressiveLoadingAnimator_h */
