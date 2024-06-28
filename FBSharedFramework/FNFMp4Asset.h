//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFMp4Asset_h
#define FNFMp4Asset_h
@import Foundation;

#include "AVAsynchronousKeyValueLoading-Protocol.h"
#include "FNFAVAsset-Protocol.h"
#include "FNFAVPlayerItem-Protocol.h"
#include "FNFAsset-Protocol.h"
#include "FNFAssetForPlayer-Protocol.h"
#include "FNFBufferSizeDecider.h"
#include "FNFInfoForLoopableAsset-Protocol.h"

@class AVAudioMix, NSArray, NSError, NSString;
@protocol FNFAssetEventListener, FNFAtomManager, FNFDataLoader, OS_dispatch_queue;

@interface FNFMp4Asset : NSObject<AVAsynchronousKeyValueLoading, FNFAVAsset, FNFAVPlayerItem, FNFAssetForPlayer, FNFInfoForLoopableAsset, FNFAsset> {
  /* instance variables */
  id /* block */ _assetLoadedHandler;
  id /* block */ _assetCompletionHandler;
  NSObject<OS_dispatch_queue> *_assetCompletionCallbackQueue;
  NSObject<FNFDataLoader> *_dataLoader;
  NSObject<FNFAtomManager> *_atomManager;
  FNFBufferSizeDecider *_bufferSizeDecider;
  id /* block */ _playerCheckForStallCallback;
  BOOL _hasFailed;
  BOOL _isStalled;
  NSError *_error;
  NSError *_loadingError;
  BOOL _shouldShowBroadcasterInterruptedMessage;
  BOOL _assetLoaded;
  BOOL _waitingOnLoad;
  int _warningCount;
  NSObject<OS_dispatch_queue> *_dispatchQueue;
  BOOL _isAsync;
  unsigned long long _moovAtomSizeForReattempt;
  unsigned long long _moovAtomSizeForDataLoader;
  NSObject<FNFAssetEventListener> *_eventListener;
  BOOL _enableWhatsAppStreaming;
  BOOL _shouldCacheLoadedData;
  BOOL _updateHttpPriorityOnPausePlay;
}

@property (copy) NSString *resourceHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSArray *loadedTimeRanges;
@property (readonly, nonatomic) BOOL shouldApplyRotationTransform;
@property (copy, nonatomic) AVAudioMix *audioMix;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } maxBufferTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minBufferTime;
@property (readonly, nonatomic) int pauseReason;

/* instance methods */
- (id)initWithURL:(id)url config:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; })config;
- (id)initWithURL:(id)url moovAtomSize:(unsigned long long)size moovAtomSizeForReattempt:(unsigned long long)reattempt bitrate:(unsigned long long)bitrate fetchBufferSizeInSeconds:(double)seconds unstallBufferSizeInSeconds:(double)seconds stallBufferSizeInSeconds:(double)seconds firstFetchSizeInSeconds:(double)seconds fetchBufferMultiplier:(double)multiplier unstallBufferMultiplier:(double)multiplier enableMp4AssetSeekingFix:(BOOL)fix enableMp4AssetEditListSeekingFix:(BOOL)fix enableHEVCSupport:(BOOL)hevcsupport updateHttpPriorityOnPausePlay:(BOOL)play;
- (id)initWithURL:(id)url moovAtomSize:(unsigned long long)size bitrate:(unsigned long long)bitrate;
- (id)initWithURL:(id)url moovAtomSize:(unsigned long long)size bitrate:(unsigned long long)bitrate dispatchQueue:(id)queue isAsync:(BOOL)async;
- (id)initWithURL:(id)url config:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; })config dispatchQueue:(id)queue isAsync:(BOOL)async;
- (void)dealloc;
- (void)asyncLoadAssetWithHandler:(id /* block */)handler onQueue:(id)queue;
- (long long)_assetStatus;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_duration;
- (id)_assetError;
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id /* block */)handler;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (void)updatePlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (long long)statusOfValueForKey:(id)key error:(id *)error;
- (void)asyncLoadAvailableQualitiesWithHandler:(id /* block */)handler onQueue:(id)queue;
- (void)asyncLoadCurrentQualityWithHandler:(id /* block */)handler onQueue:(id)queue;
- (void)asyncLoadAvailableRepresentationsWithHandler:(id /* block */)handler onQueue:(id)queue;
- (BOOL)isAudioOnly;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)requestTimeLoadedUpdate;
- (void)requestErrorNotificationIfNeeded;
- (BOOL)resetAssetToBeginningIfNeeded;
- (BOOL)seekToPosition:(struct { long long x0; int x1; unsigned int x2; long long x3; })position;
- (struct FNFFrameMetadata { unsigned int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; long long x3; struct { long long x0; int x1; unsigned int x2; long long x3; } x4; unsigned int x5; int x6; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x7; })currentFrameMetadataForTrack:(long long)track;
- (int)currentFramesIndexForTrack:(long long)track;
- (BOOL)resetFramesIndexToZeroForTrack:(long long)track;
- (struct FNFFrameMetadata { unsigned int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; long long x3; struct { long long x0; int x1; unsigned int x2; long long x3; } x4; unsigned int x5; int x6; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x7; })frameMetadataForTrack:(long long)track atIndex:(int)index;
- (const char *)frameDataForTrack:(long long)track atIndex:(int)index;
- (int)currentAvailableFrameIndexForTrack:(long long)track;
- (const char *)currentFrameDataForTrack:(long long)track;
- (id)audioCodec;
- (BOOL)containsTrack:(long long)track;
- (BOOL)trackHasMoreFrames:(long long)frames;
- (int)chunkCountToPlayForTrack:(long long)track;
- (void)advanceFrameForTrack:(long long)track;
- (struct FNFStallDecision { BOOL x0; struct FNFStallResult { BOOL x0; BOOL x1; BOOL x2; BOOL x3; } x1; })shouldPauseForStallingWithNextCheckCallback:(id /* block */)callback stallReason:(int)reason;
- (struct FNFStallDecision { BOOL x0; struct FNFStallResult { BOOL x0; BOOL x1; BOOL x2; BOOL x3; } x1; })shouldStallAudio;
- (BOOL)shouldRestartAfterStalling;
- (BOOL)stallingForTrack:(long long)track;
- (id)representationId;
- (id)audioRepresentationId;
- (id)mpdAccessibilityDescription;
- (BOOL)mpdContainsAttributeUsingASRCaptions;
- (id)manifestIdentifier;
- (BOOL)isAudioAbrEligible;
- (id)asset;
- (unsigned long long)codecFormatForTrack:(long long)track;
- (void)addErrorToLog:(id)log shouldStopPlayback:(BOOL)playback;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeAfterSeek;
- (int)sequenceIndexForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time track:(long long)track;
- (void)playbackPauseRequested:(int)requested;
- (void)playbackStarted;
- (id)debugDetails;
- (id)qualityLabel;
- (BOOL)isProtectedContent;
- (id)loggingContext;
- (void)parsingDidFailWithError:(id)error;
- (void)resetDataForSeek;
- (void)resetDataForSeekBack;
- (void)resetDataForSeekBackForTrack:(long long)track;
- (void)reportWarning:(id)warning;
- (void)dataWasReceivedForTrack:(long long)track andIsComplete:(BOOL)complete fileSize:(unsigned long long)size;
- (void)loadingDidFailWithError:(id)error;
- (void)willChangeValue;
- (void)didChangeValue;
- (id)resourceLoader;
- (void)_updateTimeLoaded;
- (void)_potentiallyStartRequestForTrack:(long long)track;
- (void)_handleWarning:(id)warning;
- (void)_handleError:(id)error;
- (void)_seekDataLoaderToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time offset:(unsigned long long)offset shouldUpdateOffset:(BOOL)offset track:(long long)track;
- (void)_handleAssetLoaded;
- (void)_assetLoadCompletionWithStatus:(long long)status duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration debugDetails:(id)details error:(id)error;
- (void)cancelLoading;
- (id)accessLog;
- (void)addOutput:(id)output;
- (BOOL)isPlaybackLikelyToKeepUp;
- (BOOL)isPlaybackBufferFull;
- (struct opaqueCMFormatDescription *)formatDesc;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })asbd;
- (id)audioStreamExtraParameters;
- (id)projection;
- (id)audioChannelConfiguration;
- (id)dataBlockDistributorForTrack:(long long)track;
- (BOOL)shouldBufferVideoAsSoonAsPossible;
- (unsigned long long)timescale;
- (unsigned long long)currentOffsetForTrack:(long long)track;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })videoTrackDuration;
- (BOOL)decompressedFramebuffer;
- (BOOL)isDurationFinal;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })seekingTime;
- (void)setAssetEventListener:(id)listener;
- (void)setIsSoundMuted:(BOOL)muted;
- (void)setIsWebVTTCaptionShown:(BOOL)shown;
- (void)setUserSelectedQuality:(id)quality;
- (BOOL)shouldSelectAudioRole:(unsigned char)role language:(id)language;
- (void)selectAudioRole:(unsigned char)role language:(id)language completionHandler:(id /* block */)handler;
- (id)hlsAdapter;
- (id)drmKeyId;
- (id)drmPssh;
- (double)suggestedPlaybackRate;
- (void)setPlaybackStartTime:(double)time;
- (void)setIsAudioABREnabled:(BOOL)abrenabled;
- (void)setAudioMeterLevel:(double)level;
- (unsigned int)frameRate;
@end

#endif /* FNFMp4Asset_h */