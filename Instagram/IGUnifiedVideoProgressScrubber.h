//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUnifiedVideoProgressScrubber_h
#define IGUnifiedVideoProgressScrubber_h
@import Foundation;

#include "UIControl.h"
#include "IGDirectionalPanGestureRecognizerDelegate-Protocol.h"
#include "IGEDRViewType-Protocol.h"
#include "IGUnifiedVideoProgressScrubberConfiguration.h"
#include "IGUserLauncherSet-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class CAShapeLayer, IGDSBlurView, NSString, UIGestureRecognizer, UISelectionFeedbackGenerator, UITapGestureRecognizer, UIView;
@protocol IGUnifiedVideoProgressScrubberDelegate;

@interface IGUnifiedVideoProgressScrubber : UIControl<UIGestureRecognizerDelegate, IGDirectionalPanGestureRecognizerDelegate, IGEDRViewType> {
  /* instance variables */
  IGUnifiedVideoProgressScrubberConfiguration *_configuration;
  NSObject<IGUserLauncherSet> *_launcherSet;
  UIView *_trackBackgroundView;
  UIView *_progressView;
  UIView *_handleView;
  IGDSBlurView *_trackBackgroundBlurView;
  CAShapeLayer *_trackBackgroundBlurMaskingView;
  UIGestureRecognizer *_scrubberGestureRecognizer;
  UITapGestureRecognizer *_tapGestureRecognizer;
  double _gestureStartTime;
  struct CGPoint { double x; double y; } _gestureStartLocation;
  struct CGPoint { double x; double y; } _previousGestureLocation;
  struct CGPoint { double x; double y; } _scrubberLocationAtGestureStart;
  BOOL _isScrubbing;
  unsigned long long _currentScrubSpeed;
  UISelectionFeedbackGenerator *_feedbackGenerator;
  BOOL _edr;
  BOOL _autoAdvanceModeEnabled;
  BOOL _shouldAnimateCountdown;
  BOOL _countdownProgressMode;
}

@property (nonatomic) double progress;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } hitTestExpansion;
@property (nonatomic) long long scrubberState;
@property (nonatomic) BOOL isVariableSpeedScrubbingEnabled;
@property (weak, nonatomic) NSObject<IGUnifiedVideoProgressScrubberDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfiguration:(id)configuration launcherSet:(id)set;
- (void)_handleTap:(id)tap;
- (void)setEDR:(BOOL)edr;
- (void)setInteractionEnabled:(BOOL)enabled;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)setAutoAdvanceModeEnabled:(BOOL)enabled progressMode:(BOOL)mode;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (BOOL)directionalPanGestureRecognizerShouldBegin:(id)begin;
- (void)directionalPanGestureRecognizerDidFail:(id)fail;
- (void)_didPanScrubber:(id)scrubber;
- (void)_handleVariableSpeedPanGesture:(id)gesture;
- (void)_handlePanGesture:(id)gesture;
- (double)_collapsedHeight;
- (double)_expandedHeight;
- (void)_generateFeedbackIfNecessaryForPreviousSpeed:(unsigned long long)speed;
- (unsigned long long)_scrubberSpeedForLocation:(struct CGPoint { double x0; double x1; })location startLocation:(struct CGPoint { double x0; double x1; })location;
- (void)_resetScrubber;
- (BOOL)_shouldEnableAutoAdvance;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void)_updateProgressWithAccessibilityChange:(double)change;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
@end

#endif /* IGUnifiedVideoProgressScrubber_h */
