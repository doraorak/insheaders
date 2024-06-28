//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContentAppreciationInsightsReelCell_h
#define IGContentAppreciationInsightsReelCell_h
@import Foundation;

#include "UICollectionViewCell.h"

@class CAShapeLayer, IGImageView, UILabel, UIView;

@interface IGContentAppreciationInsightsReelCell : UICollectionViewCell {
  /* instance variables */
  IGImageView *_imageView;
  UIView *_amountBackground;
  UILabel *_amountLabel;
  UILabel *_dateLabel;
  CAShapeLayer *_borderLayer;
}

/* class methods */
+ (id)reuseIdentifier;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;
@end

#endif /* IGContentAppreciationInsightsReelCell_h */