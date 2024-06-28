//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC21IGAdsCreativeAudioKit24IGAdsAudioDebugIndicator_h
#define _TtC21IGAdsCreativeAudioKit24IGAdsAudioDebugIndicator_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "CRIIGAudioPlayerControllerDataSource-Protocol.h"
#include "CRIIGAudioPlayerControllerDelegate-Protocol.h"
#include "_TtP21IGAdsCreativeAudioKit27IGAdsAudioPlayerControlling_-Protocol.h"

@class IGMusicInfo;

@interface _TtC21IGAdsCreativeAudioKit24IGAdsAudioDebugIndicator : _TtCs12_SwiftObject<_TtP21IGAdsCreativeAudioKit27IGAdsAudioPlayerControlling_> { // (Swift)
  /* instance variables */
   audioController;
   debugView;
   progressViewOriginalSize;
   progressView;
   timer;
}

@property (nonatomic, readonly) long long audioStatus;
@property (nonatomic, readonly) BOOL isPlaying;
@property (nonatomic, readonly) BOOL isAudioEnabled;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double currentPlaybackTime;
@property (nonatomic, readonly) IGMusicInfo *musicInfo;
@property (nonatomic, retain) NSObject<CRIIGAudioPlayerControllerDelegate> *delegate;
@property (nonatomic, retain) NSObject<CRIIGAudioPlayerControllerDataSource> *dataSource;

/* instance methods */
- (void)preload;
- (void)playWith:(long long)with;
- (void)pauseWith:(long long)with;
- (void)stopWith:(long long)with;
- (void)seekToTime:(double)time;
- (void)setAudioWithEnabled:(BOOL)enabled with:(long long)with;
@end

#endif /* _TtC21IGAdsCreativeAudioKit24IGAdsAudioDebugIndicator_h */