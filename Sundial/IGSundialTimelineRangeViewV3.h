//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialTimelineRangeViewV3_h
#define IGSundialTimelineRangeViewV3_h
@import Foundation;

#include "UIView.h"

@class CAShapeLayer, UIView;

@interface IGSundialTimelineRangeViewV3 : UIView {
  /* instance variables */
  UIView *_leftHandleMark;
  UIView *_rightHandleMark;
  CAShapeLayer *_rangeRectangle;
  CAShapeLayer *_rangeRectangleMask;
  BOOL _displayHandle;
  BOOL _useMaskSideOffset;
  double _leftMaskOffset;
  double _rightMaskOffset;
  double _rangeAlpha;
  double _maskCornerR;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
@end

#endif /* IGSundialTimelineRangeViewV3_h */
