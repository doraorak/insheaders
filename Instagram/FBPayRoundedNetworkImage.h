//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayRoundedNetworkImage_h
#define FBPayRoundedNetworkImage_h
@import Foundation;

#include "UIView.h"

@class UIView;

@interface FBPayRoundedNetworkImage : UIView {
  /* instance variables */
  struct CGSize { double width; double height; } _imageSize;
  double _cornerRadius;
}

@property (readonly, nonatomic) UIView *imageView;

/* instance methods */
- (id)initWithImageSize:(struct CGSize { double x0; double x1; })size cornerRadius:(double)radius networkImageViewProvider:(id /* block */)provider;
- (void)_setupImageViewWithProvider:(id /* block */)provider;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
@end

#endif /* FBPayRoundedNetworkImage_h */
