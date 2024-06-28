//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFacepileComponentView_h
#define IGFacepileComponentView_h
@import Foundation;

#include "UIView.h"
#include "IGGradientView.h"
#include "IGProfilePictureImageView.h"

@class UIView;

@interface IGFacepileComponentView : UIView {
  /* instance variables */
  IGProfilePictureImageView *_leftImageView;
  UIView *_leftBackgroundView;
  IGProfilePictureImageView *_rightImageView;
  UIView *_rightBackgroundView;
  IGProfilePictureImageView *_centerImageView;
  UIView *_centerBackgroundView;
  IGGradientView *_leftImageGradientView;
  UIView *_fbIconBackgroundView;
  long long _layoutType;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame layoutType:(long long)type;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* IGFacepileComponentView_h */