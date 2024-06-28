//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchResultGridItemCell_h
#define IGSearchResultGridItemCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGProfilePictureImageView.h"

@class UIImageView, UILabel;

@interface IGSearchResultGridItemCell : UICollectionViewCell {
  /* instance variables */
  IGProfilePictureImageView *_profilePictureImageView;
  UILabel *_titleLabel;
  UIImageView *_verifiedBadgeView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithViewModel:(id)model;
- (void)prepareForReuse;
- (void)layoutSubviews;
@end

#endif /* IGSearchResultGridItemCell_h */
