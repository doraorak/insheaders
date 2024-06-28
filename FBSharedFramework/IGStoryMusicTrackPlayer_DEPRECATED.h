//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryMusicTrackPlayer_DEPRECATED_h
#define IGStoryMusicTrackPlayer_DEPRECATED_h
@import Foundation;

#include "IGAsyncTask.h"
#include "IGAudioStatusChangeListener-Protocol.h"
#include "IGStoryAudioPlayer.h"
#include "IGStoryAudioPlayerDelegate-Protocol.h"

@class AVAudioMix, NSHashTable, NSString;

@interface IGStoryMusicTrackPlayer_DEPRECATED : NSObject<IGAudioStatusChangeListener, IGStoryAudioPlayerDelegate> {
  /* instance variables */
  long long _soundBehavior;
  NSHashTable *_playbackEventListeners;
  long long _backgroundedBehavior;
}

@property (readonly, nonatomic) IGStoryAudioPlayer *audioPlayer;
@property (retain, nonatomic) IGAsyncTask *asset;
@property (nonatomic) BOOL muted;
@property (nonatomic) double volume;
@property (nonatomic) double currentPlaybackTime;
@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) double playbackRate;
@property (readonly, nonatomic) double effectivePlaybackRate;
@property (retain, nonatomic) AVAudioMix *audioMix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)play;
- (void)pause;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (void)prerollAtRate:(double)rate completionHandler:(id /* block */)handler;
- (void)storyAudioPlayer:(id)player didUpdateToPlaybackTime:(double)time;
- (void)storyAudioPlayer:(id)player didUpdateStallState:(BOOL)state;
- (void)storyAudioPlayerDidPlayToEnd:(id)end;
- (void)storyAudioPlayer:(id)player effectivePlaybackRateDidChange:(double)change;
- (void)storyAudioPlayer:(id)player didDetermineDuration:(double)duration ofAsset:(id)asset;
- (void)storyAudioPlayer:(id)player didDetermineAssetPlayabilityStatus:(BOOL)status;
- (void)_audioSessionRouteChange:(id)change;
- (void)_applicationDidEnterBackground:(id)background;
- (void)audioStatusDidChangeIsAudioEnabled:(BOOL)enabled forReason:(long long)reason;
@end

#endif /* IGStoryMusicTrackPlayer_DEPRECATED_h */
