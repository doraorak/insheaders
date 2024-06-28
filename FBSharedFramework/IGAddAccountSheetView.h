//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAddAccountSheetView_h
#define IGAddAccountSheetView_h
@import Foundation;

#include "UIView.h"
#include "IGLabel.h"
#include "IGTextButton.h"

@class UIView;
@protocol IGAddAccountSheetViewDelegate;

@interface IGAddAccountSheetView : UIView {
  /* instance variables */
  UIView *_headerContainerView;
  IGLabel *_titleLabel;
  unsigned long long _style;
  IGTextButton *_registrationButton;
  IGTextButton *_loginButton;
}

@property (weak, nonatomic) NSObject<IGAddAccountSheetViewDelegate> *delegate;

/* instance methods */
- (id)initWithRegistrationButtonText:(id)text loginButtonText:(id)text style:(unsigned long long)style;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_didTapRegistrationButton;
- (void)_didTapLoginButton;
@end

#endif /* IGAddAccountSheetView_h */