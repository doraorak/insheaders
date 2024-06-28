//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteSectionHeaderWithIconCell_h
#define IGPromoteSectionHeaderWithIconCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGPromoteSectionHeaderWithIconViewModel.h"

@class IGCoreTextView, UIImageView;
@protocol IGPromoteSectionHeaderWithIconViewCellDelegate;

@interface IGPromoteSectionHeaderWithIconCell : UICollectionViewCell {
  /* instance variables */
  IGPromoteSectionHeaderWithIconViewModel *_viewModel;
  IGCoreTextView *_titleView;
  UIImageView *_trailingIconImageView;
}

@property (weak, nonatomic) NSObject<IGPromoteSectionHeaderWithIconViewCellDelegate> *delegate;

/* instance methods */
- (void)configureWithViewModel:(id)model;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)_didTapTrailingIcon;
@end

#endif /* IGPromoteSectionHeaderWithIconCell_h */
