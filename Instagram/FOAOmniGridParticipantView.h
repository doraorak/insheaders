//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FOAOmniGridParticipantView_h
#define FOAOmniGridParticipantView_h
@import Foundation;

#include "FOAZAnimatableView.h"
#include "FOAOmniGridCallStatusView.h"
#include "FOAOmniGridItemView-Protocol.h"
#include "FOAOmniGridScreenshotableViewsProviding-Protocol.h"
#include "FOAScreenShareSelfOverlayView.h"

@class CALayer, NSString, UIActivityIndicatorView, UILabel, UITapGestureRecognizer, UIView, UIVisualEffectView;

@interface FOAOmniGridParticipantView : FOAZAnimatableView<FOAOmniGridItemView, FOAOmniGridScreenshotableViewsProviding> {
  /* instance variables */
  id _context;
  UIView *_videoView;
  UIView *_videoDimmingView;
  UIView *_debugOverlayView;
  CALayer *_dominantSpeakerIndicatorLayer;
  UIVisualEffectView *_blurView;
  UIView *_profileImageBackgroundView;
  FOAOmniGridCallStatusView *_callStatusView;
  UIView *_participantSummaryView;
  UIView *_roundedCornerOverlay;
  UIView *_muteIconView;
  UIActivityIndicatorView *_loadingIndicator;
  UIView *_expandButton;
  UIView *_videoEffectIconView;
  UIView *_animatedVideoEffectIconView;
  UIView *_moreOptionsButton;
  UILabel *_effectInstructionView;
  FOAScreenShareSelfOverlayView *_screenShareOverlayView;
  UIView *_reactionView;
  UITapGestureRecognizer *_videoEffectIconTapGesture;
  id /* block */ _moreOptionsActionBlock;
  id /* block */ _videoEffectIconActionBlock;
  id /* block */ _screenShareOverlayActionBlock;
  id /* block */ _expandButtonActionBlock;
  id /* block */ _videoEscalationActionBlock;
}

@property (nonatomic) long long videoScaleType;
@property (nonatomic) double videoScaleMinimumUncroppedThreshold;
@property (nonatomic) unsigned long long controlLocation;
@property (retain, nonatomic) id viewModel;
@property (nonatomic) BOOL usesRoundedCornerOverlay;
@property (nonatomic) double selfViewAspectFitRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContext:(id)context;
- (void)layoutSubviews;
- (void)willRemoveSubview:(id)subview;
- (void)didEndDisplaying;
- (BOOL)isVideoViewStolen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })controlRectForControlLocation:(unsigned long long)location;
- (id)screenshotableViews;
- (void)_didTapExpandButton;
- (void)_didTapMoreOptionsButton:(id)button;
- (void)_didTapVideoEffectIcon:(id)icon;
- (void)_handleUIApplicationWillResignActiveNotification:(id)notification;
- (void)_handleUIApplicationDidBecomeActiveNotification:(id)notification;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElements;
- (void)videoSizeChangedForInfo:(id)info;
- (void)hasVideoStartedChangedForInfo:(id)info;
@end

#endif /* FOAOmniGridParticipantView_h */