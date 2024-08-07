//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAgePickerBlockContainerView_h
#define IGAgePickerBlockContainerView_h
@import Foundation;

#include "UIView.h"

@class IGTextButton, UIImageView, UILabel, UIView;
@protocol IGAgePickerBlockContainerViewDelegate;

@interface IGAgePickerBlockContainerView : UIView {
  /* instance variables */
  UIImageView *_iconView;
  UILabel *_titleLabel;
  IGTextButton *_submitButton;
  UIView *_separatorView;
}

@property (weak, nonatomic) NSObject<IGAgePickerBlockContainerViewDelegate> *delegate;

/* instance methods */
- (id)initWithViewModel:(id)model;
- (void)layoutSubviews;
- (void)_didTapSubmitButton;
@end

#endif /* IGAgePickerBlockContainerView_h */
