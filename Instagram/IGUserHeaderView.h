//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserHeaderView_h
#define IGUserHeaderView_h
@import Foundation;

#include "UIView.h"

@class IGProfilePictureImageView, UIControl, UIImageView, UILabel;

@interface IGUserHeaderView : UIView

@property (retain, nonatomic) UIControl *followButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) IGProfilePictureImageView *imageView;
@property (retain, nonatomic) UIImageView *verifiedImageView;

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
@end

#endif /* IGUserHeaderView_h */
