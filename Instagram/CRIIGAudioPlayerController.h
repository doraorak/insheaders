//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef CRIIGAudioPlayerController_h
#define CRIIGAudioPlayerController_h
@import Foundation;

#include "CRIIGAudioPlayerControllerDataSource-Protocol.h"
#include "CRIIGAudioPlayerControllerDelegate-Protocol.h"
#include "_TtP21IGAdsCreativeAudioKit27IGAdsAudioPlayerControlling_-Protocol.h"

@class IGMusicInfo;

@interface CRIIGAudioPlayerController : NSObject<_TtP21IGAdsCreativeAudioKit27IGAdsAudioPlayerControlling_> { // (Swift)
  /* instance variables */
   audioPlayer;
   audioPlayerLoggerProvider;
   audioPlayerLogger;
   audioPlayerEventSubscription;
   currentConfiguration;
   hasStartedPlayback;
   playbackDidStall;
   isSeeking;
   IG_MSEC_PER_SEC;
   playTimer;
   shouldEnableLoopAndDelayControl;
}

@property (nonatomic, weak) NSObject<CRIIGAudioPlayerControllerDelegate> *delegate;
@property (nonatomic, weak) NSObject<CRIIGAudioPlayerControllerDataSource> *dataSource;
@property (nonatomic, readonly) long long audioStatus;
@property (nonatomic, readonly) BOOL isPlaying;
@property (nonatomic, readonly) double currentPlaybackTime;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) IGMusicInfo *musicInfo;
@property (nonatomic, readonly) BOOL isAudioEnabled;

/* class methods */
+ (id)buildWithDefaultsWithConfiguration:(id)configuration;

/* instance methods */
- (void)setAudioWithEnabled:(BOOL)enabled with:(long long)with;
- (void)reconfigureWith:(id)with;
- (void)preload;
- (void)playWith:(long long)with;
- (void)pauseWith:(long long)with;
- (void)stopWith:(long long)with;
- (void)seekToTime:(double)time;
- (id)init;
@end

#endif /* CRIIGAudioPlayerController_h */
