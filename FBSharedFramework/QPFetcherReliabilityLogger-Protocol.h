//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef QPFetcherReliabilityLogger_Protocol_h
#define QPFetcherReliabilityLogger_Protocol_h
@import Foundation;

@protocol QPFetcherReliabilityLogger <NSObject>
/* instance methods */
- (void)logHydrateCounts:(id)counts lastFetchCounts:(id)counts;
- (void)logHydrateCountsForOnDemand:(id)demand;
- (void)logFetchCounts:(id)counts isForced:(BOOL)forced lastFetchTime:(id)time currentFetchTime:(id)time;
- (void)logFetchCountsForOnDemand:(id)demand isForced:(BOOL)forced lastFetchTime:(id)time currentFetchTime:(id)time triggerContext:(id)context additionalData:(id)data surfaceIDsToTriggerIDs:(id)ids userID:(id)id specifiedTrigger:(id)trigger;
- (void)logCacheBatchFetcherPayload:(id)payload additionalData:(id)data;
- (void)logCacheOnDemandFetcherPayload:(id)payload additionalData:(id)data;
- (void)logRemoveBatchFetcherPayload:(id)payload additionalData:(id)data;
- (void)logRemoveOnDemandFetcherPayload:(id)payload additionalData:(id)data;
- (void)logSelectQuickPromotion:(id)promotion extraData:(id)data;
@end

#endif /* QPFetcherReliabilityLogger_Protocol_h */
