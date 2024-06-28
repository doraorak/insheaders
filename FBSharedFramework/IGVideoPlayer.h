//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoPlayer_h
#define IGVideoPlayer_h
@import Foundation;

#include "IGFNFVideoPlayer.h"
#include "FNFLiveTraceManagerEventListener-Protocol.h"
#include "FNFSharedLoggingDashAnnouncer.h"
#include "IGFNFVideoProfilerDashEventDistributor.h"
#include "IGUserSession.h"
#include "IGVideoPlayerConfig.h"
#include "IGVideoStore.h"
#include "_TtP19IGVideoPlayerWarmup27IGVideoPlayerWarmupProtocol_-Protocol.h"
#include "_TtP30METAAVResourcesTrackerProtocol13METAAVDecoder_-Protocol.h"
#include "_TtP30METAAVResourcesTrackerProtocol30METAAVResourcesTrackerProtocol_-Protocol.h"

@class NSData, NSString, NSURL;

@interface IGVideoPlayer : IGFNFVideoPlayer<FNFLiveTraceManagerEventListener, _TtP30METAAVResourcesTrackerProtocol13METAAVDecoder_> {
  /* instance variables */
  long long _mediaType;
  NSString *_mediaId;
  NSString *_module;
  NSURL *_audioUrl;
  NSData *_audioDashManifestData;
  BOOL _audioOnlyAsset;
  IGUserSession *_userSession;
  long long _retryCount;
  IGVideoPlayerConfig *_config;
  BOOL _isNetworkReachable;
  id /* block */ _retryBlock;
  long long _videoPlayerMaxRetryCount;
  IGFNFVideoProfilerDashEventDistributor *_distributor;
  FNFSharedLoggingDashAnnouncer *_sharedLoggingDashAnnouncer;
  NSString *_lastAudioRepresentationId;
  NSString *_lastVideoRepresentationId;
  IGVideoStore *_videoStore;
  NSObject<_TtP30METAAVResourcesTrackerProtocol30METAAVResourcesTrackerProtocol_> *_resourcesTracker;
  NSObject<_TtP19IGVideoPlayerWarmup27IGVideoPlayerWarmupProtocol_> *_executingWarmup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *decoderType;

/* instance methods */
- (id)initWithUserSession:(id)session playerIndexProvider:(id)provider pictureInPictureCoordinator:(id)coordinator playerMode:(long long)mode video:(id)video config:(id)config resourcesTracker:(id)tracker compositionOverInheritance:(BOOL)inheritance warmupManager:(id)manager;
- (void)dealloc;
- (void)prepare;
- (void)prepareVideo:(long long)video;
- (void)cancelPrepare;
- (void)loadVideoWithPlaybackReason:(long long)reason;
- (void)loadAudioUrl:(id)url dashManifestData:(id)data config:(id)config deferAudioShouldStart:(BOOL)start;
- (id)currentConfig;
- (void)_warmupVideo:(id)video;
- (void)cleanup;
- (void)assetFailedToPrepareForPlayback:(id)playback;
- (void)playWithReason:(long long)reason;
- (void)pauseWithReason:(long long)reason;
- (void)stopWithReason:(long long)reason;
- (void)seekToTime:(double)time preciseTime:(BOOL)time trigger:(long long)trigger completionHandler:(id /* block */)handler;
- (id)currentMPD;
- (BOOL)currentVideoIsHDR;
- (void)resetWithCurrentLoadingError:(id)error;
- (void)_networkReachabilityDidChange:(id)change;
- (void)liveTraceManagerDidLogLatencyMeasureFrame:(id)frame;
- (void)isDrmVideoChanged:(BOOL)changed;
- (void)audioRepresentationIdChanged:(id)changed codec:(id)codec encodingTag:(id)tag audioRoleMetadata:(id)metadata;
- (void)audioRepresentationIdChanged:(id)changed codec:(id)codec encodingTag:(id)tag;
- (void)availableAudioRolesChanged:(id)changed;
- (void)videoRepresentationIdChanged:(id)changed codec:(id)codec encodingTag:(id)tag;
- (void)manifestFetchCompleted:(id)completed;
- (void)chunkEmsgParsed:(id)parsed absoluteStartTime:(double)time fetchUrl:(id)url;
- (void)updateBandwidth:(int)bandwidth chunkDurationMs:(long long)ms;
- (void)clientLatencyChanged:(long long)changed bufferEndToLiveHeadDelta:(long long)delta;
- (void)playlistLoadedIsMCM:(BOOL)mcm manifestIdentifier:(id)identifier uumosTags:(id)tags;
- (void)playbackResolutionMosChanged:(id)changed;
- (void)_createLiveTraceManager;
- (BOOL)allTracksLoaded;
- (void)numVideoTracksWithCompletionHandler:(id /* block */)handler;
- (void)numAudioTracksWithCompletionHandler:(id /* block */)handler;
- (void)videoTracksResolutionsWithCompletionHandler:(id /* block */)handler;
@end

#endif /* IGVideoPlayer_h */
