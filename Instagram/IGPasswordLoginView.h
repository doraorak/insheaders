//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPasswordLoginView_h
#define IGPasswordLoginView_h
@import Foundation;

#include "UIView.h"
#include "IGTextFieldDelegate-Protocol.h"

@class IGFacebookButton, IGImageView, IGTextField, NSString, UIActivityIndicatorView, UIButton, UILabel;
@protocol IGPasswordLoginViewDelegate;

@interface IGPasswordLoginView : UIView<IGTextFieldDelegate> {
  /* instance variables */
  IGImageView *_profilePictureView;
  UILabel *_usernameLabel;
  UIButton *_forgotPasswordButton;
  UIButton *_loginButton;
  IGFacebookButton *_facebookButton;
  IGTextField *_passwordField;
  UIButton *_backButton;
  UIButton *_dismissButton;
  UIActivityIndicatorView *_loadingIndicator;
  BOOL _showFacebookButton;
}

@property (weak, nonatomic) NSObject<IGPasswordLoginViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUsername:(id)username profilePhotoURL:(id)url showFacebookButton:(BOOL)button replaceBackButtonWithClose:(BOOL)close;
- (void)layoutSubviews;
- (BOOL)textFieldShouldReturn:(id)return;
- (void)textFieldDidChange:(id)change;
- (void)_didTapLoginButton;
- (void)_didTapFacebookButton;
- (void)_didTapBackButton;
- (void)_didTapDismissButton;
- (void)_didTapForgotPasswordButton;
@end

#endif /* IGPasswordLoginView_h */
