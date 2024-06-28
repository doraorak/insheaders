//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialVideoPlaybackView_h
#define IGSundialVideoPlaybackView_h
@import Foundation;

#include "UIView.h"
#include "IGFNFVideoPlayable-Protocol.h"
#include "IGFNFVideoPlayerDelegate-Protocol.h"
#include "IGImageViewDelegate-Protocol.h"
#include "IGRenderingLoggingTrackable-Protocol.h"
#include "IGSundialStickerOverlayView.h"
#include "IGSundialVideoCoverFrame.h"
#include "IGSundialVideoPlaybackConfig.h"
#include "IGSundialVideoPlaybackSessionInfo.h"
#include "IGSundialVideoPlaybackViewDelegate-Protocol.h"
#include "IGSundialVideoPlaybackViewType-Protocol.h"
#include "IGSundialViewerMediaBackgroundView.h"
#include "IGSundialViewerMediaPrefetchManager.h"
#include "IGUserLauncherSet-Protocol.h"
#include "IGVideoPlayerManaging-Protocol.h"
#include "_TtC17IGZoomInteraction17IGZoomInteraction.h"
#include "_TtP17IGZoomInteraction25IGZoomInteractionDelegate_-Protocol.h"

@class IGImageView, IGImmersiveFeedBackgroundConfiguration, IGPhoto, IGUnifiedVideoBufferingManager, IGVideo, IGVideoPlayerConfig, IGVideoUploadCache, IGVideoViewLogger, NSDictionary, NSString, NSURL, UIView;
@protocol IGSundialVideoPlaybackAnnouncer, IGVideoPlayerStateProviding;

@interface IGSundialVideoPlaybackView : UIView<IGFNFVideoPlayerDelegate, IGImageViewDelegate, _TtP17IGZoomInteraction25IGZoomInteractionDelegate_, IGSundialVideoPlaybackViewType, IGRenderingLoggingTrackable> {
  /* instance variables */
  NSObject<IGFNFVideoPlayable> *_videoPlayer;
  IGVideo *_video;
  IGPhoto *_previewPhoto;
  IGSundialVideoCoverFrame *_coverFrame;
  NSObject<IGVideoPlayerManaging> *_videoPlayerManager;
  IGVideoPlayerConfig *_videoPlayerConfig;
  IGSundialVideoPlaybackConfig *_playbackViewConfig;
  IGVideoViewLogger *_videoViewLogger;
  long long _pendingPlaybackReason;
  IGSundialViewerMediaPrefetchManager *_mediaPrefetchManager;
  NSObject<IGUserLauncherSet> *_launcherSet;
  IGVideoUploadCache *_videoUploadCache;
  IGImmersiveFeedBackgroundConfiguration *_fallbackBackgroundConfiguration;
  BOOL _isImmersive;
  IGImageView *_previewImageView;
  IGSundialViewerMediaBackgroundView *_backgroundView;
  UIView *_videoPlayerView;
  _TtC17IGZoomInteraction17IGZoomInteraction *_zoomInteraction;
  IGUnifiedVideoBufferingManager *_bufferingManager;
  UIView *_transformationView;
  long long _fallbackMediaFrameMode;
  struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mediaFrame; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mediaFrameTransformed; struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform; double cornerRadius; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleContentFrame; } _mediaLayout;
  NSObject<IGSundialVideoPlaybackAnnouncer> *_playbackAnnouncer;
}

@property (retain, nonatomic) NSURL *videoURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isPlaying;
@property (weak, nonatomic) NSObject<IGSundialVideoPlaybackViewDelegate> *delegate;
@property (readonly, nonatomic) NSObject<IGVideoPlayerStateProviding> *videoPlayerStateProvider;
@property (readonly, nonatomic) UIView *mediaContainerView;
@property (readonly, nonatomic) NSURL *previewImageURL;
@property (readonly, nonatomic) BOOL audioEnabled;
@property (nonatomic) double initialStartTime;
@property (readonly, nonatomic) IGSundialVideoPlaybackSessionInfo *playbackSessionInfo;
@property (readonly, nonatomic) NSDictionary *playerLoggingData;
@property (readonly, nonatomic) IGSundialStickerOverlayView *stickerOverlayView;
@property (nonatomic) long long videoContentMode;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame ringViewSpecFactory:(id)factory;
- (void)dealloc;
- (id)mediaView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)didMoveToWindow;
- (void)configureWithVideo:(id)video media:(id)media coverFrame:(id)frame videoPlayerManager:(id)manager videoPlayerConfig:(id)config playbackViewConfig:(id)config accessibilityLabel:(id)label mediaPrefetchManager:(id)manager isPinchToZoomEnabled:(BOOL)enabled userSession:(id)session backgroundModel:(id)model fallbackBackgroundConfiguration:(id)configuration backgroundHandler:(id)handler fallbackMediaFrameMode:(long long)mode isImmersive:(BOOL)immersive stickerOverlayView:(id)view playerProvider:(id)provider isAudioEnabled:(BOOL)enabled bloksContext:(id)context firstSwipeMode:(unsigned long long)mode effectId:(id)id;
- (void)addVideoPlaybackListener:(id)listener;
- (BOOL)accessibilityActivate;
- (void)setAudioEnabled:(BOOL)enabled forReason:(long long)reason;
- (void)setupViewabilityWithVideoViewLogger:(id)logger;
- (void)playWithReason:(long long)reason;
- (void)stopWithReason:(long long)reason;
- (void)pauseWithReason:(long long)reason;
- (void)seekToTime:(double)time preciseTime:(BOOL)time trigger:(long long)trigger completionHandler:(id /* block */)handler;
- (void)prepareForPlayback;
- (void)setVolume:(double)volume;
- (void)setPlaybackSpeed:(float)speed;
- (id)playbackSpeed;
- (void)videoPlayer:(id)player willLoadVideoInView:(id)view playbackReason:(long long)reason;
- (void)videoPlayer:(id)player didLoadVideoInView:(id)view playbackReason:(long long)reason;
- (void)videoPlayerDidPlay:(id)play;
- (void)videoPlayer:(id)player didUpdatePlaybackProgress:(double)progress;
- (void)videoPlayerDidLoop:(id)loop;
- (void)videoPlayerDidPlayToEnd:(id)end;
- (void)videoPlayerItemTimeFullyLoaded:(id)loaded;
- (void)videoPlayerWillPrepareAssetForPlayback:(id)playback;
- (void)videoPlayerBufferEmpty:(id)empty;
- (void)videoPlayer:(id)player didFailToPlaybackWithError:(id)error;
- (void)videoPlayer:(id)player didGenerateWarningWithError:(id)error;
- (void)videoPlayerDidPause:(id)pause reason:(long long)reason;
- (void)videoPlayer:(id)player didUpdateLoadingProgress:(double)progress;
- (void)videoPlayer:(id)player didBeginSeekingToTime:(double)time;
- (void)videoPlayerDidFinishSeeking:(id)seeking;
- (void)videoPlayerDidUpdateAvailableAudioAutoTranslateLanguages:(id)languages;
- (void)imageView:(id)view didLoadImageFromSource:(unsigned long long)source networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateLoadingState:(id)state;
- (void)imageView:(id)view didFailToLoadImageWithError:(id)error networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateDownloadProgress:(double)progress;
- (void)imageView:(id)view willRequestImageWithURL:(id)url;
- (void)zoomInteraction:(id)interaction willBeginForView:(id)view withLogging:(id)logging;
- (void)zoomInteraction:(id)interaction didEndForView:(id)view withLogging:(id)logging;
- (id)renderedComponent;
- (void)setOverlayAlpha:(double)alpha;
- (BOOL)_shouldDisableBackgroundView;
- (void)overlayDidLayoutWithMediaLayout:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x2; double x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; })layout;
- (void)overlayDidLayoutWithProgressIndicatorDesiredMinY:(double)y shouldLayout:(BOOL)layout frameMode:(long long)mode;
- (void)overlayDidLayoutWithMinTopYForBottomAFI:(double)afi shouldLayout:(BOOL)layout frameMode:(long long)mode;
- (double)currentPlaybackTime;
- (double)totalPlaybackTime;
- (void)currentFrameWithCompletion:(id /* block */)completion;
- (id)previewImageIfAvailable;
- (id)videoViewIfAvailable;
- (void)setAutoTranslateLanguage:(id)language autoTranslateEnabled:(BOOL)enabled;
- (id)availableAutoTranslateLanguages;
- (id)selectedAutoTranslateLanguage;
- (BOOL)isAudioEnabled;
@end

#endif /* IGSundialVideoPlaybackView_h */
