//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileTitleButton_h
#define IGProfileTitleButton_h
@import Foundation;

#include "UIView.h"

@class UIImageView, UILabel;

@interface IGProfileTitleButton : UIView {
  /* instance variables */
  UIImageView *_imageView;
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  BOOL _shouldApplyLeftPaddingToTitleLabel;
}

/* instance methods */
- (id)initWithTarget:(id)target title:(id)title subtitle:(id)subtitle action:(SEL)action isVerified:(BOOL)verified shouldApplyLeftPaddingToTitleLabel:(BOOL)label;
- (void)layoutSubviews;
@end

#endif /* IGProfileTitleButton_h */
