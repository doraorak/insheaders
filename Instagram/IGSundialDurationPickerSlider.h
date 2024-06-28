//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialDurationPickerSlider_h
#define IGSundialDurationPickerSlider_h
@import Foundation;

#include "UIControl.h"
#include "IGSundialAnimatedGradientView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class CAShapeLayer, IGPanGestureRecognizer, NSMutableArray, NSString, UIImpactFeedbackGenerator, UIView;
@protocol IGSundialDurationPickerSliderDelegate;

@interface IGSundialDurationPickerSlider : UIControl<UIGestureRecognizerDelegate> {
  /* instance variables */
  IGSundialAnimatedGradientView *_gradientView;
  CAShapeLayer *_selectedRangeMask;
  UIView *_playbackProgressMask;
  CAShapeLayer *_playbackProgressMaskShape;
  CAShapeLayer *_dragIndicator;
  UIView *_sliderContentsWrapper;
  UIView *_backdropForegroundWrapper;
  UIView *_greyBackdrop;
  UIView *_foregroundView;
  NSMutableArray *_bars;
  IGPanGestureRecognizer *_panGesture;
  UIImpactFeedbackGenerator *_impactGenerator;
  BOOL _playbackProgressIndicatorHidden;
  double _minTime;
  double _maxTime;
  double _selectedDuration;
}

@property (nonatomic) BOOL isScrubbing;
@property (weak, nonatomic) NSObject<IGSundialDurationPickerSliderDelegate> *delegate;
@property (nonatomic) double startTime;
@property (nonatomic) double minDuration;
@property (nonatomic) double playbackTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)_handlePan:(id)pan;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)_handleTap:(id)tap;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
@end

#endif /* IGSundialDurationPickerSlider_h */
