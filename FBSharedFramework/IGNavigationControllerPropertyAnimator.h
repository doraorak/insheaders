//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNavigationControllerPropertyAnimator_h
#define IGNavigationControllerPropertyAnimator_h
@import Foundation;

#include "UIViewPropertyAnimator.h"

@class NSMutableArray;

@interface IGNavigationControllerPropertyAnimator : UIViewPropertyAnimator {
  /* instance variables */
  BOOL _isReady;
  NSMutableArray *_queuedUpdates;
}

/* instance methods */
- (void)startAnimation;
- (void)addAnimations:(id /* block */)animations;
- (void)addAnimations:(id /* block */)animations delayFactor:(double)factor;
- (void)addCompletion:(id /* block */)completion;
- (void)setFractionComplete:(double)complete;
@end

#endif /* IGNavigationControllerPropertyAnimator_h */