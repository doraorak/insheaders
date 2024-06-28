//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBottomSheetViewController_h
#define IGBottomSheetViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGActionableConfirmationToastPresenting-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIViewControllerAnimatedTransitioning-Protocol.h"
#include "UIViewControllerContextTransitioning-Protocol.h"
#include "UIViewControllerInteractiveTransitioning-Protocol.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class IGDirectionalPanGestureRecognizer, NSMutableSet, NSString, UIColor, UIPanGestureRecognizer, UIView;
@protocol IGBottomSheetViewControllerDelegate, UIViewController<IGGestureHandler;

@interface IGBottomSheetViewController : UIViewController<UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, IGActionableConfirmationToastPresenting> {
  /* instance variables */
  UIView *_dimmingView;
  UIView *_modalSheetView;
  UIPanGestureRecognizer *_presentingPanGesture;
  IGDirectionalPanGestureRecognizer *_dismissingPanGesture;
  NSObject<UIViewControllerContextTransitioning> *_transitionContext;
  NSMutableSet *_presentationProgressUpdateBlocks;
  BOOL _obscuresPresentingViewController;
  BOOL _allowSwipeToDismiss;
  BOOL _allowTapToDismiss;
  double _pushBackScale;
  UIColor *_dimmingColor;
  double _springSpeed;
  double _springBounciness;
  double _offsetFromTopOfScreenWhenFullyPresented;
  double _sheetOffset;
  struct CGPoint { double x; double y; } _pushBackAnchorPoint;
}

@property (nonatomic) unsigned long long presentationState;
@property (readonly, nonatomic) UIViewController<IGGestureHandler> *contentViewController;
@property (weak, nonatomic) NSObject<IGBottomSheetViewControllerDelegate> *delegate;
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
- (id)initWithContentViewController:(id)controller;
- (id)initWithContentViewController:(id)controller presentingPanGesture:(id)gesture;
- (void)loadView;
- (void)viewDidLoad;
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
- (void)viewDidLayoutSubviews;
- (BOOL)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (void)_didPan:(id)pan;
- (void)_didTapToDismiss:(id)dismiss;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (long long)preferredTabBarBehavior;
- (double)actionableConfirmationToastBottomPadding;
- (double)actionableConfirmationToastTopPadding;
@end

#endif /* IGBottomSheetViewController_h */