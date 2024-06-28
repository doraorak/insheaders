//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoPlaybackQPLStateLogger_h
#define IGVideoPlaybackQPLStateLogger_h
@import Foundation;

#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGVideoCacheLogger.h"
#include "IGVideoPerformanceLogger.h"
#include "IGVideoPlaybackQPLLogger.h"
#include "IGVideoProfilerQPLLogger.h"
#include "IGVideoProfilerStaticPlaybackData.h"

@class NSString;
@protocol IGVideoPlaybackDataProvider, IGVideoPlaybackStateProvider;

@interface IGVideoPlaybackQPLStateLogger : NSObject {
  /* instance variables */
  IGVideoPlaybackQPLLogger *_qplLogger;
  IGVideoPerformanceLogger *_perfLogger;
  IGVideoProfilerQPLLogger *_profilerLogger;
  IGVideoCacheLogger *_cacheLogger;
  NSObject<IGVideoPlaybackStateProvider> *_stateProvider;
  NSObject<IGVideoPlaybackDataProvider> *_playbackDataProvider;
  NSString *_mediaId;
  IGVideoProfilerStaticPlaybackData *_videoProfilerMetadata;
  NSObject<IGUserLauncherSetProviding> *_featureSet;
}

/* instance methods */
- (id)initWithQplLogger:(id)logger perfLogger:(id)logger stateProvider:(id)provider playbackDataProvider:(id)provider videoProfilerMetadata:(id)metadata videoProfilerLogger:(id)logger cacheLogger:(id)logger mediaId:(id)id featureSets:(id)sets;
- (void)logEventFromState:(long long)state toState:(long long)state loggingParams:(id)params;
- (BOOL)_shouldLogVideoPlaybackState;
- (void)_logVideoProfilerState:(long long)state;
@end

#endif /* IGVideoPlaybackQPLStateLogger_h */
