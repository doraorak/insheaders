//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SNPlayerPerformanceMetricsProvider_h
#define SNPlayerPerformanceMetricsProvider_h
@import Foundation;

#include "SNPlaybackStateListener-Protocol.h"
#include "SRPlaybackStateListener-Protocol.h"

@class NSArray, NSString;

@interface SNPlayerPerformanceMetricsProvider : NSObject<SNPlaybackStateListener, SRPlaybackStateListener> {
  /* instance variables */
  NSArray *_metadataFetchers;
  BOOL _isParallel;
  double _prepareStartTime;
  double _playbackReadyTime;
  double _impressionTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMetadataFetchers:(id)fetchers isParallel:(BOOL)parallel;
- (id)snirl;
- (id)preparationLatency;
- (void)playerControllerStartPrepareRendering:(id)rendering;
- (void)playerControllerIsReadyToPlayback:(id)playback;
@end

#endif /* SNPlayerPerformanceMetricsProvider_h */
