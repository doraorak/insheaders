//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialSlideAndZoomTransitionController_h
#define IGSundialSlideAndZoomTransitionController_h
@import Foundation;

#include "UIViewController.h"
#include "IGActionableConfirmationToastPresenting-Protocol.h"
#include "IGDirectionalPanGestureRecognizer.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIViewControllerAnimatedTransitioning-Protocol.h"
#include "UIViewControllerContextTransitioning-Protocol.h"
#include "UIViewControllerInteractiveTransitioning-Protocol.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSDictionary, NSMutableSet, NSString, UIImpactFeedbackGenerator, UIPanGestureRecognizer, UIView, UIViewController;
@protocol IGSundialSlideAndZoomTransitionControllerDelegate, UIViewController<IGGestureHandler;

@interface IGSundialSlideAndZoomTransitionController : UIViewController<UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIGestureRecognizerDelegate, IGActionableConfirmationToastPresenting> {
  /* instance variables */
  UIView *_dimmingView;
  UIPanGestureRecognizer *_presentingPanGesture;
  IGDirectionalPanGestureRecognizer *_dismissingPanGesture;
  NSObject<UIViewControllerContextTransitioning> *_transitionContext;
  UIImpactFeedbackGenerator *_impactGenerator;
  NSMutableSet *_presentationProgressUpdateBlocks;
  UIViewController *_lastPresentingVC;
  BOOL _viewDisappeared;
  double _finalTopOffset;
  double _finalZoomScale;
  unsigned long long _transitionState;
  double _presentingViewControllerDistanceFromTop;
}

@property (weak, nonatomic) NSObject<IGSundialSlideAndZoomTransitionControllerDelegate> *delegate;
@property (readonly, nonatomic) UIViewController<IGGestureHandler> *contentViewController;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@optional
@property (readonly, nonatomic) double completionSpeed;
@optional
@property (readonly, nonatomic) long long completionCurve;
@optional
@property (readonly, nonatomic) BOOL wantsInteractiveStart;

/* instance methods */
- (id)initWithContentViewController:(id)controller presentingPanGesture:(id)gesture;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (BOOL)modalPresentationCapturesStatusBarAppearance;
- (id)transitioningDelegate;
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (id)interactionControllerForPresentation:(id)presentation;
- (id)interactionControllerForDismissal:(id)dismissal;
- (long long)modalPresentationStyle;
- (id)presentationControllerForPresentedViewController:(id)controller presentingViewController:(id)controller sourceViewController:(id)controller;
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (void)startInteractiveTransition:(id)transition;
- (void)animationEnded:(BOOL)ended;
- (BOOL)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (void)_handlePan:(id)pan;
- (void)sundialSlideAndZoomPresentationControllerDidDismiss:(id)dismiss;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (long long)preferredTabBarBehavior;
- (double)actionableConfirmationToastBottomPadding;
- (double)actionableConfirmationToastTopPadding;
@end

#endif /* IGSundialSlideAndZoomTransitionController_h */