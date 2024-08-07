//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAnimatedCheckmarkView_h
#define IGAnimatedCheckmarkView_h
@import Foundation;

#include "UIView.h"
#include "CAAnimationDelegate-Protocol.h"

@class CALayer, CAShapeLayer, NSString, UIView;

@interface IGAnimatedCheckmarkView : UIView<CAAnimationDelegate> {
  /* instance variables */
  UIView *_contentView;
  CALayer *_circleCheckmarkContainerLayer;
  CAShapeLayer *_circleLayer;
  CAShapeLayer *_checkmarkLayer;
  BOOL _willAnimate;
  double _staticStrokeWidth;
}

@property (nonatomic) double animationDuration;
@property (retain, nonatomic) CALayer *maskLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_animateCheckmark;
- (void)animationDidStop:(id)stop finished:(BOOL)finished;
@end

#endif /* IGAnimatedCheckmarkView_h */
