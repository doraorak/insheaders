//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAvatarsFeatureToggleCollectionViewCell_h
#define IGAvatarsFeatureToggleCollectionViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGDSSwitch.h"
#include "IGImageView.h"

@class UIActivityIndicatorView, UILabel;
@protocol IGAvatarsFeatureToggleCollectionViewCellDelegate;

@interface IGAvatarsFeatureToggleCollectionViewCell : UICollectionViewCell {
  /* instance variables */
  IGImageView *_imageView;
  UILabel *_titleLabel;
  IGDSSwitch *_switchView;
  UIActivityIndicatorView *_activityIndicator;
}

@property (weak, nonatomic) NSObject<IGAvatarsFeatureToggleCollectionViewCellDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
@end

#endif /* IGAvatarsFeatureToggleCollectionViewCell_h */
