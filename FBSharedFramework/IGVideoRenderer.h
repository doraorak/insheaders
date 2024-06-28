//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoRenderer_h
#define IGVideoRenderer_h
@import Foundation;

#include "IGAudioConfig.h"
#include "IGFBCompositionFilter.h"
#include "IGLContext.h"
#include "IGLContextCache.h"
#include "IGSegmentsConfig.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGVideoConfig.h"
#include "IGVideoRenderSource.h"
#include "NSObject-Protocol.h"

@class NSLock, NSString;
@protocol IGVideoRendererAnnouncer, IGVideoTranscoderProtocol, OS_dispatch_group;

@interface IGVideoRenderer : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGVideoTranscoderProtocol> *_transcoder;
  NSObject<IGUserLauncherSetProviding> *_launcherSetProvider;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _imageSampleTime;
  long long _imageSampleInterval;
  IGVideoConfig *_videoConfig;
  IGAudioConfig *_audioConfig;
  IGSegmentsConfig *_segmentsConfig;
  IGLContextCache *_contextCache;
  IGLContext *_iglContext;
  double _fractionCompleted;
  NSLock *_renderLock;
  BOOL _hasTransitionFilter;
  NSObject<OS_dispatch_group> *_suspensionCompletionGroup;
  NSObject<IGVideoRendererAnnouncer> *_announcer;
  BOOL _saveWhenDone;
  double _renderDuration;
  IGFBCompositionFilter *_fbFilter;
}

@property (nonatomic) long long status;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) IGVideoRenderSource *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSource:(id)source videoConfig:(id)config audioConfig:(id)config segmentsConfig:(id)config imageSampleTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time imageSampleInterval:(long long)interval launcherSetProvider:(id)provider;
- (void)setProgress:(double)progress;
- (void)_onAppBackground;
- (void)_onAppWillResignActive;
- (void)render;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (struct __CVBuffer *)createPixelBuffer:(struct opaqueCMSampleBuffer *)buffer withPixelBufferPool:(struct __CVPixelBufferPool *)pool error:(id *)error;
- (void)cancel;
- (void)suspend;
- (id)latestProcessingSoftException;
- (void)frameFinishedCallback;
@end

#endif /* IGVideoRenderer_h */