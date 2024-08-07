//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdsAudioLogger_h
#define IGAdsAudioLogger_h
@import Foundation;

#include "FBTimer.h"
#include "IGMusicInfo.h"
#include "IGUserSession.h"

@class NSString;
@protocol IGAdsProgressTrackingTimerDelegate;

@interface IGAdsAudioLogger : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_rankingSessionId;
  NSString *_renderMode;
  NSString *_analyticsModule;
  NSString *_adId;
  double _audioProgress;
  double _animationProgress;
  IGMusicInfo *_musicInfo;
  BOOL _isAudioEnabled;
  BOOL _readyToPlay;
  FBTimer *_timer;
  double _counter;
  BOOL _logged1SecEvent;
  BOOL _logged5SecEvent;
}

@property (weak, nonatomic) NSObject<IGAdsProgressTrackingTimerDelegate> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session rankingSessionId:(id)id;
- (BOOL)isConfiguredWithUserSession:(id)session rankingSessionId:(id)id renderMode:(id)mode analyticsModule:(id)module musicInfo:(id)info adId:(id)id;
- (void)setAudioEnabled:(BOOL)enabled;
- (void)setReadyToPlay:(BOOL)play;
- (void)resetTimer;
- (void)_didPressVolumeButton:(id)button;
- (void)logDidAdsAudioIconTapToMute;
- (void)logDidAdsAudioIconTapToUnmute;
- (void)logDidAdsAudioImpression;
- (void)logDidFailToSetupAdsAudioDueToNullUrl;
- (void)logDidFailToSetupAdsAudioDueToGKCheck;
@end

#endif /* IGAdsAudioLogger_h */
