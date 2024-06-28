//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGChainingDynamicTwoLineNavigationTitleView_h
#define IGChainingDynamicTwoLineNavigationTitleView_h
@import Foundation;

#include "UIView.h"

@class NSString, UILabel;

@interface IGChainingDynamicTwoLineNavigationTitleView : UIView {
  /* instance variables */
  UILabel *_subtitleLabel;
  UILabel *_firstItemLabel;
  UILabel *_otherItemLabel;
  NSString *_firstItemTitle;
  NSString *_otherItemTitle;
  NSString *_subtitle;
  unsigned long long _layout;
  unsigned long long _currentState;
  unsigned long long _queuedState;
  BOOL _isAnimatingState;
}

/* instance methods */
- (id)initWithFirstItemTitle:(id)title otherItemTitle:(id)title subtitle:(id)subtitle layout:(unsigned long long)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
@end

#endif /* IGChainingDynamicTwoLineNavigationTitleView_h */