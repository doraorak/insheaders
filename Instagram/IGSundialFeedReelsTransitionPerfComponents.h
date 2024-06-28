//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialFeedReelsTransitionPerfComponents_h
#define IGSundialFeedReelsTransitionPerfComponents_h
@import Foundation;

@class IGPerformanceComponent, IGPerformanceComposableLogger, IGPerformanceMarker;

@interface IGSundialFeedReelsTransitionPerfComponents : NSObject {
  /* instance variables */
  BOOL _hasItemToScrollTo;
  BOOL _skeletonVisible;
  BOOL _videoPlaybackRequested;
  BOOL _videoStartedPlaying;
  BOOL _scrollStartedDecelerating;
  BOOL _scrollFinishedDecelerating;
  IGPerformanceComponent *_drag;
  IGPerformanceComponent *_scrollDeceleration;
  IGPerformanceComponent *_videoFetch;
  long long _fromIndex;
}

@property (readonly, nonatomic) IGPerformanceComposableLogger *logger;
@property (readonly, nonatomic) IGPerformanceMarker *marker;
@property (readonly, nonatomic) IGPerformanceComponent *lifetime;
@property (readonly, nonatomic) IGPerformanceComponent *skeleton;
@property (nonatomic) BOOL isVideo;

/* instance methods */
- (id)init;
@end

#endif /* IGSundialFeedReelsTransitionPerfComponents_h */