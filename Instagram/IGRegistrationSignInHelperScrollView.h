//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationSignInHelperScrollView_h
#define IGRegistrationSignInHelperScrollView_h
@import Foundation;

#include "UIScrollView.h"
#include "IGPhoneNumberField.h"
#include "IGRegistrationSignInHelperToggleView.h"
#include "NSObject-Protocol.h"

@class IGFacebookButton, IGLabel, IGRegistrationFacebookButtonSeparator, IGRegistrationNextButton, IGRegistrationTextField, IGTextField, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel;
@protocol IGRegistrationSignInHelperScrollViewDelegate;

@interface IGRegistrationSignInHelperScrollView : UIScrollView<NSObject> {
  /* instance variables */
  UIActivityIndicatorView *_spinner;
  UIActivityIndicatorView *_loginHelperButtonSpinner;
  BOOL _isTabEnabled;
  NSObject<IGRegistrationSignInHelperScrollViewDelegate> *_signInHelperDelegate;
  IGRegistrationTextField *_emailOrUsernameField;
  IGRegistrationSignInHelperToggleView *_toggleView;
  IGRegistrationFacebookButtonSeparator *_facebookButtonSeparator;
  IGLabel *_inlineErrorLabel;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) IGPhoneNumberField *phoneNumberField;
@property (retain, nonatomic) IGTextField *inputView;
@property (retain, nonatomic) IGRegistrationNextButton *sendButton;
@property (retain, nonatomic) UIButton *loginHelperButton;
@property (retain, nonatomic) IGFacebookButton *facebookButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame layoutSpec:(id)spec;
- (void)layoutSubviews;
- (id)_createTitleLabel;
- (id)_createDescriptionLabel;
- (void)_sendButtonTapped;
- (void)_countryCodeButtonTapped;
- (void)_facebookButtonTapped;
- (void)_helperButtonTapped;
- (void)signInHelperToggleViewDelegateDidTapUsernameButton:(id)button;
- (void)signInHelperToggleViewDelegateDidTapPhoneButton:(id)button;
@end

#endif /* IGRegistrationSignInHelperScrollView_h */
