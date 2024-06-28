//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoAdLogger_h
#define IGVideoAdLogger_h
@import Foundation;

#include "IGFeedVideoViewSession.h"
#include "IGSponsoredInfoProviding-Protocol.h"
#include "IGVPVDImpressionHelper.h"
#include "IGVideoLogging-Protocol.h"

@class IGMedia, IGSponsoredSupportConfiguration, IGUserSession, IGVideoViewLogger, NSArray, NSString;
@protocol IGFeedItemLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate><IGFeedItemWithCarouselLoggingProviderDelegate><IGFeedItemVideoLoggingProviderDelegate;

@interface IGVideoAdLogger : NSObject<IGVideoLogging> {
  /* instance variables */
  IGUserSession *_userSession;
  IGMedia *_media;
  IGSponsoredSupportConfiguration *_sponsoredSupportConfig;
  NSObject<IGSponsoredInfoProviding> *_sponsoredInfo;
  IGVPVDImpressionHelper *_impressionHelper;
  NSArray *_viewabilityTrackingSessions;
  IGVideoViewLogger *_videoViewLogger;
  IGFeedVideoViewSession *_videoSession50PercentThreshold;
  IGFeedVideoViewSession *_videoSession100PercentThreshold;
  double _percentVisible;
}

@property (readonly, weak, nonatomic) NSObject<IGFeedItemLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate><IGFeedItemWithCarouselLoggingProviderDelegate><IGFeedItemVideoLoggingProviderDelegate> *feedItemLoggingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session media:(id)media sponsoredSupportConfig:(id)config feedItemLoggingProvider:(id)provider;
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
- (id)extraInfoForLikeWithIsDoubleTap:(BOOL)tap;
- (void)videoViewerDidTapShareIconWithShareSheetSessionId:(id)id analyticsModule:(id)module;
- (void)videoViewerDidTapSendToReshareWithAnalyticsModule:(id)module;
- (void)videoViewerDidDoubleTapToLikeOnAlreadyLikedPostWithAnalyticsModule:(id)module;
@end

#endif /* IGVideoAdLogger_h */