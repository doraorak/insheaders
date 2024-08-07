//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC41IGFeedItemHiddenConfirmationCellViewModel41IGFeedItemHiddenConfirmationCellViewModel_h
#define _TtC41IGFeedItemHiddenConfirmationCellViewModel41IGFeedItemHiddenConfirmationCellViewModel_h
@import Foundation;

#include "IGFeedItemCellViewModelProtocol-Protocol.h"
#include "IGHiddenMediaProviderProtocol-Protocol.h"

@interface _TtC41IGFeedItemHiddenConfirmationCellViewModel41IGFeedItemHiddenConfirmationCellViewModel : NSObject<IGFeedItemCellViewModelProtocol, IGHiddenMediaProviderProtocol> { // (Swift)
  /* instance variables */
   media;
   feedItemViewModelContext;
   hiddenMediaHandler;
   hiddenMediaHandlerDelegate;
}

/* instance methods */
- (id)initWithMedia:(id)media feedItemCellViewModelContext:(id)context;
- (void)updateWithMedia:(id)media;
- (id)mediaPK;
- (id)mediaUser;
- (id)mediaId;
- (id)followHashtagInfo;
- (id)inventorySource;
- (long long)mediaType;
- (id)mediaTopics;
- (void)setMediaHidden:(BOOL)hidden;
- (BOOL)isInFeedRecommendation;
- (id)feedDemotionControlWithType:(long long)type;
- (BOOL)shouldRenderAsExploreInFeedUnit;
- (void)trackingManagerHideFeedRecWithActionType:(long long)type source:(long long)source extraInfo:(id)info sessionChain:(id)chain hideReason:(id)reason data:(id)data;
- (void)trackingManagerTrackHidingForItemWithActionType:(long long)type source:(long long)source extraInfo:(id)info sessionChain:(id)chain;
- (void)trackHidingMainFeedMediaWithDemotedAuthorWithActionType:(long long)type source:(long long)source extraInfo:(id)info sessionChain:(id)chain;
- (void)mediaPositiveControlsPerformRequestWithSessionId:(id)id surface:(long long)surface eventSource:(long long)source mediaIndex:(id)index recsIndex:(id)index;
- (void)sundialPerformClipsHideRequestWithSessionId:(id)id actionType:(long long)type mediaIndex:(long long)index selectedReason:(id)reason data:(id)data source:(long long)source sessionChain:(id)chain;
- (void)sundialLogClipsViewerSeeLessWithSessionId:(id)id chainingSessionId:(id)id mediaIndex:(long long)index parentMPK:(id)mpk sessionChain:(id)chain selectedReason:(id)reason;
- (void)sundialLogClipsViewerSeeLessUndoWithSessionId:(id)id chainingSessionId:(id)id mediaIndex:(long long)index parentMPK:(id)mpk sessionChain:(id)chain;
- (void)mediaHiddenAnnouncerMediaHiddenFeedItemWithAnnouncer:(id)announcer reason:(long long)reason;
- (void)mediaUnhiddenAnnouncerMediaUnhiddenFeedItemWithAnnouncer:(id)announcer;
- (void)feedItemInvalidationHelperHandleUndoDismissFeedItemWithAnnouncer:(id)announcer;
- (void)hideSponsoredFeedItemForReason:(id)reason extra:(id)extra sponsoredInfoProviding:(id)providing;
- (BOOL)shouldShowControlCenterEntryPointForMediaWithSponsoredInfoProviding:(id)providing;
- (void)showFeedReportActionSheetWithUserSession:(id)session removeTombstone:(BOOL)tombstone carouselIndex:(long long)index loggingProviderDelegate:(id)delegate completionBlock:(id /* block */)block;
- (void)logEventWithEvent:(id)event extra:(id)extra;
- (void)reportAndLogHidingWithEventType:(long long)type extra:(id)extra;
- (id)createInsightsAnalyticEventWithName:(id)name sponsoredPostInfo:(id)info;
- (id)init;
@end

#endif /* _TtC41IGFeedItemHiddenConfirmationCellViewModel41IGFeedItemHiddenConfirmationCellViewModel_h */
