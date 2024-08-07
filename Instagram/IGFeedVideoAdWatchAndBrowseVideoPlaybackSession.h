//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedVideoAdWatchAndBrowseVideoPlaybackSession_h
#define IGFeedVideoAdWatchAndBrowseVideoPlaybackSession_h
@import Foundation;

#include "IGPlaybackCoordinatorSession-Protocol.h"

@class IGVideoView, NSString;

@interface IGFeedVideoAdWatchAndBrowseVideoPlaybackSession : NSObject<IGPlaybackCoordinatorSession> {
  /* instance variables */
  IGVideoView *_videoView;
  double _startTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVideoView:(id)view startTime:(double)time;
- (void)willAttachToCoordinator:(id)coordinator;
- (id)playbackEligibility;
- (void)applyCoordinatedEvent:(long long)event withContext:(id)context;
@end

#endif /* IGFeedVideoAdWatchAndBrowseVideoPlaybackSession_h */
