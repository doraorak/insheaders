//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEffectSlider_h
#define IGEffectSlider_h
@import Foundation;

#include "UIControl.h"
#include "IGPanGestureRecognizer.h"
#include "IGPanGestureRecognizerStateUpdateDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class CAGradientLayer, CALayer, CAShapeLayer, NSString, UIColor, UISelectionFeedbackGenerator;
@protocol IGEffectSliderDelegate;

@interface IGEffectSlider : UIControl<IGPanGestureRecognizerStateUpdateDelegate, UIGestureRecognizerDelegate> {
  /* instance variables */
  CAShapeLayer *_trackLayer;
  CAGradientLayer *_trackerGradientLayer;
  CAShapeLayer *_thumbLayer;
  CAShapeLayer *_snapLayer;
  IGPanGestureRecognizer *_panGesture;
  double _valueWhenSlidingBegan;
  UISelectionFeedbackGenerator *_feedbackGenerator;
  unsigned long long _sliderType;
  long long _sliderSteps;
  double _thumbDiameterDefault;
  CALayer *_thumbImageLayer;
  BOOL _hideThumbAtStart;
  BOOL _registerTouchesInTrack;
  BOOL _isSliding;
  UIColor *_trackColorCollapsed;
  UIColor *_trackColorExpanded;
  double _trackWidthCollapsed;
  double _trackWidthExpanded;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _thumbHitTestExpansion;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _trackHitTestExpansion;
}

@property (nonatomic) double expansionPercentage;
@property (weak, nonatomic) NSObject<IGEffectSliderDelegate> *delegate;
@property (nonatomic) double value;
@property (nonatomic) double thumbDiameter;
@property (nonatomic) BOOL expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)panGestureRecognizer:(id)recognizer didUpdateToState:(long long)state;
- (void)_didPan:(id)pan;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)setIsSliding:(BOOL)sliding;
- (void)showThumb;
@end

#endif /* IGEffectSlider_h */
