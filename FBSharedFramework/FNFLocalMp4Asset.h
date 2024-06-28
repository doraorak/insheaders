//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFLocalMp4Asset_h
#define FNFLocalMp4Asset_h
@import Foundation;

#include "AVAsynchronousKeyValueLoading-Protocol.h"
#include "FNFAVAsset-Protocol.h"
#include "FNFAVPlayerItem-Protocol.h"
#include "FNFAsset-Protocol.h"
#include "FNFAssetForPlayer-Protocol.h"
#include "FNFInfoForLoopableAsset-Protocol.h"

@class AVAsset, AVAssetReader, AVAssetReaderOutput, AVAssetReaderTrackOutput, AVAudioMix, NSArray, NSError, NSString, NSURL;
@protocol FNFAssetEventListener, OS_dispatch_queue;

@interface FNFLocalMp4Asset : NSObject<AVAsynchronousKeyValueLoading, FNFAVAsset, FNFAVPlayerItem, FNFAssetForPlayer, FNFInfoForLoopableAsset, FNFAsset> {
  /* instance variables */
  id /* block */ _assetLoadedHandler;
  NSObject<OS_dispatch_queue> *_assetCompletionCallbackQueue;
  NSURL *_localURL;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _duration;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _playbackTime;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _startingPlaybackTime;
  struct opaqueCMFormatDescription * _formatDesc;
  struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _asbd;
  unsigned int _timescale;
  unsigned int _audioTimescale;
  BOOL _hasFailed;
  NSError *_loadingError;
  BOOL _async;
  NSObject<OS_dispatch_queue> *_dispatchQueue;
  AVAsset *_videoAsset;
  AVAssetReader *_videoAssetReader;
  AVAssetReaderOutput *_videoAssetReaderTrackOutput;
  struct opaqueCMSampleBuffer * _videoSampleBuffer;
  struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _preferredTransform;
  AVAssetReader *_audioAssetReader;
  AVAssetReaderTrackOutput *_audioAssetReaderTrackOutput;
  struct opaqueCMSampleBuffer * _audioSampleBuffer;
  struct OpaqueCMBlockBuffer * _audioBlockBuffer;
  int _numberOfPackets;
  const struct AudioStreamPacketDescription * _inPacketDescriptions;
  struct AudioBuffer { unsigned int mNumberChannels; unsigned int mDataByteSize; void *mData; } _audioBuffer;
  int _currentAudioBufferIndex;
  float _fps;
  BOOL _isOutputDecompressed;
  BOOL _videoBufferEnded;
  struct CGSize { double width; double height; } _containerDimensions;
  NSObject<FNFAssetEventListener> *_eventListener;
  BOOL _audioOnlyAsset;
  int _framesDropped;
  BOOL _enableDroppableFrames;
  BOOL _shouldUsePhotoLibrary;
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
- (id)initWithLocalURL:(id)url decompressedOutput:(BOOL)output containerDimensions:(struct CGSize { double x0; double x1; })dimensions shouldApplyRotationTransform:(BOOL)transform shouldUsePhotoLibrary:(BOOL)library enableDroppableFrames:(BOOL)frames;
- (id)initWithLocalURL:(id)url decompressedOutput:(BOOL)output containerDimensions:(struct CGSize { double x0; double x1; })dimensions shouldUsePhotoLibrary:(BOOL)library shouldApplyRotationTransform:(BOOL)transform;
- (id)initAudioOnlyAssetWithLocalURL:(id)url decompressedOutput:(BOOL)output shouldUsePhotoLibrary:(BOOL)library containerDimensions:(struct CGSize { double x0; double x1; })dimensions;
- (id)initAudioOnlyAssetWithLocalURL:(id)url async:(BOOL)async decompressedOutput:(BOOL)output shouldUsePhotoLibrary:(BOOL)library containerDimensions:(struct CGSize { double x0; double x1; })dimensions;
- (id)initWithLocalURL:(id)url async:(BOOL)async decompressedOutput:(BOOL)output containerDimensions:(struct CGSize { double x0; double x1; })dimensions shouldUsePhotoLibrary:(BOOL)library shouldApplyRotationTransform:(BOOL)transform;
- (void)dealloc;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (BOOL)createVideoReader:(struct { long long x0; int x1; unsigned int x2; long long x3; })reader;
- (BOOL)_isHDRVideo:(id)hdrvideo;
- (void)_startWithAsset:(id)asset handler:(id /* block */)handler outHandler:(id /* block */)handler;
- (void)asyncLoadAssetWithHandler:(id /* block */)handler onQueue:(id)queue;
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id /* block */)handler;
- (void)_processLoadAssetErrorWitHandler:(id /* block */)handler outHandler:(id /* block */)handler errMsg:(id)msg assetErrorCode:(int)code;
- (void)_loadAssetWithHandler:(id /* block */)handler outHandler:(id /* block */)handler;
- (long long)_assetStatus;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_duration;
- (id)_assetError;
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
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeAfterSeek;
- (int)sequenceIndexForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time track:(long long)track;
- (BOOL)_isDroppableFrame:(struct opaqueCMSampleBuffer *)frame;
- (struct FNFFrameMetadata { unsigned int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; long long x3; struct { long long x0; int x1; unsigned int x2; long long x3; } x4; unsigned int x5; int x6; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x7; })currentFrameMetadataForTrack:(long long)track;
- (int)currentFramesIndexForTrack:(long long)track;
- (BOOL)resetFramesIndexToZeroForTrack:(long long)track;
- (const char *)currentFrameDataForTrack:(long long)track;
- (struct FNFFrameMetadata { unsigned int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; long long x3; struct { long long x0; int x1; unsigned int x2; long long x3; } x4; unsigned int x5; int x6; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x7; })frameMetadataForTrack:(long long)track atIndex:(int)index;
- (const char *)frameDataForTrack:(long long)track atIndex:(int)index;
- (int)currentAvailableFrameIndexForTrack:(long long)track;
- (BOOL)containsTrack:(long long)track;
- (unsigned long long)codecFormatForTrack:(long long)track;
- (id)audioCodec;
- (BOOL)trackHasMoreFrames:(long long)frames;
- (int)chunkCountToPlayForTrack:(long long)track;
- (void)advanceFrameForTrack:(long long)track;
- (BOOL)shouldBufferVideoAsSoonAsPossible;
- (struct FNFStallDecision { BOOL x0; struct FNFStallResult { BOOL x0; BOOL x1; BOOL x2; BOOL x3; } x1; })shouldPauseForStallingWithNextCheckCallback:(id /* block */)callback stallReason:(int)reason;
- (struct FNFStallDecision { BOOL x0; struct FNFStallResult { BOOL x0; BOOL x1; BOOL x2; BOOL x3; } x1; })shouldStallAudio;
- (BOOL)shouldRestartAfterStalling;
- (BOOL)stallingForTrack:(long long)track;
- (id)representationId;
- (id)audioRepresentationId;
- (id)mpdAccessibilityDescription;
- (BOOL)mpdContainsAttributeUsingASRCaptions;
- (id)manifestIdentifier;
- (id)asset;
- (void)addErrorToLog:(id)log shouldStopPlayback:(BOOL)playback;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
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
- (unsigned int)timescale;
- (id)resourceLoader;
- (void)playbackStarted;
- (void)playbackPauseRequested:(int)requested;
- (id)debugDetails;
- (id)qualityLabel;
- (void)_releaseVideoBufferIfNeeded;
- (BOOL)isProtectedContent;
- (id)loggingContext;
- (id)hlsAdapter;
- (id)drmKeyId;
- (id)drmPssh;
- (double)suggestedPlaybackRate;
- (void)setPlaybackStartTime:(double)time;
- (BOOL)shouldSelectAudioRole:(unsigned char)role language:(id)language;
- (void)selectAudioRole:(unsigned char)role language:(id)language completionHandler:(id /* block */)handler;
- (int)_currentAudioBufferIndex;
- (void)printASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })asbd;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })videoTrackDuration;
- (BOOL)decompressedFramebuffer;
- (BOOL)isDurationFinal;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })seekingTime;
- (void)setAssetEventListener:(id)listener;
- (void)setIsSoundMuted:(BOOL)muted;
- (void)setIsWebVTTCaptionShown:(BOOL)shown;
- (void)setUserSelectedQuality:(id)quality;
- (BOOL)isAudioAbrEligible;
- (void)setIsAudioABREnabled:(BOOL)abrenabled;
- (void)setAudioMeterLevel:(double)level;
- (unsigned int)frameRate;
@end

#endif /* FNFLocalMp4Asset_h */
