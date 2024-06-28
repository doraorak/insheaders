//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTwoFactorRequestView_h
#define IGTwoFactorRequestView_h
@import Foundation;

#include "UIView.h"

@class IGBottomButtonsView, IGDSHeadlineView, IGTextButton, UILabel, UIView;
@protocol IGTwoFactorRequestViewDelegate;

@interface IGTwoFactorRequestView : UIView {
  /* instance variables */
  IGDSHeadlineView *_headlineView;
  UIView *_leftSeparator;
  UIView *_rightSeparator;
  UILabel *_alternativeText;
  IGTextButton *_authenticationButton;
  IGBottomButtonsView *_bottomButtonsView;
}

@property (weak, nonatomic) NSObject<IGTwoFactorRequestViewDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_authenticationButtonPressed;
@end

#endif /* IGTwoFactorRequestView_h */