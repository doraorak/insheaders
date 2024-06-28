//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStory_AdPlatformSponsoredItemInfoProviding_h
#define IGStory_AdPlatformSponsoredItemInfoProviding_h
@import Foundation;

@interface IGStory (AdPlatformSponsoredItemInfoProviding) <IGAdPlatformSponsoredItemInfoProviding>
/* instance methods */
- (id)adExpiryTimestamp;
- (long long)priorityIndex;
- (long long)targetInsertionPosition;
- (id)adPlatformSponsoredItemId;
- (id)adPlatformMetadata;
- (id)adPlatformInvalidationInfo;
- (id)invalidationRules;
- (id)mediaPk;
- (id)adTrackingToken;
- (id)adPodId;
- (long long)indexInAdPod;
- (long long)numAdsInAdPod;
- (void)clearAdPodInfo;
- (id)inventorySource;
- (unsigned long long)deliveryContext;
- (id)appId;
- (BOOL)isEligibleForCrossSessionCarryOver;
- (long long)multiAdsType;
- (BOOL)shouldBeReportedToAdAndNetegoRequestInformation;
- (BOOL)hasMobileAppInstallObjective;
@end

#endif /* IGStory_AdPlatformSponsoredItemInfoProviding_h */