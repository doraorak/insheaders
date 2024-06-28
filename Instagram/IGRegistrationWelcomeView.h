//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationWelcomeView_h
#define IGRegistrationWelcomeView_h
@import Foundation;

#include "UIView.h"

@class IGCoreTextView, IGFacebookButton, IGRegistrationFacebookButtonSeparator, IGWelcomeViewBackgroundView, UIButton, UILabel;
@protocol IGRegistrationWelcomeViewDelegate;

@interface IGRegistrationWelcomeView : UIView {
  /* instance variables */
  NSObject<IGRegistrationWelcomeViewDelegate> *_delegate;
  IGWelcomeViewBackgroundView *_backgroundView;
  IGFacebookButton *_facebookButton;
  UILabel *_socialContextLabel;
  IGRegistrationFacebookButtonSeparator *_lineWithOrTextSeparator;
  UIButton *_whiteSignUpButton;
  UIButton *_blueSignUpButton;
  UIButton *_dismissButton;
  BOOL _isSignUpButtonTapped;
  IGCoreTextView *_termView;
  IGCoreTextView *_rankingOfContentView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame isSwitchingAccount:(BOOL)account enableNetzDG:(BOOL)dg delegate:(id)delegate;
- (void)layoutSubviews;
- (void)_didTapFacebookButton;
- (void)_didTapSignUpButton;
- (void)_didTapDismissButton;
- (void)_didTapLoginButton;
@end

#endif /* IGRegistrationWelcomeView_h */