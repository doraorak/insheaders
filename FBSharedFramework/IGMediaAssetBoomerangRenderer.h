//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMediaAssetBoomerangRenderer_h
#define IGMediaAssetBoomerangRenderer_h
@import Foundation;

#include "IGAsyncTask.h"
#include "IGPlaybackTimeline.h"
#include "IGPlaybackTimelineDelegate-Protocol.h"
#include "METAAnimationCurve.h"
#include "METAMediaAssetRenderer-Protocol.h"
#include "METAMediaAssetRendererDelegate-Protocol.h"

@class NSArray, NSString;

@interface IGMediaAssetBoomerangRenderer : NSObject<IGPlaybackTimelineDelegate, METAMediaAssetRenderer> {
  /* instance variables */
  NSArray *_pixelBufferRefs;
  double _durationPerFrame;
  IGPlaybackTimeline *_playbackTimeline;
  IGAsyncTask *_boomerangAsset;
}

@property (readonly, nonatomic) IGAsyncTask *previewImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<METAMediaAssetRendererDelegate> *delegate;
@property (readonly, nonatomic) struct __CVBuffer * displayTexture;
@property (readonly, nonatomic) BOOL readyForDisplay;
@property (readonly, nonatomic) double currentPlaybackRate;
@property (readonly, nonatomic) double currentPlaybackTime;
@property (nonatomic) BOOL muted;
@property (nonatomic) double volume;
@property (copy, nonatomic) NSArray *audioEffects;
@property (copy, nonatomic) METAAnimationCurve *volumeCurve;

/* instance methods */
- (id)initWithBoomerangAsset:(id)asset previewImage:(id)image useMetal:(BOOL)metal userSession:(id)session;
- (void)dealloc;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (void)seekToTime:(double)time toleranceBefore:(double)before toleranceAfter:(double)after completionHandler:(id /* block */)handler;
- (void)playbackTimeline:(id)timeline didUpdateCurrentTime:(double)time;
- (BOOL)isMuted;
@end

#endif /* IGMediaAssetBoomerangRenderer_h */