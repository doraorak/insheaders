//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSaveHomeNewCollectionCell_h
#define IGSaveHomeNewCollectionCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGSavedMediaCollectionSubtitleView.h"

@class IGImageView, UILabel;

@interface IGSaveHomeNewCollectionCell : UICollectionViewCell {
  /* instance variables */
  double _topPadding;
  double _leftPadding;
  double _rightPadding;
  IGImageView *_thumbnail;
  UILabel *_titleLabel;
  IGSavedMediaCollectionSubtitleView *_subtitleView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)traitCollectionDidChange:(id)change;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithTitle:(id)title subtitleModel:(id)model iconImage:(id)image backgroundColor:(id)color collectionIndex:(unsigned long long)index analyticsModule:(id)module;
@end

#endif /* IGSaveHomeNewCollectionCell_h */
