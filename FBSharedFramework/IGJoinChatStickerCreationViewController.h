//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGJoinChatStickerCreationViewController_h
#define IGJoinChatStickerCreationViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGCoreTextView.h"
#include "IGImageWithAccessoryButton.h"
#include "IGJoinChatStickerShareExistingChatViewController.h"
#include "IGJoinChatStickerTrayModel.h"
#include "IGJoinChatStickerView.h"
#include "IGKeyboardObserver.h"
#include "IGPassthroughView.h"
#include "IGStickerEditingHeaderView.h"
#include "IGStickerEditingHeaderViewDismissalDelegate-Protocol.h"
#include "IGStoryStickerEditingViewControllerProtocol-Protocol.h"
#include "IGUserSession.h"

@class NSArray, NSString, UIView;
@protocol IGJoinChatStickerCreationViewControllerDelegate;

@interface IGJoinChatStickerCreationViewController : UIViewController<IGStickerEditingHeaderViewDismissalDelegate, IGCoreTextLinkHandler, IGStoryStickerEditingViewControllerProtocol> {
  /* instance variables */
  IGUserSession *_userSession;
  BOOL _isStickerNewlyCreated;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentRegion;
  double _contentRegionCornerRadius;
  long long _editorStyle;
  IGKeyboardObserver *_keyboardObserver;
  UIView *_dimmingView;
  IGPassthroughView *_clippingContainerView;
  IGStickerEditingHeaderView *_headerView;
  IGJoinChatStickerView *_stickerView;
  IGImageWithAccessoryButton *_shareExistingChatButton;
  IGCoreTextView *_footerLabel;
  IGJoinChatStickerTrayModel *_trayModel;
  IGJoinChatStickerShareExistingChatViewController *_shareExistingChatViewController;
  BOOL _shareExistingChatViewControllerAlreadyShown;
}

@property (weak, nonatomic) NSObject<IGJoinChatStickerCreationViewControllerDelegate> *delegate;
@property (nonatomic) BOOL isFromSundial;
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
- (id)initWithJoinChatStickerView:(id)view trayModel:(id)model contentRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })region contentRegionCornerRadius:(double)radius editorStyle:(long long)style userSession:(id)session;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (id)inputAccessoryView;
- (void)joinChatStickerViewDidChangeTitle:(id)title;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)presentStickerEditingViewControllerWithZoomTransitionComplete;
- (void)stickerEditingHeaderViewDidTapToDismiss:(id)dismiss withDismissalSource:(long long)source;
- (void)stickerEditingHeaderViewDidTapColorWheel:(id)wheel;
- (void)stickerEditingHeaderViewDidTapTextEmphasisToggleButton:(id)button;
- (void)stickerEditingHeaderViewDidTapTextSelectorButton:(id)button;
- (void)stickerEditingHeaderViewDidTapTextToolButton:(id)button;
- (void)stickerEditingHeaderViewDidTapTagUserButton:(id)button;
- (void)_didTapBackground;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)shareExistingChatViewController:(id)controller didSelectChannel:(id)channel;
- (void)shareExistingChatViewControllerDidDisappear;
- (void)_didTapShareExistingChat;
@end

#endif /* IGJoinChatStickerCreationViewController_h */
