//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedPlaybackLoggingController_h
#define IGFeedPlaybackLoggingController_h
@import Foundation;

#include "IGModernFeedVideoCellListener-Protocol.h"

@interface IGFeedPlaybackLoggingController : NSObject<IGModernFeedVideoCellListener> { // (Swift)
  /* instance variables */
   module;
   sponsoredSupportConfiguration;
   media;
   userSession;
   loggingProvider;
   managedCells;
   visibilityMap;
   fullVideoViewSessions;
   partialVideoViewSessions;
}

/* instance methods */
- (id)initWithModule:(id)module media:(id)media sponsoredSupportConfiguration:(id)configuration loggingProvider:(id)provider userSession:(id)session;
- (void)manageLoggingFor:(id)for;
- (void)manageLoggingFor:(id)for at:(long long)at;
- (void)feedVideoCell:(id)cell didBeginPlayingVideo:(id)video;
- (void)feedVideoCellDidStop:(id)stop;
- (void)feedVideoCellDidStall:(id)stall;
- (void)feedVideoCell:(id)cell didUpdateCoverImageLoadStatus:(long long)status;
- (void)feedVideoCell:(id)cell didUpdateLoadingProgress:(double)progress;
- (void)feedVideoCell:(id)cell didUpdatePlaybackStatus:(id)status;
- (void)feedVideoCellDidPause:(id)pause;
- (void)feedVideoCell:(id)cell didFailPlayingVideo:(id)video withError:(id)error;
- (id)init;
@end

#endif /* IGFeedPlaybackLoggingController_h */
