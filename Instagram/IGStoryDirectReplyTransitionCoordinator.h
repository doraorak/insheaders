//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryDirectReplyTransitionCoordinator_h
#define IGStoryDirectReplyTransitionCoordinator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString;

@interface IGStoryDirectReplyTransitionCoordinator : NSObject<UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {
  /* instance variables */
  id /* block */ _finalAnimationsFinishedHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFinalAnimationFinishedHandler:(id /* block */)handler;
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (id)animationControllerForDismissedController:(id)controller;
@end

#endif /* IGStoryDirectReplyTransitionCoordinator_h */
