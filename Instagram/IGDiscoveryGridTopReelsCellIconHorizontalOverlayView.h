//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoveryGridTopReelsCellIconHorizontalOverlayView_h
#define IGDiscoveryGridTopReelsCellIconHorizontalOverlayView_h
@import Foundation;

#include "UIView.h"
#include "IGVideoIconCountLabel.h"

@class IGGradientView, UIImageView, UILabel;

@interface IGDiscoveryGridTopReelsCellIconHorizontalOverlayView : UIView {
  /* instance variables */
  UILabel *_titleLabel;
  IGGradientView *_gradientView;
  UIImageView *_iconView;
  IGVideoIconCountLabel *_playCountLabel;
}

/* instance methods */
- (id)initWithTitle:(id)title withPlayCount:(id)count shouldShowPlayCount:(BOOL)count;
- (void)layoutSubviews;
@end

#endif /* IGDiscoveryGridTopReelsCellIconHorizontalOverlayView_h */