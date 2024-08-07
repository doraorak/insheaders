//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageGrowingInputViewController_h
#define IGDirectMessageGrowingInputViewController_h
@import Foundation;

#include "IGViewController.h"
#include "FBLazyCreator.h"
#include "IGDirectMessageInputControlling-Protocol.h"
#include "IGGradientView.h"
#include "IGGrowingTextView.h"
#include "IGGrowingTextViewDelegate-Protocol.h"
#include "IGKeyboardObserver.h"
#include "IGUserSession.h"

@class NSString, UIView;
@protocol IGDirectMessageInputViewControllerDelegate, IGMessageInputAccessoryView;

@interface IGDirectMessageGrowingInputViewController : IGViewController<IGGrowingTextViewDelegate, IGDirectMessageInputControlling> {
  /* instance variables */
  IGGradientView *_bottomActionBackgroundView;
  BOOL _messageFieldHidden;
  BOOL _notchedDevice;
  UIView *_bottomView;
  UIView *_separatorView;
  NSString *_prefilledText;
  double _textViewHeight;
  BOOL _showSuperReshareMemeIt;
  BOOL _forceDarkModeStyle;
  UIView *_previewContainerView;
  IGKeyboardObserver *_keyboardObserver;
  IGUserSession *_userSession;
  FBLazyCreator *_actionButtonsView;
  IGGrowingTextView *_messageTextView;
}

@property (retain, nonatomic) NSObject<IGMessageInputAccessoryView> *messageInputAccessoryView;
@property (weak, nonatomic) NSObject<IGDirectMessageInputViewControllerDelegate> *delegate;
@property (retain, nonatomic) NSString *inputText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *view;
@property (nonatomic) BOOL isEntrypointFromReelsAndRemixable;

/* instance methods */
- (id)initWithAnalyticsModule:(id)module notchedDevice:(BOOL)device bottomView:(id)view actionButtonsView:(id)view messageInputAccessoryView:(id)view userSession:(id)session showSuperReshareMemeIt:(BOOL)it forceDarkModeStyle:(BOOL)style media:(id)media;
- (void)showSendToGroupAction:(BOOL)action;
- (void)showMinimizedShareButton:(BOOL)button;
- (void)setText:(id)text;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)isEditing;
- (void)setActionButtonTitle:(id)title;
- (void)setSendToGroupButtonEnabled:(BOOL)enabled;
- (void)setActionButtonEnabled:(BOOL)enabled;
- (void)setBottomActionButtonImage:(id)image;
- (void)setBottomActionButtonImageTintColor:(id)color;
- (void)updateActionButtonColorScheme:(long long)scheme;
- (struct CGSize { double x0; double x1; })preferredContentSizeForTargetSize:(struct CGSize { double x0; double x1; })size;
- (void)dismissKeyboard;
- (void)setMessageTextFieldHidden:(BOOL)hidden animated:(BOOL)animated;
- (void)presentKeyboard;
- (void)setupActionButtonsIfNeeded;
- (void)primaryButtonTapped:(id)tapped;
- (void)secondaryButtonTapped:(id)tapped;
- (void)minimizedShareButtonTapped:(id)tapped;
- (void)messageInputAccessoryView:(id)view didAppendText:(id)text;
- (void)messageInputAccessoryView:(id)view didSetText:(id)text;
- (void)messageInputAccessoryView:(id)view didSelectAvatarSticker:(id)sticker;
- (void)growingTextViewDidBeginEditing:(id)editing;
- (void)growingTextViewDidChange:(id)change;
- (void)growingTextView:(id)view willChangeHeight:(double)height;
- (BOOL)growingTextViewShouldReturn:(id)return;
- (BOOL)growingTextView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)growingTextViewDidEndEditing:(id)editing;
- (void)growingTextView:(id)view didChangeHeight:(double)height;
@end

#endif /* IGDirectMessageGrowingInputViewController_h */
