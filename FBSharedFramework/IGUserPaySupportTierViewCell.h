//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserPaySupportTierViewCell_h
#define IGUserPaySupportTierViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGImageView.h"
#include "IGTextButton.h"

@class UIView;
@protocol IGUserPaySupportTierViewCellDelegate;

@interface IGUserPaySupportTierViewCell : UICollectionViewCell {
  /* instance variables */
  IGImageView *_tierIcon;
  IGTextButton *_priceButton;
  UIView *_separator;
  long long _supportTier;
}

@property (weak, nonatomic) NSObject<IGUserPaySupportTierViewCellDelegate> *delegate;

/* class methods */
+ (double)preferredHeight;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_priceButtonTappped;
- (void)layoutSubviews;
@end

#endif /* IGUserPaySupportTierViewCell_h */
