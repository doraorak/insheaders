//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFHeadlessDisplayEngine_h
#define FNFHeadlessDisplayEngine_h
@import Foundation;

#include "FNFPlayerDisplayEngine-Protocol.h"

@class FNFRenderingThread, NSError, NSString;
@protocol FNFPlayerDisplayEngineDelegate, FNFPlayerDisplayEngineFrameDataDelegate, FNFPlayerHeaderDataDelegate, OS_dispatch_queue;

@interface FNFHeadlessDisplayEngine : NSObject<FNFPlayerDisplayEngine> {
  /* instance variables */
  struct OpaqueCMTimebase * _controlTimeBase;
  NSError *_layerError;
  FNFRenderingThread *_renderingThread;
  id /* block */ _dataBlock;
  NSObject<OS_dispatch_queue> *_dataQueue;
  BOOL _requestingData;
}

@property (weak, nonatomic) NSObject<FNFPlayerDisplayEngineFrameDataDelegate> *displayEngineFrameDataDelegate;
@property (weak, nonatomic) NSObject<FNFPlayerDisplayEngineDelegate> *displayEngineDelegate;
@property (weak, nonatomic) NSObject<FNFPlayerHeaderDataDelegate> *headerDataDelegate;
@property (retain) struct OpaqueCMTimebase * controlTimebase;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredTransform;
@property (readonly, nonatomic) NSString *decompressionSessionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfig:(struct { BOOL x0; BOOL x1; BOOL x2; int x3; int x4; int x5; BOOL x6; struct FNFDecompressionConfig { BOOL x0; BOOL x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; unsigned int x7; unsigned int x8; unsigned int x9; double x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; } x7; BOOL x8; BOOL x9; int x10; BOOL x11; int x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; })config;
- (void)setRenderingThreadPriority:(double)priority;
- (void)dispatchAsyncOnRenderingThread:(id /* block */)thread;
- (BOOL)allowRenderingWhileApplicationInactive;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)displayFrameAsApplicable;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)buffer attributes:(unsigned int)attributes codec:(unsigned long long)codec enqueueInfo:(id)info rotation:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })rotation;
- (void)bypassSampleBuffer:(struct opaqueCMSampleBuffer *)buffer attributes:(unsigned int)attributes codec:(unsigned long long)codec enqueueInfo:(id)info rotation:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })rotation;
- (void)flush;
- (void)flushAndRemoveImage;
- (BOOL)flushDisplayReadySampleBuffers;
- (BOOL)flushIfError;
- (void)invalidate;
- (BOOL)isReadyForMoreMediaData;
- (id)layer;
- (void)pause:(int)pause;
- (void)pauseDisplayLink;
- (void)requestLastDisplayedSampleBuffer:(id /* block */)buffer onQueue:(id)queue;
- (void)_requestData;
- (void)requestMediaDataWhenReadyOnQueue:(id)queue usingBlock:(id /* block */)block;
- (void)resume;
- (BOOL)seekFrameUpdatesFinished;
- (void)setLoggingContext:(id)context;
- (void)setNeedsDisplayFrame;
- (void)setShouldApplyRotationTransform:(BOOL)transform;
- (void)stopRequestingMediaData;
- (void)yieldDecompressedBuffer:(struct __CVBuffer *)buffer presentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })stamp presentationDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration rotation:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })rotation;
- (void)setAllowInactivePlayback:(BOOL)playback drawingOn:(BOOL)on;
- (void)disableHDR:(BOOL)hdr;
- (void)setDisableIdleTimeoutManagement:(BOOL)management;
- (void)playerLayerIsReadyForDisplay:(BOOL)display;
@end

#endif /* FNFHeadlessDisplayEngine_h */
