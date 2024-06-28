//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMagicModTopicStickerEditingViewController_h
#define IGMagicModTopicStickerEditingViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGKeyboardObserver.h"
#include "IGKeyboardObserverHideDelegate-Protocol.h"
#include "IGKeyboardObserverShowDelegate-Protocol.h"
#include "IGMagicModTopicStickerView.h"
#include "IGPassthroughView.h"
#include "IGPromptStickerModel.h"
#include "IGStickerEditingHeaderView.h"
#include "IGStickerEditingHeaderViewDismissalDelegate-Protocol.h"
#include "IGStoryAnimatedDiceButton.h"
#include "IGStoryStickerEditingViewControllerProtocol-Protocol.h"
#include "IGUserSession.h"
#include "_TtC19IGMagicModDataModel15IGMagicModEdits.h"

@class NSArray, NSString, UILabel, UIView;
@protocol IGMagicModTopicStickerEditingViewControllerDelegate;

@interface IGMagicModTopicStickerEditingViewController : UIViewController<IGKeyboardObserverShowDelegate, IGKeyboardObserverHideDelegate, IGStickerEditingHeaderViewDismissalDelegate, IGStoryStickerEditingViewControllerProtocol> {
  /* instance variables */
  IGUserSession *_userSession;
  struct CGPoint { double x; double y; } _originalStickerCenter;
  struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _originalStickerTransform;
  IGPromptStickerModel *_originalStickerModel;
  IGMagicModTopicStickerView *_stickerView;
  BOOL _isStickerNewlyCreated;
  UILabel *_instructionLabel;
  UILabel *_explainationLabel;
  _TtC19IGMagicModDataModel15IGMagicModEdits *_magicModEdits;
  IGKeyboardObserver *_keyboardObserver;
  IGPassthroughView *_contentWrapperView;
  IGStickerEditingHeaderView *_headerView;
  UIView *_dimmingView;
  IGStoryAnimatedDiceButton *_diceButton;
  BOOL _shouldLaunchMagicModAfterEditing;
  NSArray *_suggestedTopics;
  long long _lastTopicIndex;
  IGPromptStickerModel *_stickerModel;
}

@property (weak, nonatomic) NSObject<IGMagicModTopicStickerEditingViewControllerDelegate> *delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentRegion;
@property (nonatomic) double contentRegionCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *backgroundViews;
@property (readonly, nonatomic) UIView *editableStickerView;
@property (readonly, nonatomic) double editableStickerScaleWhileEditing;
@property (readonly, nonatomic) BOOL editableStickerViewIsNewlyCreated;
@property (readonly, nonatomic) BOOL shouldDisableZoomTransitionOnEditStart;
@property (readonly, nonatomic) BOOL shouldDiscardStickerOnDismissal;
@property (readonly, nonatomic) NSString *stickerEditSessionLoggingId;
@optional
@property (readonly, nonatomic) NSArray *secondaryEditableStickerViews;

/* instance methods */
- (id)initWithStickerView:(id)view cameraToolType:(long long)type magicModEdits:(id)edits shouldLaunchMagicModAfterEditing:(BOOL)editing userSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)stickerEditingHeaderViewDidTapToDismiss:(id)dismiss withDismissalSource:(long long)source;
- (void)keyboardObserverKeyboardDidShow:(id)show;
- (void)keyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidHide:(id)hide;
- (void)keyboardObserver:(id)observer keyboardWillHideWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)magicModStickerView:(id)view didChangeTextView:(id)view;
- (void)_didTapDiceButton:(id)button;
@end

#endif /* IGMagicModTopicStickerEditingViewController_h */