//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGScrollingSelectorViewTintedCell_h
#define IGScrollingSelectorViewTintedCell_h
@import Foundation;

#include "IGScrollingSelectorViewCell.h"

@class UIColor, UIView;

@interface IGScrollingSelectorViewTintedCell : IGScrollingSelectorViewCell {
  /* instance variables */
  UIView *_selectionBorderView;
  UIColor *_selectedTintColor;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setAppearance:(unsigned long long)appearance;
- (void)setImageSpecifier:(id)specifier;
@end

#endif /* IGScrollingSelectorViewTintedCell_h */
