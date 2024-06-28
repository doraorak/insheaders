//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMenuTitleView_h
#define IGMenuTitleView_h
@import Foundation;

#include "UIView.h"

@class UILabel, UIView;

@interface IGMenuTitleView : UIView {
  /* instance variables */
  UILabel *_titleLabel;
  UIView *_separator;
  BOOL _prismEnabled;
}

/* instance methods */
- (id)initWithText:(id)text;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (double)_outerVerticalPadding;
- (double)_outerHorizontalPadding;
- (id)accessibilityLabel;
@end

#endif /* IGMenuTitleView_h */