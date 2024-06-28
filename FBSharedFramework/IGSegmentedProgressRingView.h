//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSegmentedProgressRingView_h
#define IGSegmentedProgressRingView_h
@import Foundation;

#include "UIView.h"

@class CALayer, CAShapeLayer, NSMutableArray, UIView;

@interface IGSegmentedProgressRingView : UIView {
  /* instance variables */
  CAShapeLayer *_progressRingLayer;
  CAShapeLayer *_remainingProgressLayer;
  CALayer *_gradientLayer;
  UIView *_gradientView;
  double _radius;
  double _startingAngle;
  double _newStart;
  struct CGPoint { double x; double y; } _center;
  NSMutableArray *_segmentEndpoints;
}

/* instance methods */
- (id)initWithRingWidth:(double)width frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame gradientLayerConfig:(id)config;
- (void)layoutSubviews;
- (void)_retractLastProgress:(double)progress;
- (void)setEDR:(BOOL)edr;
@end

#endif /* IGSegmentedProgressRingView_h */
