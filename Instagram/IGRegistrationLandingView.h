//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationLandingView_h
#define IGRegistrationLandingView_h
@import Foundation;

#include "UIView.h"

@class IGTextButton, UIImageView;
@protocol IGRegistrationLandingViewDelegate;

@interface IGRegistrationLandingView : UIView {
  /* instance variables */
  UIImageView *_brandView;
  IGTextButton *_signUpButton;
  IGTextButton *_loginButton;
  BOOL _isSignUpButtonTapped;
}

@property (weak, nonatomic) NSObject<IGRegistrationLandingViewDelegate> *delegate;

/* instance methods */
- (id)init;
- (void)layoutSubviews;
- (double)_topMargin;
- (void)_didTapSignUpButton;
- (void)_didTapLoginButton;
@end

#endif /* IGRegistrationLandingView_h */