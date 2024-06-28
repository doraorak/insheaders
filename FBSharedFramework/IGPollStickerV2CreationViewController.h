//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPollStickerV2CreationViewController_h
#define IGPollStickerV2CreationViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGKeyboardObserver.h"
#include "IGPassthroughView.h"
#include "IGPollStickerV2View.h"
#include "IGStickerEditingHeaderView.h"
#include "IGStickerEditingHeaderViewDismissalDelegate-Protocol.h"
#include "IGStoryStickerEditingViewControllerProtocol-Protocol.h"

@class NSArray, NSString, UIView;
@protocol IGPollStickerV2CreationViewControllerDelegate;

@interface IGPollStickerV2CreationViewController : UIViewController<IGStickerEditingHeaderViewDismissalDelegate, IGStoryStickerEditingViewControllerProtocol> {
  /* instance variables */
  BOOL _isStickerNewlyCreated;
  struct CGPoint { double x; double y; } _entryTapPoint;
  long long _editorStyle;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentRegion;
  double _contentRegionCornerRadius;
  IGKeyboardObserver *_keyboardObserver;
  UIView *_dimmingView;
  IGPassthroughView *_clippingContainerView;
  IGStickerEditingHeaderView *_headerView;
  IGPollStickerV2View *_stickerView;
  unsigned long long _colorIndex;
}

@property (weak, nonatomic) NSObject<IGPollStickerV2CreationViewControllerDelegate> *delegate;
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
- (id)initWithPollStickerView:(id)view entryTapPoint:(struct CGPoint { double x0; double x1; })point contentRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })region contentRegionCornerRadius:(double)radius editorStyle:(long long)style useBrandRefreshForGlobalScripts:(BOOL)scripts usePrismColors:(BOOL)colors;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)_didTapBackground;
- (void)stickerEditingHeaderViewDidTapToDismiss:(id)dismiss withDismissalSource:(long long)source;
- (void)pollStickerV2ViewDidUpdate:(id)update;
- (void)pollStickerV2ViewDidChangeNumberOfVisiblePlaceholders:(id)placeholders;
- (void)stickerEditingHeaderViewDidTapColorWheel:(id)wheel;
- (void)stickerEditingHeaderViewDidTapTextEmphasisToggleButton:(id)button;
- (void)stickerEditingHeaderViewDidTapTextSelectorButton:(id)button;
- (void)stickerEditingHeaderViewDidTapTextToolButton:(id)button;
- (void)stickerEditingHeaderViewDidTapTagUserButton:(id)button;
@end

#endif /* IGPollStickerV2CreationViewController_h */