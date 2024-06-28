//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAccessFooterView_h
#define IGAccessFooterView_h
@import Foundation;

#include "UIView.h"
#include "IGRegistrationNextButton.h"

@class UIButton, UILabel, UIView;
@protocol IGAccessFooterViewDelegate;

@interface IGAccessFooterView : UIView {
  /* instance variables */
  UIView *_footerViewSeparator;
  UIButton *_primaryButton;
  UIButton *_secondaryButton;
  UILabel *_textLabel;
  IGRegistrationNextButton *_nextButton;
}

@property (weak, nonatomic) NSObject<IGAccessFooterViewDelegate> *delegate;

/* instance methods */
- (id)initWithViewModel:(id)model;
- (void)layoutSubviews;
- (void)_didTapPrimaryButton;
- (void)_didTapSecondaryButton;
@end

#endif /* IGAccessFooterView_h */