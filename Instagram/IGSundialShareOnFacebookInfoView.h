//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialShareOnFacebookInfoView_h
#define IGSundialShareOnFacebookInfoView_h
@import Foundation;

#include "UIView.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface IGSundialShareOnFacebookInfoView : UIView {
  /* instance variables */
  UIImageView *_imageView;
  UILabel *_label;
}

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *text;

/* instance methods */
- (id)init;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* IGSundialShareOnFacebookInfoView_h */