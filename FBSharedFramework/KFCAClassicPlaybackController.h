//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef KFCAClassicPlaybackController_h
#define KFCAClassicPlaybackController_h
@import Foundation;

#include "KFCAPlaybackController.h"
#include "CAAnimationDelegate-Protocol.h"
#include "KFCAConcretePlaybackControllerProtocol-Protocol.h"
#include "KFPlaybackControllerInternalProtocol-Protocol.h"

@class NSString;

@interface KFCAClassicPlaybackController : KFCAPlaybackController<CAAnimationDelegate, KFCAConcretePlaybackControllerProtocol, KFPlaybackControllerInternalProtocol> {
  /* instance variables */
  BOOL _currentLoopDidSeek;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) BOOL isCurrentlyPlaying;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) long long playCountRemaining;
@property (readonly, nonatomic) double progress;
@property (copy, nonatomic) id /* block */ onPlayEnd;
@property (copy, nonatomic) id /* block */ onReadyForPlayback;
@property (nonatomic) BOOL allowQueuedCommands;

/* instance methods */
- (void)updateWithTimeDelta:(double)delta;
- (void)playCount:(long long)count;
- (void)playCount:(long long)count resetupWorld:(BOOL)world;
- (void)reset;
- (void)stopAndPerformResetPlayCountCheck:(BOOL)check;
- (void)_setupWithLayer:(id)layer duration:(double)duration;
- (void)_resetWithLayer:(id)layer;
- (void)_pauseWithCompletion:(id /* block */)completion queue:(id)queue;
- (void)_doPause;
- (void)_onSeekFromStop;
- (void)_doStop;
- (void)_seekToProgress:(double)progress withCompletion:(id /* block */)completion queue:(id)queue;
- (void)_seekToFinished;
- (void)_doPlayCount:(long long)count resetupWorld:(BOOL)world;
- (void)_playWithCompletion:(id /* block */)completion queue:(id)queue;
- (void)_playbackDidEnd;
- (void)_resetTiming;
- (double)_localRunningTimeInSeconds;
- (id)_createMockAnimationWithDuration:(double)duration;
- (void)animationDidStop:(id)stop finished:(BOOL)finished;
- (id)concreteSelf;
@end

#endif /* KFCAClassicPlaybackController_h */
