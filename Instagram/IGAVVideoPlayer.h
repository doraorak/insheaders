//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAVVideoPlayer_h
#define IGAVVideoPlayer_h
@import Foundation;

#include "AVPlayerItemOutputPullDelegate-Protocol.h"

@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, AVVideoComposition, CADisplayLink, NSString;
@protocol IGAVVideoPlayerDelegate, OS_dispatch_queue;

@interface IGAVVideoPlayer : NSObject<AVPlayerItemOutputPullDelegate> {
  /* instance variables */
  id _displayLinkTarget;
  AVPlayerItemVideoOutput *_videoOutput;
  AVPlayerItem *_playerItem;
  NSObject<OS_dispatch_queue> *_videoOutputQueue;
  BOOL _isDisplayLinkInRunLoop;
  BOOL _isSeeking;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _seekTime;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _audioVolumeRampDuration;
}

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) AVAsset *asset;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startTime;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } endTime;
@property (readonly, nonatomic) double effectivePlaybackRate;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) double progress;
@property (nonatomic) long long maximumFrameRate;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) BOOL isLooping;
@property (retain, nonatomic) AVVideoComposition *videoComposition;
@property (weak, nonatomic) NSObject<IGAVVideoPlayerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)initWithAsset:(id)asset audioVolumeRampDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)_onAppBackground;
- (void)_onAppDidBecomeActive;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)playFromStart;
- (void)playFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)play;
- (void)playInReverse;
- (void)stop;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (void)_effectivePlaybackRateDidChange:(id)change;
- (void)_displayLinkCallback:(id)callback;
- (void)_itemDidFinishPlaying;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)outputMediaDataWillChange:(id)change;
- (void)outputSequenceWasFlushed:(id)flushed;
@end

#endif /* IGAVVideoPlayer_h */
