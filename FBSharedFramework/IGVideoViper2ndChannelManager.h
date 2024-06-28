//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoViper2ndChannelManager_h
#define IGVideoViper2ndChannelManager_h
@import Foundation;

#include "FBMerlinManager.h"
#include "FNFSharedViperManager.h"
#include "FNFSharedViperManagerDataSource-Protocol.h"
#include "IGMedia.h"
#include "IGSponsoredInfoProviding-Protocol.h"
#include "IGUserSession.h"
#include "IGVideoViper2ndChannelListener-Protocol.h"
#include "IGVideoViper2ndChannelManagerDelegate-Protocol.h"
#include "_TtC14IGMConfigStore14IGMViperConfig.h"

@class NSMutableArray, NSString;

@interface IGVideoViper2ndChannelManager : NSObject<FNFSharedViperManagerDataSource, IGVideoViper2ndChannelListener> {
  /* instance variables */
  IGMedia *_media;
  NSString *_module;
  NSObject<IGSponsoredInfoProviding> *_sponsoredInfoProvider;
  int _currentViewability;
  FBMerlinManager *_merlinManager;
  NSMutableArray *_playerStartTimes;
  NSMutableArray *_playerPauseTimes;
  NSMutableArray *_playerTimes;
  NSMutableArray *_viperVideoLoggingEvents;
  BOOL _isAd;
  BOOL _isVideo;
  BOOL _isFramebasedLoggingEnabledForViper;
  BOOL _useSeparateViperFrameBufferService;
  BOOL _isSnaplGkPass;
  BOOL _isViperQePass;
  double _videoDuration;
  IGUserSession *_userSession;
  FNFSharedViperManager *_fnfSharedViperManager;
  _TtC14IGMConfigStore14IGMViperConfig *_viperPlatformConfig;
}

@property (readonly, nonatomic) BOOL isEnabled;
@property (weak, nonatomic) NSObject<IGVideoViper2ndChannelManagerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMedia:(id)media module:(id)module sponsoredSupportConfiguration:(id)configuration userSession:(id)session;
- (void)videoView:(id)view didBeginPlayingWithTime:(double)time videoDuration:(double)duration;
- (void)videoView:(id)view didUpdateWithTime:(double)time;
- (void)videoView:(id)view didPauseWithTime:(double)time;
- (void)videoView:(id)view didLoopWithTime:(double)time;
- (void)videoView:(id)view didFailPlayingWithError:(id)error;
- (id)_getFrameLoggingServiceWithUserSession:(id)session;
- (double)updatedWatchTimeForViperManager:(id)manager;
@end

#endif /* IGVideoViper2ndChannelManager_h */
