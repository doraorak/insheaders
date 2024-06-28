//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdRequestParams_h
#define IGAdRequestParams_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGAdPlatformGapRules.h"
#include "IGIntentAwareAdsContextualOrganicInfo.h"
#include "IGNudgeParamsModel.h"

@class NSArray, NSDictionary, NSString;

@interface IGAdRequestParams : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSArray *_iGTVAdRequestParams_organicItemIds;
  NSString *_iGTVAdRequestParams_containerModule;
  NSString *_iGTVAdRequestParams_feedSessionId;
  NSString *_storiesAdRequestParam_traySessionId;
  NSString *_storiesAdRequestParam_viewerSessionId;
  NSArray *_storiesAdRequestParam_trayIds;
  BOOL _storiesAdRequestParam_isAdsSensitive;
  double _storiesAdRequestParam_prefetchScore;
  NSString *_storiesAdRequestParam_containerModule;
  NSString *_storiesIntentAwareAdRequestParam_seedAdId;
  NSString *_storiesIntentAwareAdRequestParam_seedAdTrackingToken;
  long long _storiesIntentAwareAdRequestParam_seedAdPosition;
  BOOL _storiesIntentAwareAdRequestParam_isSeedAdEligible;
  NSString *_storiesIntentAwareAdRequestParam_triggerType;
  NSString *_storiesIntentAwareAdRequestParam_nextAdSlotAdId;
  NSString *_storiesIntentAwareAdRequestParam_nextAdSlotAdTrackingToken;
  IGAdPlatformGapRules *_storiesIntentAwareAdRequestParam_nextAdSlotAdGapRules;
  NSString *_storiesIntentAwareAdRequestParam_traySessionId;
  NSString *_storiesIntentAwareAdRequestParam_viewerSessionId;
  NSString *_storiesIntentAwareAdRequestParam_containerModule;
  NSString *_reelsIntentAwareAdRequestParam_seedAdId;
  NSString *_reelsIntentAwareAdRequestParam_seedAdTrackingToken;
  long long _reelsIntentAwareAdRequestParam_seedAdPosition;
  NSString *_reelsIntentAwareAdRequestParam_nextSlotAdId;
  NSString *_reelsIntentAwareAdRequestParam_nextSlotAdTrackingToken;
  NSString *_reelsIntentAwareAdRequestParam_triggerType;
  NSString *_reelsIntentAwareAdRequestParam_containerModule;
  NSString *_reelsIntentAwareAdRequestParam_viewState;
  NSArray *_exploreAdRequestParam_organicItemIds;
  NSString *_exploreAdRequestParam_chainingSessionId;
  NSArray *_sundialAdRequestParam_allItems;
  long long _sundialAdRequestParam_newOrganicItemsCount;
  NSString *_sundialAdRequestParam_seedItemId;
  NSString *_sundialAdRequestParam_chainingSessionId;
  NSString *_sundialAdRequestParam_viewerSessionId;
  NSString *_sundialAdRequestParam_containerModule;
  BOOL _sundialAdRequestParam_isOverlay;
  NSDictionary *_sundialAdRequestParam_overlayHostMediaToAdItemMap;
  IGNudgeParamsModel *_sundialAdRequestParam_nudgeParams;
  NSString *_sundialAdRequestParam_viewState;
  BOOL _sundialAdRequestParam_hasCameraPermission;
  BOOL _sundialAdRequestParam_allowReusingOrganicItemsForFetchingAds;
  NSString *_sundialAdRequestParam_seedAdId;
  NSString *_sundialAdRequestParam_seedAdTrackingToken;
  NSString *_intentAwareFeedAdRequestParam_seedAdId;
  NSString *_intentAwareFeedAdRequestParam_seedAdToken;
  long long _intentAwareFeedAdRequestParam_seedPostPosition;
  NSString *_intentAwareFeedAdRequestParam_triggerType;
  NSString *_intentAwareFeedAdRequestParam_containerModule;
  BOOL _intentAwareFeedAdRequestParam_logExposureOnServer;
  NSString *_intentAwareFeedAdRequestParam_inventorySource;
  unsigned long long _intentAwareFeedAdRequestParam_numMultiAdsInFeed;
  IGIntentAwareAdsContextualOrganicInfo *_intentAwareFeedAdRequestParam_organicInfo;
  NSString *_intentAwareFeedAdRequestParam_nextSlotAdId;
  NSString *_intentAwareFeedAdRequestParam_nextSlotAdTrackingToken;
  BOOL _intentAwareFeedAdRequestParam_isSeedAdEligible;
  BOOL _intentAwareFeedAdRequestParam_isSeedVideoAd;
  long long _intentAwareFeedAdRequestParam_seedMediaWidth;
  long long _intentAwareFeedAdRequestParam_seedMediaHeight;
  NSString *_intentAwareFeedAdRequestParam_viewState;
  long long _intentAwareFeedAdRequestParam_newOrganicItemsCount;
  NSArray *_intentAwareFeedAdRequestParam_nonSponsoredItems;
  NSString *_profileAdRequestParam_profileId;
  NSString *_profileAdRequestParam_containerModule;
  NSString *_profileAdRequestParam_requestScenario;
  NSString *_profileAdRequestParam_seedMediaId;
  NSString *_profileAdRequestParam_chainingSessionId;
  NSString *_searchFeedAdRequestParam_keyword;
  NSString *_searchFeedAdRequestParam_seedMediaId;
  NSString *_searchFeedAdRequestParam_seedAuthorId;
  NSString *_searchFeedAdRequestParam_containerModule;
}

/* class methods */
+ (id)exploreAdRequestParamWithOrganicItemIds:(id)ids chainingSessionId:(id)id;
+ (id)iGTVAdRequestParamsWithOrganicItemIds:(id)ids containerModule:(id)module feedSessionId:(id)id;
+ (id)intentAwareFeedAdRequestParamWithSeedAdId:(id)id seedAdToken:(id)token seedPostPosition:(long long)position triggerType:(id)type containerModule:(id)module logExposureOnServer:(BOOL)server inventorySource:(id)source numMultiAdsInFeed:(unsigned long long)feed organicInfo:(id)info nextSlotAdId:(id)id nextSlotAdTrackingToken:(id)token isSeedAdEligible:(BOOL)eligible isSeedVideoAd:(BOOL)ad seedMediaWidth:(long long)width seedMediaHeight:(long long)height viewState:(id)state newOrganicItemsCount:(long long)count nonSponsoredItems:(id)items;
+ (id)profileAdRequestParamWithProfileId:(id)id containerModule:(id)module requestScenario:(id)scenario seedMediaId:(id)id chainingSessionId:(id)id;
+ (id)reelsIntentAwareAdRequestParamWithSeedAdId:(id)id seedAdTrackingToken:(id)token seedAdPosition:(long long)position nextSlotAdId:(id)id nextSlotAdTrackingToken:(id)token triggerType:(id)type containerModule:(id)module viewState:(id)state;
+ (id)searchFeedAdRequestParamWithKeyword:(id)keyword seedMediaId:(id)id seedAuthorId:(id)id containerModule:(id)module;
+ (id)storiesAdRequestParamWithTraySessionId:(id)id viewerSessionId:(id)id trayIds:(id)ids isAdsSensitive:(BOOL)sensitive prefetchScore:(double)score containerModule:(id)module;
+ (id)storiesIntentAwareAdRequestParamWithSeedAdId:(id)id seedAdTrackingToken:(id)token seedAdPosition:(long long)position isSeedAdEligible:(BOOL)eligible triggerType:(id)type nextAdSlotAdId:(id)id nextAdSlotAdTrackingToken:(id)token nextAdSlotAdGapRules:(id)rules traySessionId:(id)id viewerSessionId:(id)id containerModule:(id)module;
+ (id)sundialAdRequestParamWithAllItems:(id)items newOrganicItemsCount:(long long)count seedItemId:(id)id chainingSessionId:(id)id viewerSessionId:(id)id containerModule:(id)module isOverlay:(BOOL)overlay overlayHostMediaToAdItemMap:(id)map nudgeParams:(id)params viewState:(id)state hasCameraPermission:(BOOL)permission allowReusingOrganicItemsForFetchingAds:(BOOL)ads seedAdId:(id)id seedAdTrackingToken:(id)token;

/* instance methods */
@end

#endif /* IGAdRequestParams_h */
