//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSaveToCollectionsCell_h
#define IGSaveToCollectionsCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGMultiImageThumbnailView.h"

@class IGImageView, UIImageView, UILabel;

@interface IGSaveToCollectionsCell : UICollectionViewCell {
  /* instance variables */
  UILabel *_title;
  UILabel *_subtitle;
  IGImageView *_thumbnail;
  UIImageView *_shoppingBag;
  UIImageView *_checkmark;
  IGMultiImageThumbnailView *_multiImageThumbnailView;
  BOOL _isSelected;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)highlighted;
- (void)prepareForReuse;
@end

#endif /* IGSaveToCollectionsCell_h */
