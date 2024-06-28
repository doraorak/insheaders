//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLoginView_h
#define IGLoginView_h
@import Foundation;

#include "UIView.h"
#include "IGLoginViewModel.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGAccessFooterView, IGCoreTextView, IGFacebookButton, IGLabel, IGPassthroughView, IGRegistrationFacebookButtonSeparator, IGTextField, IGTrustedFriendsNotificationFooterView, NSString, UIActivityIndicatorView, UIButton, UIImageView, UIView;
@protocol IGLoginViewDelegate><IGTextFieldDelegate><IGCoreTextLinkHandler;

@interface IGLoginView : UIView<UIGestureRecognizerDelegate> {
  /* instance variables */
  IGPassthroughView *_containerView;
  IGRegistrationFacebookButtonSeparator *_facebookButtonSeparator;
  IGFacebookButton *_facebookButton;
  IGTextField *_usernameField;
  IGTextField *_passwordField;
  IGCoreTextView *_termView;
  IGCoreTextView *_rankingOfContentView;
  UIButton *_gearButton;
  UIActivityIndicatorView *_loadingIndicator;
  UIView *_shaderView;
  UIImageView *_logoView;
  UIButton *_recoveryButton;
  UIButton *_dismissButton;
  UIButton *_backButton;
  UIButton *_loginButton;
  IGAccessFooterView *_footerView;
  IGTrustedFriendsNotificationFooterView *_trustedFriendsFooterView;
  IGLabel *_inlineErrorLabel;
  double _largeVerticalPadding;
  double _mediumVerticalPadding;
  double _minimumVerticalPadding;
  IGLoginViewModel *_viewModel;
  BOOL _useMinimalVerticalPadding;
  BOOL _isAlternativeRecoveryEnabled;
  BOOL _isSignUpButtonTapped;
}

@property (weak, nonatomic) NSObject<IGLoginViewDelegate><IGTextFieldDelegate><IGCoreTextLinkHandler> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model;
- (void)layoutSubviews;
- (void)accessFooterViewDidTapPrimaryButton:(id)button;
- (void)accessFooterViewDidTapSecondaryButton:(id)button;
- (void)_didTapShaderView;
- (void)_didTapBackButton;
- (void)_didTapGearButton;
- (void)_didTapBackgroundView;
- (void)_togglePassword:(id)password;
- (void)_didTapFacebookButton;
- (void)_didTapDismissButton;
- (void)_didTapLoginButton;
- (void)_didTapForgotPasswordButton;
- (void)_didTapLoginAnotherWayButton;
- (void)_didTapTrustedFriendsFooterView:(id)view;
- (void)configureWithViewModel:(id)model;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)footerViewDidTapViewButton:(id)button;
@end

#endif /* IGLoginView_h */