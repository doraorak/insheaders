//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSuggestionsUnitHeaderCell_h
#define IGSuggestionsUnitHeaderCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGSuggestionsUnitHeaderViewModel.h"

@class UIImageView, UILabel;

@interface IGSuggestionsUnitHeaderCell : UICollectionViewCell {
  /* instance variables */
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  UIImageView *_iconView;
  IGSuggestionsUnitHeaderViewModel *_model;
}

/* class methods */
+ (double)_heightForTextLabelWithCellWidth:(double)width text:(id)text font:(id)font;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)configureWithModel:(id)model;
@end

#endif /* IGSuggestionsUnitHeaderCell_h */
