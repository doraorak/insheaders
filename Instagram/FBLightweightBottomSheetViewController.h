//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBLightweightBottomSheetViewController_h
#define FBLightweightBottomSheetViewController_h
@import Foundation;

#include "UIViewController.h"
#include "FBLightweightBottomSheetOptions.h"
#include "FBLightweightBottomSheetTransitionDelegate.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIScrollView, UIView, UIViewController;

@interface FBLightweightBottomSheetViewController : UIViewController<UIGestureRecognizerDelegate, UIScrollViewDelegate> {
  /* instance variables */
  UIView *_dimmedBackground;
  UIView *_containerView;
  UIScrollView *_scrollContainerView;
  UIScrollView *_internalScrollView;
  UIViewController *_contentViewController;
  UIView *_dragHandle;
  UIView *_custombackgroundView;
  UIView *_backgroundView;
  double _backgroundViewOriginalCornerRadius;
  double _backgroundViewIsFullScreen;
  double _backgroundScale;
  double _backgroundYTranslation;
  UIView *_backgroundOverlayView;
  BOOL _hasUnderlay;
  UIView *_overDraggedCompensationView;
  BOOL _disableScrollView;
  double _contentHeight;
  FBLightweightBottomSheetOptions *_options;
  long long _previousStatusBarStyle;
  BOOL _didChangeStatusBarStyle;
  BOOL _didUnhideStatusBar;
  BOOL _draggingContentScrollView;
  UIPanGestureRecognizer *_panGestureRecognizer;
  unsigned long long _heightUpdatesCount;
  FBLightweightBottomSheetTransitionDelegate *_bottomSheetTransitionDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContentViewController:(id)controller options:(id)options;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (id)analyticsPresentedViewController;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)present:(id /* block */)present;
- (long long)preferredStatusBarStyle;
- (BOOL)modalPresentationCapturesStatusBarAppearance;
- (void)_dismissFromTappedBackground;
- (void)_dismiss;
- (void)dismiss:(id /* block */)dismiss;
- (id)containerView;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)_dragGesture:(id)gesture;
- (void)scrollViewDidScroll:(id)scroll;
- (double)contentHeight;
- (BOOL)accessibilityPerformEscape;
@end

#endif /* FBLightweightBottomSheetViewController_h */
