//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef CDSAmbientBackgroundView_h
#define CDSAmbientBackgroundView_h
@import Foundation;

#include "UIView.h"

@class CALayer;

@interface CDSAmbientBackgroundView : UIView {
  /* instance variables */
  CALayer *_blueLayer;
  CALayer *_greenLayer;
  CALayer *_yellowLayer;
  CALayer *_coralLayer;
  CALayer *_blue2Layer;
  CALayer *_purpleLayer;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousFrame;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* CDSAmbientBackgroundView_h */
