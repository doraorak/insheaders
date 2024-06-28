//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteManagerButtonCell_h
#define IGPromoteManagerButtonCell_h
@import Foundation;

#include "UICollectionViewCell.h"

@class UIImageView, UILabel, UIView;

@interface IGPromoteManagerButtonCell : UICollectionViewCell {
  /* instance variables */
  UILabel *_buttonTextLabel;
  UIImageView *_chevronImageView;
  UIView *_blueDot;
  UILabel *_unreadCountLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithViewModel:(id)model;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)highlighted;
@end

#endif /* IGPromoteManagerButtonCell_h */
