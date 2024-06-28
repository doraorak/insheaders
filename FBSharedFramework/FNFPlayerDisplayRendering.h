//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFPlayerDisplayRendering_h
#define FNFPlayerDisplayRendering_h
@import Foundation;

#include "FNFDecompressionSession-Protocol.h"
#include "FNFFramesBufferManaging-Protocol.h"
#include "FNFPlayerDisplayEngine-Protocol.h"
#include "FNFRenderingThread.h"

@class CADisplayLink, CIContext, NSDictionary, NSError, NSString, NSTimer;
@protocol CALayer<FNFPlayerDisplayLayer, FNFDisplayFilter, FNFPlayerDisplayEngineDelegate, OS_dispatch_queue;

@interface FNFPlayerDisplayRendering : NSObject<FNFPlayerDisplayEngine> {
  /* instance variables */
  CADisplayLink *_displayLink;
  BOOL _firstFrameDrawn;
  BOOL _shouldUseFirstFrameCheck;
  NSObject<FNFFramesBufferManaging> *_framesBuffer;
  NSObject<FNFDecompressionSession> *_decompressionSession;
  NSObject<FNFDecompressionSession> *_previousDecompressionSession;
  NSObject<FNFDisplayFilter> *_hdrToSDRFilter;
  NSObject<FNFDisplayFilter> *_hdrBrightnessFilter;
  id /* block */ _dataBlock;
  NSObject<OS_dispatch_queue> *_dataQueue;
  BOOL _requestingData;
  NSError *_layerError;
  BOOL _flushSessionInProgress;
  struct OpaqueCMTimebase * _controlTimeBase;
  CALayer<FNFPlayerDisplayLayer> *_layer;
  struct __CVBuffer * _lastDecodedFrame;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastDecodedFramePts;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastDecodedFrameDuration;
  struct __CVBuffer * _lastDisplayedSampleBuffer;
  FNFRenderingThread *_renderingThread;
  NSDictionary *_codecMap;
  BOOL _appActive;
  BOOL _lastDisplayedBufferExists;
  BOOL _hasError;
  BOOL _isHDR;
  BOOL _hdrColorConvertInRenderingThread;
  id _loggingContext;
  NSTimer *_inactivePlaybackWithoutDrawingTimer;
  BOOL _allowPlayWhenInactive;
  BOOL _allowInactivePlaybackWithoutDrawing;
  int _sampleBufferRequestThreshold;
  int _sampleBufferRequestThresholdVP9;
  int _sampleBufferRequestThresholdAV1;
  BOOL _displayFirstFrame;
  BOOL _shouldApplyRotationTransform;
  BOOL _needsDisplayFrame;
  struct FNFDecompressionConfig { BOOL debuggingErrorEnabled; BOOL badFrameFix; unsigned int recoverDecodeFrameFailureTimes; unsigned int maxGopStoredFrameCount; unsigned int av1NumberOfDecoderThreads; unsigned int av1MaxFrameDelay; BOOL shouldReuseDav1dDecoder; unsigned int numOfPrewarmedDav1dDecoders; unsigned int decodingSlownessDetectionPeriod; unsigned int decodingSlownessDetectionThreshold; double decodingSlownessTimeLimit; BOOL enableAV1DecodingWithVT; BOOL enableDecompressionSessionTargetGlobalQueue; BOOL disableVTAsynchronousDecompression; BOOL disableVT1xRealTimePlayback; BOOL disableVTTemporalProcessing; BOOL enableAsyncVTDecompressionSessionCreation; BOOL disableAtomicThreadFence; } _decompressionConfig;
  BOOL _shouldDropStaleFrame;
  int _staleFrameThreshold;
  BOOL _enableOffMainThreadRendering;
  int _playThroughErrorMaxRetryTimes;
  int _playThroughRetryCounter;
  BOOL _disableHDR;
  BOOL _enableInactivePlaybackWithoutDrawingBackgroundDisplayLinkPauseFix;
  BOOL _enableControlTimebaseUpdatesInAVSBDL;
  BOOL _disableIdleTimeoutManagement;
  BOOL _enableGetCurrentTimeOffMainThread;
  BOOL _avsbdplFlushOnMainThread;
  CIContext *_cachedCIContext;
}

@property (weak, nonatomic) NSObject<FNFPlayerDisplayEngineDelegate> *displayEngineDelegate;
@property (nonatomic) double hdrRampUpTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (retain) struct OpaqueCMTimebase * controlTimebase;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredTransform;
@property (readonly, nonatomic) NSString *decompressionSessionType;

/* instance methods */
- (id)initWithConfig:(struct { BOOL x0; BOOL x1; BOOL x2; int x3; int x4; int x5; BOOL x6; struct FNFDecompressionConfig { BOOL x0; BOOL x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; unsigned int x7; unsigned int x8; unsigned int x9; double x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; } x7; BOOL x8; BOOL x9; int x10; BOOL x11; int x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; })config andLayer:(id)layer;
- (id)initWithConfig:(struct { BOOL x0; BOOL x1; BOOL x2; int x3; int x4; int x5; BOOL x6; struct FNFDecompressionConfig { BOOL x0; BOOL x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; unsigned int x7; unsigned int x8; unsigned int x9; double x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; } x7; BOOL x8; BOOL x9; int x10; BOOL x11; int x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; })config layer:(id)layer hdrToSDRFilter:(id)sdrfilter;
- (id)initWithConfig:(struct { BOOL x0; BOOL x1; BOOL x2; int x3; int x4; int x5; BOOL x6; struct FNFDecompressionConfig { BOOL x0; BOOL x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; unsigned int x7; unsigned int x8; unsigned int x9; double x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; } x7; BOOL x8; BOOL x9; int x10; BOOL x11; int x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; })config andLayer:(id)layer andCodecMap:(id)map;
- (id)initWithConfig:(struct { BOOL x0; BOOL x1; BOOL x2; int x3; int x4; int x5; BOOL x6; struct FNFDecompressionConfig { BOOL x0; BOOL x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; unsigned int x7; unsigned int x8; unsigned int x9; double x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; } x7; BOOL x8; BOOL x9; int x10; BOOL x11; int x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; })config andLayer:(id)layer andCodecMap:(id)map hdrToSDRFilter:(id)sdrfilter hdrBrightnessFilter:(id)filter;
- (void)disableHDR:(BOOL)hdr;
- (void)invalidate;
- (void)dealloc;
- (void)setRenderingThreadPriority:(double)priority;
- (void)dispatchAsyncOnRenderingThread:(id /* block */)thread;
- (void)_applicationDidBecomeActive:(id)active;
- (void)_invalidateInactivePlaybackWithoutDrawingTimer;
- (void)_applicationWillResignActive:(id)active;
- (void)resume;
- (void)pause:(int)pause;
- (void)pauseDisplayLink;
- (void)_displayLinkCallback:(id)callback;
- (void)requestLastDisplayedSampleBuffer:(id /* block */)buffer onQueue:(id)queue;
- (void)_requestLastDisplayedSampleBuffer:(id /* block */)buffer onQueue:(id)queue;
- (void)_tryToMoveToNextFrameWithDrawingOn:(BOOL)on isFirstFrame:(BOOL)frame;
- (BOOL)flushDisplayReadySampleBuffers;
- (void)_setLastDecodedFrame:(struct __CVBuffer *)frame framePts:(struct { long long x0; int x1; unsigned int x2; long long x3; })pts duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)_displayFrame;
- (void)_logFrameDisplayAtFramePts:(struct { long long x0; int x1; unsigned int x2; long long x3; })pts playerTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })timestamp;
- (BOOL)flushIfError;
- (BOOL)allowRenderingWhileApplicationInactive;
- (void)setShouldApplyRotationTransform:(BOOL)transform;
- (void)stopRequestingMediaData;
- (void)flushAndRemoveImage;
- (BOOL)seekFrameUpdatesFinished;
- (void)setNeedsDisplayFrame;
- (void)displayFrameAsApplicable;
- (void)flush;
- (void)requestMediaDataWhenReadyOnQueue:(id)queue usingBlock:(id /* block */)block;
- (void)_closePreviousDecompressionSession;
- (void)yieldDecompressedBuffer:(struct __CVBuffer *)buffer presentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })stamp presentationDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration iFrame:(unsigned long long)frame wasDropped:(BOOL)dropped rotation:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })rotation;
- (void)yieldDecompressedBuffer:(struct __CVBuffer *)buffer presentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })stamp presentationDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration rotation:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })rotation;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)buffer attributes:(unsigned int)attributes codec:(unsigned long long)codec enqueueInfo:(id)info rotation:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })rotation;
- (void)bypassSampleBuffer:(struct opaqueCMSampleBuffer *)buffer attributes:(unsigned int)attributes codec:(unsigned long long)codec enqueueInfo:(id)info rotation:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })rotation;
- (void)_inputSampleBuffer:(struct opaqueCMSampleBuffer *)buffer attributes:(unsigned int)attributes codec:(unsigned long long)codec shouldEnqueueAndRender:(BOOL)render enqueueInfo:(id)info rotation:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })rotation;
- (BOOL)isReadyForMoreMediaData;
- (void)_displayFirstFrameAsApplicable;
- (void)_requestData;
- (void)handleDecompressionSessionError:(id)error;
- (void)handleDecompressionSessionError:(id)error ifIFrameStillValid:(unsigned long long)valid;
- (void)_handleDecodingError:(id)error;
- (void)_handleError:(id)error;
- (void)handleDecopmressionSessionWarning:(id)warning;
- (void)_handleWarn:(id)warn;
- (id)decompressionSessionSupplementalLogs;
- (void)setDisableIdleTimeoutManagement:(BOOL)management;
- (void)_apply3DTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })dtransform;
- (void)_clearBuffers;
- (void)setLoggingContext:(id)context;
- (id)layer;
- (id)headerDataDelegate;
- (void)setAllowInactivePlayback:(BOOL)playback drawingOn:(BOOL)on;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_getCurrentTime;
- (void)displayLayerIsReadyForDisplay:(BOOL)display;
- (void)displayLayerDidLayoutSublayers;
- (void)displayLayerHandleError:(id)error;
- (void)_perfromPixelBufferHDRTransitionIfNeeded:(struct __CVBuffer *)needed presentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
@end

#endif /* FNFPlayerDisplayRendering_h */
