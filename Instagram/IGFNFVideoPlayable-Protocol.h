//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFNFVideoPlayable_Protocol_h
#define IGFNFVideoPlayable_Protocol_h
@import Foundation;

@protocol IGFNFVideoPlayable <NSObject, FNFLoopingAssetListener, AVPictureInPictureSampleBufferPlaybackDelegate, AVPictureInPictureControllerDelegate, IGVideoBugReportProviding>

@property (nonatomic, weak) NSObject<IGFNFVideoPlayerDelegate> *delegate;
@property (nonatomic, weak) NSObject<IGFNFVideoPlayerLiveDelegate> *liveDelegate;
@property (nonatomic, readonly) BOOL audioEnabled;
@property (nonatomic, readonly) NSString *currentRepresentationId;
@property (nonatomic, readonly) NSData *currentMPD;
@property (nonatomic, readonly) BOOL assetHasAudio;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } currentVideoSize;
@property (nonatomic, readonly) long long playerMode;
@property (nonatomic, readonly) NSString *playbackSessionId;
@property (nonatomic, readonly) long long contentProtectionMode;
@property (nonatomic, readonly) BOOL readyToPlay;
@property (nonatomic, readonly) long long playbackState;
@property (nonatomic, readonly) BOOL hasError;
@property (nonatomic, readonly) long long loopCount;
@property (nonatomic, readonly) BOOL hasPausedRequest;
@property (nonatomic, readonly) BOOL seeking;
@property (nonatomic, readonly) double currentTime;
@property (nonatomic, readonly) double currentFrameTime;
@property (nonatomic, readonly) IGUserSession *userSession;
@property (nonatomic, readonly) IGVideoPlaybackStateManager *stateManager;
@property (nonatomic, readonly) UIView *videoView;
@property (nonatomic, readonly) IGFNFSelectedQualityProvider *selectedQualityProvider;
@property (nonatomic, readonly) IGVideoPlaybackLoggingConfig *loggingConfig;
@property (nonatomic, readonly) NSObject<FNFSharedLoggerProtocol> *sharedLogger;
@property (nonatomic) long long gravity;

/* instance methods */
- (void)prepare;
- (void)prepareVideo:(long long)video;
- (void)cancelPrepare;
- (void)loadVideoWithPlaybackReason:(long long)reason;
- (void)loadVideoWithPlaybackReason:(long long)reason;
- (void)loadAudioUrl:(id)url dashManifestData:(id)data config:(id)config deferAudioShouldStart:(BOOL)start;
- (BOOL)hasAsset;
- (void)seekToTime:(double)time preciseTime:(BOOL)time;
- (void)seekToTime:(double)time preciseTime:(BOOL)time;
- (void)seekToTime:(double)time preciseTime:(BOOL)time trigger:(long long)trigger;
- (void)seekToTime:(double)time preciseTime:(BOOL)time trigger:(long long)trigger;
- (void)seekToTime:(double)time preciseTime:(BOOL)time trigger:(long long)trigger completionHandler:(id /* block */)handler;
- (void)seekToTime:(double)time preciseTime:(BOOL)time trigger:(long long)trigger completionHandler:(id /* block */)handler;
- (void)seekToTime:(double)time preciseTime:(BOOL)time trigger:(long long)trigger inPrepare:(BOOL)prepare completionHandler:(id /* block */)handler;
- (void)seekToTime:(double)time preciseTime:(BOOL)time trigger:(long long)trigger inPrepare:(BOOL)prepare completionHandler:(id /* block */)handler;
- (void)playWithReason:(long long)reason;
- (void)playWithReason:(long long)reason;
- (void)pauseWithReason:(long long)reason;
- (void)pauseWithReason:(long long)reason;
- (void)pauseWithReason:(long long)reason pauseReasonDebugString:(id)string;
- (void)pauseWithReason:(long long)reason pauseReasonDebugString:(id)string;
- (void)stopWithReason:(long long)reason;
- (void)stopWithReason:(long long)reason;
- (void)resetWithCurrentLoadingError:(id)error;
- (void)resetWithCurrentLoadingError:(id)error;
- (void)cleanup;
- (void)currentFrameWithCompletion:(id /* block */)completion;
- (void)currentFrameWithCompletion:(id /* block */)completion;
- (void)assetFailedToPrepareForPlayback:(id)playback;
- (void)assetFailedToPrepareForPlayback:(id)playback;
- (void)setPreventSleep:(BOOL)sleep;
- (void)setAudioEnabled:(BOOL)enabled reason:(long long)reason;
- (void)setAudioRestricted:(BOOL)restricted reason:(long long)reason;
- (void)setVolume:(double)volume;
- (void)setIsExternalAudioPausingEnabled:(BOOL)enabled;
- (void)setPlaybackSpeed:(float)speed isAudioLossPatchEnabled:(BOOL)enabled;
- (float)playbackSpeed;
- (void)setAudioOutputEffects:(id)effects;
- (void)setAudioTimeDomainPitchAlgorithmEnabled:(BOOL)enabled;
- (void)setAudioVarispeedPitchAlgorithmEnabled:(BOOL)enabled;
- (id)loggingParams:(id)params extras:(id)extras;
- (id)debugDetails;
- (id)assetDebugDetails;
- (BOOL)isPlaying;
- (BOOL)hasStarted;
- (id)lastError;
- (double)volume;
- (long long)currentState;
- (void)notifyPlayerShouldStart;
- (void)configureDebugIndicatorViewWithIsPreloaded:(BOOL)preloaded;
- (void)configureDebugIndicatorViewWithIsPreloaded:(BOOL)preloaded;
- (void)setDelegate:(id)delegate playbackReason:(long long)reason;
- (void)setupViewabilityWithVideoViewLogger:(id)logger;
- (void)setupViewabilityWithVideoViewLogger:(id)logger;
- (void)resetViewability;
- (void)videoPlaybackMetadataUpdate:(id)update;
- (void)disableHDR:(BOOL)hdr;
- (void)addListener:(id)listener;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (void)removeListener:(id)listener;
- (void)addWarmupListener:(id)listener;
- (void)removeWarmupListener:(id)listener;
- (void)setAutoTranslateLang:(id)lang autoTranslateEnabled:(BOOL)enabled;
- (id)availableAutoTranslateLanguages;
- (id)selectedAutoTranslateLanguage;
@end

#endif /* IGFNFVideoPlayable_Protocol_h */