//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserScopedObjects_IGRankingPrefetchPredictService_h
#define IGUserScopedObjects_IGRankingPrefetchPredictService_h
@import Foundation;

#include "IGDirectInboxSubscriptionService.h"
#include "IGFriendStatusChangedListener-Protocol.h"
#include "IGRankingFeatureBasedBooster.h"
#include "IGRankingODMLPersistenceManager.h"
#include "IGRankingPredictFollowingData.h"
#include "IGRankingPredictInboxData.h"
#include "IGRankingPredictLastPositiveInboxData.h"
#include "IGRankingPredictRankingData.h"
#include "IGRankingPredictShareSheetInteractionData.h"
#include "IGRankingService.h"
#include "IGRankingServiceListener-Protocol.h"
#include "IGSubscriptionToken-Protocol.h"
#include "IGUser.h"
#include "IGUserDefaults.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGWarmStartListener-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString;
@protocol IGRankingPrefetchPredictor;

@interface IGUserScopedObjects (IGRankingPrefetchPredictService)
/* instance methods */
- (id)rankingPrefetchPredictService;
@end

#endif /* IGUserScopedObjects_IGRankingPrefetchPredictService_h */