//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoLogging_Protocol_h
#define IGVideoLogging_Protocol_h
@import Foundation;

@protocol IGVideoLogging <NSObject>

@property (readonly, weak, nonatomic) NSObject<IGFeedItemLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate><IGFeedItemWithCarouselLoggingProviderDelegate><IGFeedItemVideoLoggingProviderDelegate> *feedItemLoggingProvider;

/* instance methods */
- (void)videoViewerDidTapMoreOptionsWithAnalyticsModule:(id)module;
- (void)videoViewerDidTapBrandProfile:(id)profile source:(id)source;
- (void)videoViewerDidTapBrandedContentCreator:(id)creator source:(id)source;
- (id)actionForVideoTimeSpentTrackingWithName:(id)name analyticsModule:(id)module;
- (id)impressionMeasureActionWithAnalyticsModule:(id)module;
- (id)impressionUpdateActionWithAnalyticsModule:(id)module;
- (id)viewabilityActionWithAnalyticsModuleProvider:(id)provider;
- (id)actionForVideoViewTrackingWithName:(id)name player:(id)player analyticsModule:(id)module;
- (void)videoViewerDidStartPlayingVideoInPlayer:(id)player;
- (void)videoViewerDidStopPlayingVideoInPlayer:(id)player;
- (void)videoViewerDidTapShareIconWithShareSheetSessionId:(id)id analyticsModule:(id)module;
- (void)videoViewerDidTapSendToReshareWithAnalyticsModule:(id)module;
- (void)videoViewerDidDoubleTapToLikeOnAlreadyLikedPostWithAnalyticsModule:(id)module;
- (id)extraInfoForLikeWithIsDoubleTap:(BOOL)tap;
@end

#endif /* IGVideoLogging_Protocol_h */
