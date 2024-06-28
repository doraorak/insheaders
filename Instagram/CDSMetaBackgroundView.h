//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef CDSMetaBackgroundView_h
#define CDSMetaBackgroundView_h
@import Foundation;

#include "UIView.h"

@class CAGradientLayer, CALayer;

@interface CDSMetaBackgroundView : UIView {
  /* instance variables */
  struct CDSMetaBackgroundOptions { struct CDSMetaBackgroundOpacity { double light; double dark; } opacity; struct CDSMetaBackgroundGradient { UIColor *startColor; UIColor *endColor; } blueGradient; struct CDSMetaBackgroundShape { UIColor *color; double blurRadius; } greenShape; struct CDSMetaBackgroundShape { UIColor *color; double blurRadius; } purpleShape; struct CDSMetaBackgroundShape { UIColor *color; double blurRadius; } coralShape; struct CDSMetaBackgroundShape { UIColor *color; double blurRadius; } yellowShape; struct CDSMetaBackgroundGradient { UIColor *startColor; UIColor *endColor; } lightLeakGradient; } _options;
  CAGradientLayer *_blueLayer;
  CALayer *_greenLayer;
  CALayer *_purpleLayer;
  CALayer *_coralLayer;
  CALayer *_yellowLayer;
  CAGradientLayer *_lightLeakLayer;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame options:(struct CDSMetaBackgroundOptions { struct CDSMetaBackgroundOpacity { double x0; double x1; } x0; struct CDSMetaBackgroundGradient { id x0; id x1; } x1; struct CDSMetaBackgroundShape { id x0; double x1; } x2; struct CDSMetaBackgroundShape { id x0; double x1; } x3; struct CDSMetaBackgroundShape { id x0; double x1; } x4; struct CDSMetaBackgroundShape { id x0; double x1; } x5; struct CDSMetaBackgroundGradient { id x0; id x1; } x6; })options;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* CDSMetaBackgroundView_h */