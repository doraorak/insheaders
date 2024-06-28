//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActionSheetController_h
#define IGActionSheetController_h
@import Foundation;

#include "UIViewController.h"
#include "FBGNVContentMetadata.h"
#include "FBGNVGenericClickMetadataProvider-Protocol.h"
#include "IGActionSheetControllerAction.h"
#include "IGAnalyticsModule-Protocol.h"
#include "IGControlContainingScrollView.h"
#include "IGPassthroughView.h"
#include "IGTapButton.h"
#include "IGViewControllerSlideable-Protocol.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSMapTable, NSString, UILabel, UIPanGestureRecognizer, UISelectionFeedbackGenerator, UIView;
@protocol IGActionSheetControllerDelegate;

@interface IGActionSheetController : UIViewController<FBGNVGenericClickMetadataProvider, UIViewControllerTransitioningDelegate, IGViewControllerSlideable, IGAnalyticsModule> {
  /* instance variables */
  UIView *_header;
  NSAttributedString *_primaryText;
  NSAttributedString *_secondaryText;
  BOOL _hidesCancelButton;
  long long _backgroundStyle;
  UIView *_backgroundOverlayView;
  IGPassthroughView *_contentView;
  UIView *_topContentContainerView;
  UIView *_headerContainerView;
  UILabel *_primaryLabel;
  UILabel *_secondaryLabel;
  IGControlContainingScrollView *_actionButtonContainerView;
  NSArray *_actionButtons;
  IGActionSheetControllerAction *_cancelAction;
  IGTapButton *_cancelButton;
  NSArray *_allButtons;
  NSMapTable *_buttonsToActions;
  UIPanGestureRecognizer *_panGestureRecognizer;
  UISelectionFeedbackGenerator *_feedbackGenerator;
  IGTapButton *_lastHighlightedButton;
  FBGNVContentMetadata *_contentMetadata;
}

@property (readonly, copy, nonatomic) NSArray *actions;
@property (weak, nonatomic) NSObject<IGActionSheetControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *contentContainerView;
@property (readonly, nonatomic) UIView *overlayView;

/* instance methods */
- (id)initWithActions:(id)actions;
- (id)initWithActions:(id)actions gnvContentMetadata:(id)metadata;
- (id)initWithHeader:(id)header actions:(id)actions gnvContentMetadata:(id)metadata;
- (id)initWithHeader:(id)header primaryText:(id)text secondaryText:(id)text actions:(id)actions layoutSpec:(id)spec;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (BOOL)accessibilityPerformEscape;
- (void)_onBackgroundTap;
- (void)_onButtonTap:(id)tap;
- (void)_onPan:(id)pan;
- (id)analyticsModule;
- (void)dismiss;
- (void)show;
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (id)contentMetadata;
@end

#endif /* IGActionSheetController_h */
