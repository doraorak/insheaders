//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingDeletedProductCardCell_h
#define IGShoppingDeletedProductCardCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGShoppingBlurredMerchantInfoView, NSString, UIButton, UILabel;
@protocol IGShoppingDeletedProductCardCellDelegate;

@interface IGShoppingDeletedProductCardCell : UICollectionViewCell<UIGestureRecognizerDelegate> {
  /* instance variables */
  IGShoppingBlurredMerchantInfoView *_blurredInfoView;
  UILabel *_descriptionLabel;
  UIButton *_dismissButton;
}

@property (weak, nonatomic) NSObject<IGShoppingDeletedProductCardCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_dismissButtonDidTap:(id)tap;
- (void)prepareForReuse;
@end

#endif /* IGShoppingDeletedProductCardCell_h */
