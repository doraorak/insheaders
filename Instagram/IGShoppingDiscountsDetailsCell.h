//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingDiscountsDetailsCell_h
#define IGShoppingDiscountsDetailsCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGShoppingDiscountsDetailsViewModel.h"

@class IGTapButton, UILabel;
@protocol IGShoppingDiscountsDetailsCellDelegate;

@interface IGShoppingDiscountsDetailsCell : UICollectionViewCell {
  /* instance variables */
  IGShoppingDiscountsDetailsViewModel *_viewModel;
  UILabel *_discountTitle;
  UILabel *_discountExpirationLabel;
  UILabel *_discountDescription;
  IGTapButton *_ctaButton;
}

@property (weak, nonatomic) NSObject<IGShoppingDiscountsDetailsCellDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_didTapCtaButton:(id)button;
- (void)configureWithViewModel:(id)model;
@end

#endif /* IGShoppingDiscountsDetailsCell_h */
