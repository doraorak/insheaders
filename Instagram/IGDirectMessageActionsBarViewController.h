//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageActionsBarViewController_h
#define IGDirectMessageActionsBarViewController_h
@import Foundation;

#include "IGViewController.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGActionSheetController, IGTapButton, NSArray, NSMapTable, NSMutableSet, NSString, UIGestureRecognizer, UIView;
@protocol IGDirectMessageActionsBarDelegate;

@interface IGDirectMessageActionsBarViewController : IGViewController<UIGestureRecognizerDelegate> {
  /* instance variables */
  NSArray *_actions;
  NSMapTable *_buttonsToActions;
  NSArray *_actionButtons;
  IGActionSheetController *_actionSheetController;
  BOOL _usePassthroughBackground;
  UIGestureRecognizer *_backgroundTapRecognizer;
  UIGestureRecognizer *_panRecognizer;
  UIView *_dividerLine;
  IGTapButton *_moreButton;
  NSMutableSet *_defaultColorActionButtons;
  int _indexToSplitMoreMenu;
  NSObject<IGDirectMessageActionsBarDelegate> *_delegate;
  UIView *_messageActionsBar;
  NSArray *_overflowActions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMessageActions:(id)actions usePassthroughBackground:(BOOL)background delegate:(id)delegate;
- (void)viewDidLoad;
- (BOOL)disableNavigationEvent;
- (void)_onButtonTap:(id)tap;
- (void)_presentActionSheetIfNecessary;
- (void)_tapOrPanBackgroundOverlay;
- (id)_actionSheetControllerViewForSnapshotTests;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)traitCollectionDidChange:(id)change;
- (void)setOverrideUserInterfaceStyle:(long long)style;
@end

#endif /* IGDirectMessageActionsBarViewController_h */
