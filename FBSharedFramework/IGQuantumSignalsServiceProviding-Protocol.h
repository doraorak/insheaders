//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQuantumSignalsServiceProviding_Protocol_h
#define IGQuantumSignalsServiceProviding_Protocol_h
@import Foundation;

@protocol IGQuantumSignalsServiceProviding <IGScopeEnding>
/* instance methods */
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (void)didTapCTAWithItemId:(id)id authorId:(id)id containerModule:(id)module inventorySource:(id)source timestamp:(double)timestamp itemType:(unsigned long long)type mediaIds:(id)ids tapMediaId:(id)id;
- (void)didTapLikeButtonWithItemId:(id)id authorId:(id)id containerModule:(id)module inventorySource:(id)source timestamp:(double)timestamp itemType:(unsigned long long)type mediaIds:(id)ids tapMediaId:(id)id isLike:(BOOL)like;
- (void)updateSeenStateModelWithItemId:(id)id mediaId:(id)id multiAdsType:(long long)type adPlatformMetadata:(id)metadata containerModule:(id)module inventorySource:(id)source itemType:(unsigned long long)type timespent:(double)timespent maxPercentVisible:(id)visible itemEntered:(BOOL)entered gapToLastAd:(id)ad gapToLastNetego:(id)netego clientInsertionPosition:(id)position reelGapToLastAd:(id)ad adConsumedMediaGap:(id)gap numMediaConsumedInAd:(id)ad;
- (void)didTapXoutWithContainerModule:(id)module inventorySource:(id)source authorId:(id)id itemId:(id)id itemType:(unsigned long long)type mediaIds:(id)ids xoutTimeStamp:(double)stamp xoutMediaId:(id)id reason:(id)reason adPlatformMetadata:(id)metadata;
- (void)didTapProfileWithItemId:(id)id authorId:(id)id containerModule:(id)module inventorySource:(id)source timestamp:(double)timestamp itemType:(unsigned long long)type mediaIds:(id)ids tapMediaId:(id)id accountType:(id)type;
- (void)didIntentActionWithContainerModule:(id)module inventorySource:(id)source authorId:(id)id itemId:(id)id itemType:(unsigned long long)type mediaIds:(id)ids signalTimeStamp:(double)stamp signalMediaId:(id)id signalType:(unsigned long long)type;
- (void)didTapAndHoldWithItemId:(id)id authorId:(id)id containerModule:(id)module inventorySource:(id)source timestamp:(double)timestamp itemType:(unsigned long long)type mediaIds:(id)ids tapMediaId:(id)id;
- (void)didTapAFIWithItemId:(id)id authorId:(id)id containerModule:(id)module inventorySource:(id)source timestamp:(double)timestamp itemType:(unsigned long long)type mediaIds:(id)ids tapMediaId:(id)id afiId:(id)id afiType:(id)type adTrackingToken:(id)token extraData:(id)data triggerSourceEnum:(id)enum questionId:(id)id globalPosition:(long long)position answerId:(id)id interests:(id)interests afiEventType:(id)type quantumSignalsSurface:(unsigned long long)surface;
@end

#endif /* IGQuantumSignalsServiceProviding_Protocol_h */
