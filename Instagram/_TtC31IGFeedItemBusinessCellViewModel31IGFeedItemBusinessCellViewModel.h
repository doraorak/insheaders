//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC31IGFeedItemBusinessCellViewModel31IGFeedItemBusinessCellViewModel_h
#define _TtC31IGFeedItemBusinessCellViewModel31IGFeedItemBusinessCellViewModel_h
@import Foundation;

#include "IGFeedItemCellViewModelProtocol-Protocol.h"

@interface _TtC31IGFeedItemBusinessCellViewModel31IGFeedItemBusinessCellViewModel : NSObject<IGFeedItemCellViewModelProtocol> { // (Swift)
  /* instance variables */
   media;
   feedItemViewModelContext;
   boostLogger;
   containerWidthCached;
   cellHeightCached;
}

/* instance methods */
- (id)initWithMedia:(id)media feedItemCellViewModelContext:(id)context;
- (void)updateWithMedia:(id)media;
- (id)mediaPK;
- (id)mediaId;
- (id)insightsTip;
- (id)boostUnavailableReason;
- (BOOL)coauthorProducerCanSeeOrganicInsights;
- (BOOL)canSeeInsightsAsBrand;
- (long long)promotionState;
- (BOOL)isClipsMedia;
- (BOOL)mediaUserCanBoostPost;
- (BOOL)isBoostedInstagramMediaPromotion;
- (void)setupBoostLoggerWithSession:(id)session;
- (void)didEnterBoostUnavailableError;
- (void)didViewComponent;
- (void)checkFeedAfterPartyEligibilityWithUserSession:(id)session completion:(id /* block */)completion;
- (id)init;
@end

#endif /* _TtC31IGFeedItemBusinessCellViewModel31IGFeedItemBusinessCellViewModel_h */