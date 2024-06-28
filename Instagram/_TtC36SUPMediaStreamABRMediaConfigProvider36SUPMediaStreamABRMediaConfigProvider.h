//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC36SUPMediaStreamABRMediaConfigProvider36SUPMediaStreamABRMediaConfigProvider_h
#define _TtC36SUPMediaStreamABRMediaConfigProvider36SUPMediaStreamABRMediaConfigProvider_h
@import Foundation;

#include "SUPMediaStreamAudioConfig.h"
#include "SUPMediaStreamAudioConfigProviding-Protocol.h"
#include "SUPMediaStreamVideoConfig.h"
#include "SUPMediaStreamVideoConfigProviding-Protocol.h"

@interface _TtC36SUPMediaStreamABRMediaConfigProvider36SUPMediaStreamABRMediaConfigProvider : NSObject<SUPMediaStreamVideoConfigProviding, SUPMediaStreamAudioConfigProviding> { // (Swift)
  /* instance variables */
   videoConfigAnnouncer;
   audioConfigAnnouncer;
   abrLadder;
   lastVideoSettings;
   supportedVideoQuality;
   nextVideoConfig;
   updatePollingTimer;
   pollingQueue;
   updateInterval;
   shouldSendUpdatesImmediately;
}

@property (nonatomic, retain) SUPMediaStreamVideoConfig *videoConfig;
@property (nonatomic, retain) SUPMediaStreamAudioConfig *audioConfig;

/* instance methods */
- (id)initWithInitialVideoConfig:(id)config initialAudioConfig:(id)config videoLadderConfig:(id)config;
- (void)addVideoConfigListener:(id)listener;
- (void)addAudioConfigListener:(id)listener;
- (void)removeAudioConfigListener:(id)listener;
- (void)startUpdatingVideoConfigIfNeeded;
- (void)stopUpdatingVideoConfig;
- (void)setSupportedVideoQuality:(long long)quality;
- (void)startUpdatingAudioConfigIfNeeded;
- (void)stopUpdatingAudioConfig;
- (void)handleVideoFrameReceived:(id)received;
- (id)init;
@end

#endif /* _TtC36SUPMediaStreamABRMediaConfigProvider36SUPMediaStreamABRMediaConfigProvider_h */