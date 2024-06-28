//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC23IGSearchNullStateUpsell36IGSearchNullStateUpsellMegaphoneCell_h
#define _TtC23IGSearchNullStateUpsell36IGSearchNullStateUpsellMegaphoneCell_h
@import Foundation;

#include "IGBaseCollectionViewCell.h"

@interface _TtC23IGSearchNullStateUpsell36IGSearchNullStateUpsellMegaphoneCell : IGBaseCollectionViewCell { // (Swift)
  /* instance variables */
   viewModel;
   megaphoneCellDelegate;
   titleTextView;
   bodyTextView;
   primaryButtonView;
   iconImageView;
   dismissButton;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)didTapDismissButton;
- (void)didTapPrimaryButton;
@end

#endif /* _TtC23IGSearchNullStateUpsell36IGSearchNullStateUpsellMegaphoneCell_h */