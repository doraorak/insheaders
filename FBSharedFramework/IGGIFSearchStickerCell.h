//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGIFSearchStickerCell_h
#define IGGIFSearchStickerCell_h
@import Foundation;

#include "UICollectionViewCell.h"

@class UIFont, UIImageView, UILabel, UIView;

@interface IGGIFSearchStickerCell : UICollectionViewCell {
  /* instance variables */
  UIImageView *_searchIconImageView;
  UILabel *_label;
  UIView *_containerView;
  BOOL _isAnimating;
}

@property (copy, nonatomic) UIFont *font;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)startAnimating;
- (void)stopAnimating;
@end

#endif /* IGGIFSearchStickerCell_h */
