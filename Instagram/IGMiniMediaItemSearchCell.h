//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMiniMediaItemSearchCell_h
#define IGMiniMediaItemSearchCell_h
@import Foundation;

#include "IGBouncyCollectionViewCell.h"

@class UIImageView, UILabel;

@interface IGMiniMediaItemSearchCell : IGBouncyCollectionViewCell {
  /* instance variables */
  UIImageView *_iconView;
  UILabel *_label;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setTitle:(id)title;
- (void)setIcon:(id)icon;
- (void)layoutSubviews;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityHint;
@end

#endif /* IGMiniMediaItemSearchCell_h */