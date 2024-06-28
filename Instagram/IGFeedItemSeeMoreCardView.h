//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemSeeMoreCardView_h
#define IGFeedItemSeeMoreCardView_h
@import Foundation;

#include "UIVisualEffectView.h"

@class IGCenterLayout, IGGradientView, IGImageView, IGProfilePictureImageView, UILabel;

@interface IGFeedItemSeeMoreCardView : UIVisualEffectView {
  /* instance variables */
  IGImageView *_imageView;
  UILabel *_titleLabel;
  IGGradientView *_tintView;
  UILabel *_descriptionLabel;
  UILabel *_upperDescriptionLabel;
  IGCenterLayout *_contentCenterLayout;
  IGProfilePictureImageView *_profilePic;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)_layout;
- (id)_createTitleLabel;
- (id)_createDescriptionLabel;
- (void)layoutSubviews;
@end

#endif /* IGFeedItemSeeMoreCardView_h */
