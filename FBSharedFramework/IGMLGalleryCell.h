//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMLGalleryCell_h
#define IGMLGalleryCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGAsyncTask.h"

@class UIImageView, UILabel;

@interface IGMLGalleryCell : UICollectionViewCell {
  /* instance variables */
  IGAsyncTask *_fetchAssetTask;
  UIImageView *_imageView;
  UILabel *_metadataLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;
@end

#endif /* IGMLGalleryCell_h */
