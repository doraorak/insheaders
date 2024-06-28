//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchEchoSeeAllCellV2_h
#define IGSearchEchoSeeAllCellV2_h
@import Foundation;

#include "UICollectionViewCell.h"

@class NSString, UILabel;

@interface IGSearchEchoSeeAllCellV2 : UICollectionViewCell {
  /* instance variables */
  UILabel *_titleLabel;
}

@property (copy, nonatomic) NSString *title;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setSelected:(BOOL)selected;
@end

#endif /* IGSearchEchoSeeAllCellV2_h */