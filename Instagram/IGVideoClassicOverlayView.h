//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoClassicOverlayView_h
#define IGVideoClassicOverlayView_h
@import Foundation;

#include "UIView.h"
#include "IGDebuggingMediaLinesView.h"
#include "IGDoubleTapAwareTapGestureRecognizer.h"
#include "IGFeedItemVideoViewOptions.h"
#include "IGFeedVideoPreviewOverlayView.h"
#include "IGFeedVideoTimeIndicatorView.h"
#include "IGMediaIndicatorDelegate-Protocol.h"
#include "IGPlaybackTimeIndicatorController.h"
#include "IGTooltipViewDelegate-Protocol.h"
#include "IGVideoIndicatorView.h"
#include "IGVideoLoadProgressView.h"
#include "IGVideoPlaybackController.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGGradientView, IGMediaIndicator, IGMediaIndicatorConfiguration, IGVideoPlayButton, NSString, UIImageView, UITapGestureRecognizer;
@protocol IGVideoClassicOverlayViewDelegate, UIControl<IGVideoCaptionViewType;

@interface IGVideoClassicOverlayView : UIView<IGMediaIndicatorDelegate, IGTooltipViewDelegate, UIGestureRecognizerDelegate> {
  /* instance variables */
  IGFeedVideoTimeIndicatorView *_timeIndicatorView;
  IGPlaybackTimeIndicatorController *_timeIndicatorController;
  IGVideoPlayButton *_playButton;
  IGVideoIndicatorView *_videoIndicator;
  IGMediaIndicator *_productTypeIndicator;
  IGMediaIndicatorConfiguration *_indicatorConfiguration;
  UITapGestureRecognizer *_doubleTapGestureRecognizer;
  IGDoubleTapAwareTapGestureRecognizer *_singleTapGestureRecognizer;
  IGFeedVideoPreviewOverlayView *_previewOverlayView;
  double _remainingTimeForPreviewOverlay;
  long long _loopCount;
  IGVideoLoadProgressView *_debuggingLoadProgressView;
  IGDebuggingMediaLinesView *_debuggingMediaLinesView;
  BOOL _hasCollapsedProductIndicator;
  BOOL _replayButtonEnabled;
  BOOL _backdropTapGestureEnabled;
  UIImageView *_reelsIconImageView;
  IGGradientView *_topGradientView;
  BOOL _lazyLoadEnabled;
}

@property (weak, nonatomic) NSObject<IGVideoClassicOverlayViewDelegate> *delegate;
@property (weak, nonatomic) IGVideoPlaybackController *videoPlaybackController;
@property (readonly, nonatomic) IGFeedItemVideoViewOptions *options;
@property (readonly, nonatomic) IGMediaIndicator *audioIndicator;
@property (readonly, nonatomic) IGMediaIndicator *tagIndicator;
@property (retain, nonatomic) UIControl<IGVideoCaptionViewType> *captionView;
@property (nonatomic) BOOL doubleTapGestureEnabled;
@property (nonatomic) BOOL shouldShowCaptionView;
@property (nonatomic) BOOL shouldShowPreviewOverlayView;
@property (nonatomic) BOOL videoIndicatorEnabled;
@property (nonatomic) long long videoIndicatorStyle;
@property (nonatomic) BOOL enableAutomatedLogging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame lazyLoadEnabled:(BOOL)enabled;
- (void)layoutSubviews;
- (void)configureWithOptions:(id)options indicatorConfiguration:(id)configuration replayButtonEnabled:(BOOL)enabled backdropTapGestureEnabled:(BOOL)enabled;
- (void)setIsLoadingVideoWithDurationLeft:(double)left;
- (void)showProductTypeIndicatorIfNeededAnimated:(BOOL)animated;
- (void)showUnifiedIndicatorExpanded:(BOOL)expanded withCollapseDelay:(double)delay;
- (void)hideAllIndicatorsAnimated:(BOOL)animated;
- (void)hidePreviewOverlayButtons:(BOOL)buttons animated:(BOOL)animated;
- (void)_updateTagIndicatorVisibilityAnimated:(BOOL)animated;
- (void)_setupTagIndicatorIfNeeded;
- (BOOL)_canShowTagIndicator;
- (void)_updateProductTypeIndicatorVisibilityAnimated:(BOOL)animated;
- (void)_setupProductTypeIndicatorIfNeeded;
- (BOOL)_canShowVideoProductTypeIndicator;
- (void)_setupPreviewOverlayIfNeeded;
- (void)_onTap:(id)tap;
- (void)_onDoubleTap:(id)tap;
- (void)_didTapCaptionView;
- (void)videoPlaybackController:(id)controller didBeginPlayingItem:(id)item;
- (void)videoPlaybackController:(id)controller didUpdatePlaybackProgressForItem:(id)item progress:(double)progress;
- (void)videoPlaybackControllerDidStopPlayback:(id)playback;
- (void)videoPlaybackControllerDidEmptyPlaybackBuffer:(id)buffer;
- (void)videoPlaybackControllerDidFinishSeeking:(id)seeking;
- (void)videoPlaybackController:(id)controller didStartLoadingItem:(id)item;
- (void)videoPlaybackController:(id)controller didToggleAudioWithReason:(long long)reason;
- (void)videoPlaybackController:(id)controller didUpdateLoadingProgressForItem:(id)item progress:(double)progress;
- (void)videoPlaybackController:(id)controller didRequestItem:(id)item;
- (void)videoPlaybackController:(id)controller didLoadVideoForItem:(id)item;
- (void)videoPlaybackController:(id)controller didPauseItem:(id)item reason:(long long)reason;
- (void)videoPlaybackController:(id)controller didEndPlayingItem:(id)item;
- (void)videoPlaybackController:(id)controller didFailPlayingItem:(id)item error:(id)error;
- (void)videoPlaybackController:(id)controller didLoopItem:(id)item;
- (void)videoPlaybackController:(id)controller didApplySettingsForItem:(id)item;
- (void)_updateDebuggingLinesViewVisibility;
- (void)didTapTooltipView:(id)view;
- (void)feedPreviewOverlayView:(id)view didTapReplayButton:(id)button;
- (void)feedPreviewOverlayView:(id)view didTapKeepWatchingButton:(id)button;
- (void)feedPreviewOverlayView:(id)view didTapReshareButton:(id)button;
- (void)feedPreviewOverlayView:(id)view didTapFanClubDiscoverButton:(id)button;
- (void)feedPreviewOverlayViewDidTapBackdrop:(id)backdrop;
- (void)mediaIndicatorTapped:(id)tapped;
- (void)mediaIndicator:(id)indicator willChangeToState:(unsigned long long)state previousState:(unsigned long long)state;
- (void)mediaIndicator:(id)indicator didChangeToState:(unsigned long long)state previousState:(unsigned long long)state;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)playbackTimeIndicatorControllerDidHideIndicatorView:(id)view;
- (void)playbackTimeIndicatorControllerDidFinishTimer:(id)timer;
- (void)_updateOverlayVisibilityForPreviewOverlay;
- (void)_configureTimeIndicatorControllerWithOptions:(id)options;
- (id)_unhiddenOverlayButtonStyle;
@end

#endif /* IGVideoClassicOverlayView_h */