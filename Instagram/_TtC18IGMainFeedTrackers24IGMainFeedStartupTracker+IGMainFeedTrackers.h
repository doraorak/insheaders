//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC18IGMainFeedTrackers24IGMainFeedStartupTracker_IGMainFeedTrackers_h
#define _TtC18IGMainFeedTrackers24IGMainFeedStartupTracker_IGMainFeedTrackers_h
@import Foundation;

@interface _TtC18IGMainFeedTrackers24IGMainFeedStartupTracker (IGMainFeedTrackers)
/* instance methods */
- (void)markInitialDataReceivedFromNewRequestTracker:(BOOL)tracker;
- (void)configureAnalyzerWithStoriesTrackingEnabled:(BOOL)enabled;
- (void)markFeedResponseDeferredOnColdStart;
- (void)markFeedRequestSubmittedFromNewRequestTracker:(BOOL)tracker;
- (void)ensureFeedRequestStatusIsInFlight;
- (void)markWillPrefetchMedia:(id)media;
- (void)markFeedResponseParseEndedWithFirstFeedItem:(id)item featureSets:(id)sets fromNewRequestTracker:(BOOL)tracker;
- (void)markFeedRequestEndedWithSuccess:(BOOL)success error:(id)error fromNewRequestTracker:(BOOL)tracker;
- (void)markFeedUIRenderStart;
- (void)markFeedUIRenderEnd:(BOOL)end withFeedSize:(id)size;
- (void)markStoriesTrayUIRenderStart;
- (void)markStoriesTrayUIRenderEnd:(BOOL)end withTraySize:(id)size;
- (void)markFirstMediaVideoLoadStart:(id)start;
- (void)markFirstMediaLoadStartForURL:(id)url;
- (void)markFirstMediaLoadEndFromBackgroundPrefetch:(id)prefetch;
@end

#endif /* _TtC18IGMainFeedTrackers24IGMainFeedStartupTracker_IGMainFeedTrackers_h */
