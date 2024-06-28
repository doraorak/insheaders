//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGARBrandAdsSponsorView_h
#define IGARBrandAdsSponsorView_h
@import Foundation;

#include "UIButton.h"

@class IGImageView, UILabel;

@interface IGARBrandAdsSponsorView : UIButton {
  /* instance variables */
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  IGImageView *_imageView;
}

/* instance methods */
- (id)init;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model;
@end

#endif /* IGARBrandAdsSponsorView_h */
