//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPreviewViewController_h
#define IGPreviewViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGActionGroupView.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSArray, NSString, UIImageView, UIView, UIViewController, UIVisualEffectView;

@interface IGPreviewViewController : UIViewController<UIViewControllerTransitioningDelegate> {
  /* instance variables */
  BOOL _isShowingArrowView;
  BOOL _isShowingActionView;
  BOOL _isActionViewShownBeforePanning;
  BOOL _stopProcessingPanEvents;
  BOOL _pendingDismiss;
  BOOL _viewDidAppearObserved;
  UIViewController *_contentViewControler;
  UIVisualEffectView *_blurView;
  UIView *_movableView;
  UIView *_maskedView;
  IGActionGroupView *_actionView;
  UIImageView *_arrowView;
  double _panToHideOffset;
  struct CGPoint { double x; double y; } _panningOrigin;
  struct CGPoint { double x; double y; } _panningViewOrigin;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceRect;
@property (retain, nonatomic) NSArray *actionItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContentViewController:(id)controller sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)_didPan:(id)pan;
- (void)_didTap:(id)tap;
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (id)ig_keyViewControllers;
@end

#endif /* IGPreviewViewController_h */
