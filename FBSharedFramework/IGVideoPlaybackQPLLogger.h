//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoPlaybackQPLLogger_h
#define IGVideoPlaybackQPLLogger_h
@import Foundation;

#include "IGVideoPlaybackLoggingConfig.h"
#include "IGVideoStallInfo.h"

@class NSString;

@interface IGVideoPlaybackQPLLogger : NSObject {
  /* instance variables */
  NSString *_mediaId;
  int _instanceKey;
  BOOL _isLiveStreaming;
  NSString *_streamingFormat;
  IGVideoPlaybackLoggingConfig *_loggingConfig;
  IGVideoStallInfo *_stallInfo;
  BOOL _isVideoStalling;
}

/* instance methods */
- (id)initWithMediaId:(id)id isLiveStreaming:(BOOL)streaming streamingFormat:(id)format loggingConfig:(id)config;
- (void)updateLoggingConfig:(id)config;
- (void)logVideoShouldStartWithCurrentPosition:(double)position playReason:(id)reason;
- (void)logVideoStartedPlayingWithCurrentPosition:(double)position startDelay:(double)delay isResumeFromStall:(BOOL)stall playReason:(id)reason bitrate:(unsigned int)bitrate;
- (void)logVideoPausedWithCurrentPosition:(double)position lastStartingPosition:(double)position videoLength:(double)length pausedReason:(id)reason bitrate:(unsigned int)bitrate;
- (void)logVideoBufferingStartWithCurrentPosition:(double)position lastStartingPosition:(double)position videoLength:(double)length stalledTrack:(id)track;
- (void)logVideoBufferingEndWithCurrentPosition:(double)position lastStartingPosition:(double)position videoLength:(double)length bufferingDuration:(double)duration;
- (void)logVideoExitedWithCurrentPosition:(double)position lastStartingPosition:(double)position videoLength:(double)length bitrate:(unsigned int)bitrate;
- (void)logVideoReadyToPlayInPlayerThread;
- (void)logVideoReadyToPlayInMainThread;
- (void)_markerAnnotateWithMap:(id)map withMarkerId:(int)id instanceKey:(int)key;
- (id)_buildStallAnnotationsWithPrefix:(id)prefix;
@end

#endif /* IGVideoPlaybackQPLLogger_h */