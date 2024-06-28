//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQuietBroadcastingBannerView_h
#define IGQuietBroadcastingBannerView_h
@import Foundation;

#include "UIView.h"

@class UIImageView, UILabel, UIView;

@interface IGQuietBroadcastingBannerView : UIView {
  /* instance variables */
  UILabel *_titleLabel;
  UIImageView *_iconView;
  UIView *_bottomDivider;
}

/* class methods */
+ (struct CGSize { double x0; double x1; })preferredSizeWithConstrainingSize:(struct CGSize { double x0; double x1; })size;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setBottomDividerVisible:(BOOL)visible;
@end

#endif /* IGQuietBroadcastingBannerView_h */
