//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTickSlider_h
#define IGTickSlider_h
@import Foundation;

#include "UIControl.h"
#include "POPAnimationDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class CALayer, NSString, UIButton, UIImageView, UILabel, UIPanGestureRecognizer, UIView;

@interface IGTickSlider : UIControl<UIGestureRecognizerDelegate, POPAnimationDelegate> {
  /* instance variables */
  BOOL _didIncrement;
  BOOL _shouldDisplayValue;
  UIView *_scrollWheel;
  double _unitDisplacement;
  UILabel *_angleLabel;
  UIButton *_angleResetButton;
  UIImageView *_bug;
  double _panValueOrigin;
  CALayer *_maskLayer;
  struct CGPoint { double x; double y; } _panOrigin;
}

@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) double value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_resetAngle;
- (void)layoutSubviews;
- (void)setValue:(double)value animated:(BOOL)animated;
- (void)_handleTap:(id)tap;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)_onPan:(id)pan;
- (void)setUserInteractionEnabled:(BOOL)enabled;
- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
@end

#endif /* IGTickSlider_h */
