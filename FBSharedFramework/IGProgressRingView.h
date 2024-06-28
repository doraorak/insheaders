//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProgressRingView_h
#define IGProgressRingView_h
@import Foundation;

#include "UIView.h"

@class CALayer, CAShapeLayer, UIColor;

@interface IGProgressRingView : UIView {
  /* instance variables */
  CAShapeLayer *_progress;
  CALayer *_gradientLayer;
  double _ringWidth;
  BOOL _edr;
  UIColor *_baseBackgroundColor;
}

/* instance methods */
- (id)initWithRingWidth:(double)width frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame gradientLayerConfig:(id)config;
- (id)initWithRingWidth:(double)width frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame ringColor:(id)color;
- (void)layoutSubviews;
- (void)setEDR:(BOOL)edr;
@end

#endif /* IGProgressRingView_h */