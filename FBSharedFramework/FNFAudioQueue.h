//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFAudioQueue_h
#define FNFAudioQueue_h
@import Foundation;

#include "FNFCoreAudioWrapper.h"
#include "FNFPlayerAudioEngine-Protocol.h"
#include "FNFPlayerAudioEngineDelegate-Protocol.h"

@class NSDictionary, NSString;
@protocol OS_dispatch_queue, {vector<AQBufferState, std::allocator<AQBufferState>>="__begin_"^{AQBufferState}"__end_"^{AQBufferState}"__end_cap_"{__compressed_pair<AQBufferState *, std::allocator<AQBufferState>>="__value_"^{AQBufferState}}};

@interface FNFAudioQueue : NSObject<FNFPlayerAudioEngine> {
  /* instance variables */
  FNFCoreAudioWrapper *_coreAudioWrapper;
  NSObject<FNFPlayerAudioEngineDelegate> *_audioEngineDelegate;
  struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _asbd;
  unsigned int _sampleFrameSize;
  unsigned int _minSampleFrameSize;
  struct AQBufferParameters { unsigned int bufferSize; unsigned int packetCount; } _bufferParams;
  unsigned long long _state;
  BOOL _hasNoMoreFramesToEnqueue;
  struct AQBufferState { struct AudioQueueBuffer *bufferRef; struct AudioTimeStamp { double mSampleTime; unsigned long long mHostTime; double mRateScalar; unsigned long long mWordClockTime; struct SMPTETime { short mSubframes; short mSubframeDivisor; unsigned int mCounter; unsigned int mType; unsigned int mFlags; short mHours; short mMinutes; short mSeconds; short mFrames; } mSMPTETime; unsigned int mFlags; unsigned int mReserved; } timestamp; BOOL enqueued; double displayFramePts; } _audioQueueBuffer[3];
  struct vector<AQBufferState, std::allocator<AQBufferState>> { struct AQBufferState *__begin_; struct AQBufferState *__end_; struct __compressed_pair<AQBufferState *, std::allocator<AQBufferState>> { struct AQBufferState *__value_; } __end_cap_; } _aqBufferStates;
  int _activeBufferIndex;
  unsigned long long _framesEnqueued;
  unsigned long long _framesReturned;
  unsigned long long _buffersReturned;
  unsigned long long _enqueueDataCalls;
  double _secondsEnqueued;
  double _lastEnqeuedDisplayFramePts;
  double _lastEnqueuedOutputTimeDelta;
  double _lastReturnedBufferDisplayFramePts;
  NSObject<OS_dispatch_queue> *_internalQueue;
  float _pendingVolume;
  float _pendingVolumeRampTime;
  float _pendingPlayRate;
  BOOL _deferAudioLevelSetup;
  BOOL _isRunning;
  id _loggingContext;
  id /* block */ _audioLevelCallback;
  struct { struct FNFPlayerConfigGen { long long avsync_max_buffer_index_gap; BOOL enable_audio_queue_pause_fix; BOOL log_audio_queue_invalidation_warnings; } gen; BOOL endFrameSeekIfNoMoreFrames; BOOL useLastCallbackInBackToBackFrameSeek; BOOL shouldFlushTrailingSeek; BOOL skipBackToBackSeekAsApplicable; int frameSeekTimerInterval; BOOL enableLiveSeekingPerfectFrame; BOOL enableLiveSeeking; unsigned int minSampleAudioFrameSize; double delayToDeinitMutedAssets; BOOL restartAudioOnNoAudioError; BOOL enableAudioStallOnly; BOOL enableBackgroundAudio; int maxAudioStallsAllowed; unsigned long long videoStallTimeThresholdForAudioStallOnly; BOOL enableFrameRenderLogging; int avSyncThresholdMs; int avSyncMinSampleSize; double avSyncPassRate; long long frameRenderLoggingSampleRate; BOOL logAudioQueueGeneralWarnings; BOOL logAudioQueueCommonWarnings; BOOL logAudioQueuexheAACWarnings; BOOL enableAdsFrameLogging; BOOL enableSynchronousPlayerStallLogs; double negativeAudioStartTimeThreshold; int avSyncLoggingVideoSampleRate; BOOL decompressionErrorDebugging; BOOL displayFirstFrame; BOOL allowsVideoPlaybackWithoutAudio; double noAudioThreshold; int avSyncMinBufferIndexGap; struct { BOOL pictureInPictureEnabled; BOOL requiresLinearPlayback; BOOL canStartPictureInPictureAutomaticallyFromInline; BOOL startsPictureInPictureOnPlay; } pictureInPictureConfig; BOOL xheAACLoudnessNormalizationEnabled; double xheAACLoudnessTarget; int xheAACDRCEffectType; unsigned int xheAACMinTimeLagToAdjustAudioFrameMsecs; BOOL xheAACEnableAudioBufferingInMuteInterval; BOOL xheAACEnableReuseAudioFrames; BOOL xheAACEnablePerfectFrameSeek; int xheAACMaxBadDataErrorRetryCount; BOOL enableDisplayEngineInactiveForAudioOnly; BOOL flushAudioQueueAfterEnqueuingAllBuffers; BOOL enableAudioStallMetric; BOOL xheAACDisableAudioQueueFlushForStallPause; double liveSpeedChangeIntervalSec; BOOL useBlockAsUserDataIsEnabled; BOOL enableLogAudioEnqueueDtsDecrease; BOOL xheAACEnableResetLastEnqueuedAudioDts; int numberAQBuffers; double audioTargetBufferDuration; BOOL frameDisplaySyncMuteToPlayerState; BOOL monitorAudioLevel; int resetAudioInterruptionThresholdSec; double minAudioLevel; double belowMinOutputLevelBackoffThresholdSec; int minNumOutputLevelErrors; BOOL logDebugInfoForOutputLevelBelowMinError; BOOL enableAudioABR; int audioABRNumberABRAQBuffers; int audioABRMaxNumberABRAQBuffersForPlaybackStart; int audioABRNumberPCMAQBuffers; int audioABRMaxNumberPCMAQBuffersForPlaybackStart; int audioABRNumberPCMFramesPerBuffer; BOOL disableAudioABRFrameCountFixForReset; BOOL enableAudioUnmuteWithDelayFix; BOOL enableAudioOutputEffects; int logMaxNumOccurrenceskErrorCodeOutputLevelBelowMin; BOOL logOutputLevelBelowMinErrorAtSpecificDurations; BOOL enableMinAudioFrameSizeForAudioAbr; BOOL avoidAudioTimeTruncation; BOOL logOutputLevelBelowMinErrorSincePlaybackStart; int minOccurrencesToLogOutputLevelBelowMinError; BOOL resetOutputLevelBelowMinErrorCountSincePlaybackStart; BOOL passNullStartTimeToAudioQueue; BOOL removeNotificationObserversAtDealloc; BOOL enableFrameDropObserver; unsigned long long frameDropWarningMinTotalFrames; double frameDropWarningRatioThreshold; BOOL enableAutoTranslation; BOOL updateAudioABRBuffering; BOOL enableIntentionalPlaybackStall; double intentionalPlaybackStallDurationMS; BOOL disableBackgroundPauseTimeInvalidation; BOOL enableLoggingPlayRequest; BOOL enableInstrumentedBlocks; } _playerConfig;
  NSDictionary *_extraParameters;
  BOOL _useTimeDomainPitchAlgorithm;
  BOOL _useVarispeedPitchAlgorithm;
  int _xheAACStartErrorBadDataCount;
  int _xheAACConverterErrorBadDataCount;
  double _lastAudioQueueStartDuration;
  BOOL _shouldUseCustomAQBufferState;
  int _bufferSize;
  BOOL _pauseRequestingData;
  double _audioTimeAtStartRunning;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithPlayerConfig:(struct { struct FNFPlayerConfigGen { long long x0; BOOL x1; BOOL x2; } x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; int x5; BOOL x6; BOOL x7; unsigned int x8; double x9; BOOL x10; BOOL x11; BOOL x12; int x13; unsigned long long x14; BOOL x15; int x16; int x17; double x18; long long x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; BOOL x24; double x25; int x26; BOOL x27; BOOL x28; BOOL x29; double x30; int x31; struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; } x32; BOOL x33; double x34; int x35; unsigned int x36; BOOL x37; BOOL x38; BOOL x39; int x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; double x45; BOOL x46; BOOL x47; BOOL x48; int x49; double x50; BOOL x51; BOOL x52; int x53; double x54; double x55; int x56; BOOL x57; BOOL x58; int x59; int x60; int x61; int x62; int x63; BOOL x64; BOOL x65; BOOL x66; int x67; BOOL x68; BOOL x69; BOOL x70; BOOL x71; int x72; BOOL x73; BOOL x74; BOOL x75; BOOL x76; unsigned long long x77; double x78; BOOL x79; BOOL x80; BOOL x81; double x82; BOOL x83; BOOL x84; BOOL x85; })config;
- (void)setAudioStreamBasicDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })description extraParameters:(id)parameters sampleFrameSize:(unsigned int)size minSampleFrameSize:(unsigned int)size isAudioABR:(BOOL)abr representationID:(id)id;
- (void)setTimeDomainPitchAlgorithmEnabled:(BOOL)enabled;
- (void)setVarispeedPitchAlgorithmEnabled:(BOOL)enabled;
- (void)setAudioEngineDelegate:(id)delegate;
- (void)dealloc;
- (BOOL)isReadyToPlayWithStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)prepareToPlay;
- (double)playWithStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)pause;
- (void)pauseWithoutDevicePause;
- (void)_pauseWithDevicePause:(BOOL)pause;
- (void)stop;
- (void)reset;
- (void)flush;
- (void)invalidate;
- (void)stopLoadingData;
- (void)enableLevelMeteringWithCallback:(id /* block */)callback;
- (void)removeLevelMetering;
- (void)resumeEnqueuingData;
- (void)setVolume:(float)volume rampTime:(float)time;
- (float)volume;
- (void)setRate:(float)rate;
- (float)rate;
- (void)setOutputEffects:(id)effects;
- (void)sendCurrentAudioLevelToCallback;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getCurrentTime;
- (id)headerDataDelegate;
- (unsigned long long)_queueState;
- (void)_setQueueState:(unsigned long long)state;
- (void)setLoggingContext:(id)context;
- (id)_stateDescription;
- (BOOL)_createAudioQueue;
- (void)_removeAudioQueue;
- (BOOL)_startQueue;
- (void)_readDataIntoBuffer;
- (void)_audioBufferDidEnqueue:(int)enqueue actualStartTime:(struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; })time lastFramePts:(struct { long long x0; int x1; unsigned int x2; long long x3; })pts;
- (BOOL)_isAudioFailure:(long long)failure;
- (void)_logAudioError:(id)error withStatus:(int)status;
- (id)stateInfo;
- (BOOL)isABRSupported;
- (void)pauseRequestingAudioData;
- (void)audioQueueDidChangeRunning:(BOOL)running;
- (id)_xheAACUpdateError:(id)error withErrorCode:(int)code nonKeyFrameStartErrorCode:(int)code;
- (void)audioQueueDidError:(id)error withStatus:(int)status;
- (void)audioQueueDidOutputForBuffer:(struct AudioQueueBuffer *)buffer;
- (struct AQBufferState *)_getBufferForIndex:(int)index;
@end

#endif /* FNFAudioQueue_h */
