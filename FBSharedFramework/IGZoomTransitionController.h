//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGZoomTransitionController_h
#define IGZoomTransitionController_h
@import Foundation;

#include "IGGestureCoordinatingScrollView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"
#include "UIViewControllerAnimatedTransitioning-Protocol.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, NSValue, UIView, UIViewController;
@protocol IGInteractiveDismissTransitionControllerDelegate;

@interface IGZoomTransitionController : NSObject<UIViewControllerAnimatedTransitioning, UIScrollViewDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate> {
  /* instance variables */
  UIView *_presentingViewControllerSnapshot;
  UIView *_dimmingView;
  IGGestureCoordinatingScrollView *_scrollView;
  NSValue *_customAnchorPoint;
  BOOL _transitionFixEnabled;
}

@property (nonatomic) BOOL disableSwipeToDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIView *presentationSource;
@property (weak, nonatomic) NSObject<IGInteractiveDismissTransitionControllerDelegate> *delegate;
@property (readonly, weak, nonatomic) UIViewController *presentedViewController;

/* instance methods */
- (id)initWithLauncherSet:(id)set;
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (BOOL)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewWillBeginDecelerating:(id)decelerating;
- (BOOL)isSwipeToDismissDisabled;
@end

#endif /* IGZoomTransitionController_h */