//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdPlatformStatesCenter_h
#define IGAdPlatformStatesCenter_h
@import Foundation;

#include "IGAdInvalidationArbiterEvents.h"
#include "IGAdPlatformExperimentConfigs.h"
#include "IGAdPlatformLevers.h"
#include "IGAdPlatformSessionStates.h"
#include "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSString;
@protocol IGAdPlatformSponsoredItemInfoProviding><IGUnitItemInformationProviding><IGAdGapRuleEnforceable><NSCopying><IGNetworkResponseProviding;

@interface IGAdPlatformStatesCenter : NSObject<NSObject> {
  /* instance variables */
  NSMutableOrderedSet *_orderedOrganicIdsHaveAdRequest;
  NSMutableOrderedSet *_orderedOrganicIdsHaveOverlayAdRequest;
  NSMutableDictionary *_adAndNetegoTrackingModelDict;
  NSMutableDictionary *_organicTrackingModelDict;
  NSMutableArray *_cachedAdAndNetegoTrackingModels;
  NSMutableArray *_cachedOrganicTrackingModels;
  unsigned long long _adInsertionSurface;
  IGAdPlatformLevers *_adPlatformLevers;
  IGAdPlatformExperimentConfigs *_adPlatformExperimentConfigs;
  IGAdInvalidationArbiterEvents *_arbiterEvents;
  IGAdPlatformSessionStates *_sessionStates;
  NSMutableOrderedSet *_insertedSponsoredItems;
  NSMutableArray *_storiesStatesSnapshots;
  NSMutableDictionary *_responseHandlingStatesDict;
  NSDictionary *_lastInsertionEventMetadata;
  long long _recentDeletedInsertionPosition;
  NSArray *_surfaceNonSponsoredItems;
  NSMutableDictionary *_possibleDuplicatedTrackingModelDict;
  NSArray *_itemsShouldBeReplacedFromRefresh;
  NSMutableArray *_dicardedItemIdsInTheSameSession;
  NSMutableDictionary *_dicardedItemIdsInPastFifteenMins;
  NSArray *_itemsFromPrefetch;
  long long _lastInsertedAdIndex;
  long long _lastInsertedNetegoIndex;
}

@property (readonly, nonatomic) NSObject<IGAdPlatformSponsoredItemInfoProviding><IGUnitItemInformationProviding><IGAdGapRuleEnforceable><NSCopying><IGNetworkResponseProviding> *lastInsertedSponsoredItem;
@property (retain, nonatomic) NSObject<IGAdPlatformSponsoredItemInfoProviding><IGUnitItemInformationProviding><IGAdGapRuleEnforceable><NSCopying><IGNetworkResponseProviding> *lastInsertedSponsoredItemCrossSession;
@property (readonly, nonatomic) long long lastImpressedOrganicIndex;
@property (readonly, nonatomic) long long lastImpressedSponsoredItemIndex;
@property (copy, nonatomic) NSString *adSessionId;
@property (readonly, nonatomic) long long lastInvalidatedAdIndex;
@property (nonatomic) BOOL isFirstTimePassStoriesTailloadPaginationCheck;
@property (nonatomic) BOOL unseenSponsoredItemsCleared;
@property (nonatomic) long long adaptablePositionBalance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAdPlatformToolbox:(id)toolbox;
- (id)lastSessionEndTime;
- (void)addStoriesStatesSnapshot:(id)snapshot;
- (id)allInsertionTrackingModels;
- (id)insertionTrackingModelForId:(id)id;
- (id)allOrganicTrackingModels;
- (id)cachedInsertionTrackingModelsForSeenStates;
- (id)cachedOrganicTrackingModelsForSeenStates;
- (BOOL)didInsertSponsoredItem:(id)item;
- (long long)insertionIndexForSponsoredItem:(id)item;
- (long long)lastInsertionPositionBeforeIndex:(long long)index forItemType:(unsigned long long)type;
- (BOOL)didImpressSponsoredItemId:(id)id;
- (BOOL)didFetchAdsForOrganicItem:(id)item;
- (BOOL)didFetchOverlayAdsForOrganicItem:(id)item;
- (BOOL)didCarryOverSponsoredItemWithId:(id)id;
- (BOOL)sponsoredItemIsInPool:(id)pool;
- (BOOL)didPrefetchSponsoredItemWithId:(id)id;
- (BOOL)didConsumeSponsoredItem;
- (BOOL)isAdClientPlatformDeliveredForId:(id)id;
- (void)clearCachedTrackingInfoForSeenStates;
- (long long)targetPositionForOverlayAdHostMedia:(id)media;
- (long long)numberOfSponsoredItemsImpressed;
- (long long)numberOfOrganicItemsImpressed;
- (void)invalidateInsertedSponsoredItem:(id)item;
- (void)mandatorySyncAdPoolItemsIfNecessary:(id)necessary;
- (id)insertedUnseenSponsoredItem;
- (void)storeAdResponseHandlingStates:(id)states;
- (id)fetchAdResponseHandlingStatesWithRequestId:(id)id;
- (long long)focusedIndex;
- (void)storeSurfaceNonSponsoredItems:(id)items;
- (id)surfaceNonSponsoredItems;
- (void)storeItemsShouldBeReplacedFromRefresh:(id)refresh;
- (id)itemsShouldBeReplacedFromRefresh;
- (id)trackingModelForItemId:(id)id;
- (id)discardedItemIdsInTheSameSession;
- (id)discardedItemIdsInTheSamePeriod;
- (void)storeSponsoredItemsFromPrefetch:(id)prefetch;
- (id)itemIdsFromPreviousPrefetch;
- (id)statesExtraLoggingForSponsoredItem:(id)item;
- (void)storePreviousInsertionEventMetadata:(id)metadata;
@end

#endif /* IGAdPlatformStatesCenter_h */
