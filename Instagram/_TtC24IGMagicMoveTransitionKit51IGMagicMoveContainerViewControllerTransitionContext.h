//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC24IGMagicMoveTransitionKit51IGMagicMoveContainerViewControllerTransitionContext_h
#define _TtC24IGMagicMoveTransitionKit51IGMagicMoveContainerViewControllerTransitionContext_h
@import Foundation;

#include "UIViewControllerContextTransitioning-Protocol.h"

@class UIView;

@interface _TtC24IGMagicMoveTransitionKit51IGMagicMoveContainerViewControllerTransitionContext : NSObject<UIViewControllerContextTransitioning> { // (Swift)
  /* instance variables */
   containerViewController;
   fromViewController;
   toViewController;
   completion;
}

@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) BOOL animated;
@property (nonatomic, readonly) BOOL interactive;
@property (nonatomic, readonly) BOOL transitionWasCancelled;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } targetTransform;

/* instance methods */
- (BOOL)isAnimated;
- (BOOL)isInteractive;
- (id)viewControllerForKey:(id)key;
- (id)viewForKey:(id)key;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForViewController:(id)controller;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForViewController:(id)controller;
- (void)updateInteractiveTransition:(double)transition;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)pauseInteractiveTransition;
- (void)completeTransition:(BOOL)transition;
- (id)init;
@end

#endif /* _TtC24IGMagicMoveTransitionKit51IGMagicMoveContainerViewControllerTransitionContext_h */