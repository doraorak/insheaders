//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationUsernameField_h
#define IGRegistrationUsernameField_h
@import Foundation;

#include "IGRegistrationTextField.h"

@class UIButton, UIView;
@protocol IGRegistrationUsernameFieldDelegate;

@interface IGRegistrationUsernameField : IGRegistrationTextField {
  /* instance variables */
  NSObject<IGRegistrationUsernameFieldDelegate> *_usernameFieldDelegate;
  BOOL _usernameIsRefreshable;
  long long _usernameState;
  UIView *_lineSeparatorView;
  UIView *_actionView;
  long long _usernameFieldState;
}

@property (retain, nonatomic) UIButton *validationButton;
@property (retain, nonatomic) UIButton *refreshButton;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame placeholder:(id)placeholder usernameFieldDelegate:(id)delegate;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_didTapValidationButton;
@end

#endif /* IGRegistrationUsernameField_h */