//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FOAReactionTrayViewController_h
#define FOAReactionTrayViewController_h
@import Foundation;

#include "UIViewController.h"
#include "UIViewControllerAnimatedTransitioning-Protocol.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSMutableDictionary, NSString, UIStackView, UIView;
@protocol FOAReactionTrayConfigurator, FOAReactionTrayViewControllerDelegate;

@interface FOAReactionTrayViewController : UIViewController<UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {
  /* instance variables */
  BOOL _preservesStatusBarStyle;
  NSMutableDictionary *_emojiViewMap;
  UIStackView *_emojiStack;
  UIView *_toggleButton;
  UIView *_popoverTray;
  NSArray *_popoverTrayFallbackPositionConstraints;
  NSLayoutConstraint *_popoverTrayLeadingConstraint;
  NSLayoutConstraint *_popoverTrayBottomConstraint;
}

@property (copy, nonatomic) NSArray *emojiCodePoints;
@property (nonatomic) long long toggleButtonType;
@property (weak, nonatomic) NSObject<FOAReactionTrayViewControllerDelegate> *delegate;
@property (weak, nonatomic) NSObject<FOAReactionTrayConfigurator> *configurator;
@property (weak, nonatomic) UIView *sourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEmojiCodePoints:(id)points toggleButtonType:(long long)type preservesStatusBarStyle:(BOOL)style configurator:(id)configurator delegate:(id)delegate;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (BOOL)_isTrayBelowSourceView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })view;
- (void)_setupBackgroundTap;
- (void)_initializeUI;
- (void)_didTapBackgroundView;
- (void)_didTapEmojiViewWithGesture:(id)gesture;
- (void)_didTapToggleButton;
- (void)_didTapOverreactButton;
- (void)_updateTrayPosition;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_createTransformForMinimizedPopover;
- (void)_animateTrayWithVisibility:(BOOL)visibility completion:(id /* block */)completion;
- (void)_animateActionButtons;
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
@end

#endif /* FOAReactionTrayViewController_h */