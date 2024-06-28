//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPivotPageNavBarButton_h
#define IGPivotPageNavBarButton_h
@import Foundation;

#include "UIControl.h"

@class UIImageView;

@interface IGPivotPageNavBarButton : UIControl {
  /* instance variables */
  UIImageView *_imageView;
}

/* instance methods */
- (id)initWithImage:(id)image;
- (void)setHighlighted:(BOOL)highlighted;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
@end

#endif /* IGPivotPageNavBarButton_h */