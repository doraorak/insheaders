//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteInitDataModelBuilder_h
#define IGPromoteInitDataModelBuilder_h
@import Foundation;

#include "DEPProgramLevelContentResponse.h"
#include "IGAPIPromoteAdditionalBusinessInfoRequiredMessage.h"
#include "IGBoostDSADefaultDataModel.h"
#include "IGPromoteLeadGenLeadForm.h"
#include "IGPromoteLinkStickerInfo.h"
#include "IGPromoteProfileSecondaryCTAInfo.h"
#include "IGPromotelatestBudgetWithOffsetPerObjectiveMap.h"

@class NSArray, NSNumber, NSString;

@interface IGPromoteInitDataModelBuilder : NSObject {
  /* instance variables */
  NSString *_userFbId;
  NSString *_pageId;
  NSString *_pageName;
  NSString *_pageProfilePicURI;
  NSString *_adAccountId;
  NSString *_currency;
  NSNumber *_currencyOffset;
  BOOL _hasBudgetLimit;
  NSNumber *_remainingTotalBudgetWithOffset;
  NSNumber *_minDailyBudgetWithOffset;
  NSArray *_dailyBudgetOptionsWithOffset;
  NSNumber *_defaultDailyBudgetWithOffset;
  NSArray *_dailyBudgetPackageOptionsWithOffset;
  NSNumber *_defaultDailyBudgetPackageOptionWithOffset;
  BOOL _isMediaEligibleForStoryPlacement;
  BOOL _isMediaEligibleForExplorePlacement;
  NSNumber *_defaultDurationInDays;
  BOOL _isPoliticalAdsEligible;
  NSString *_politicalAdsByLineText;
  BOOL _isLocalAwarenessEligible;
  NSString *_destination;
  NSString *_recommendedDestination;
  NSString *_destinationRecommendationReason;
  NSString *_callToAction;
  NSString *_websiteUrl;
  NSString *_displayUrl;
  NSString *_linkedIgtvVideoId;
  NSString *_lastPromotionAudienceId;
  BOOL _isStoryPost;
  BOOL _isCarouselPost;
  BOOL _isIABP;
  NSString *_boostingStatus;
  BOOL _shouldShowPoliticalAdsRestrictionUx;
  BOOL _canRunIGBA;
  BOOL _canUsePromoteHardLink;
  BOOL _isCallCenterAvailable;
  DEPProgramLevelContentResponse *_sbgEngagementEligibilityAndDynamicContent;
  NSArray *_instagramPositions;
  BOOL _hasOptedOutOfSecondaryCTA;
  NSString *_selectedMessagingApp;
  NSString *_profileWebsiteUrl;
  BOOL _hasCreatedLeadAd;
  IGPromoteLeadGenLeadForm *_selectedLeadForm;
  NSString *_selectedMessagingAdsCTA;
  NSString *_selectedLeadAdsCTA;
  NSArray *_additionalEligiblePublisherPlatforms;
  NSArray *_additionalPublisherPlatformsUserSelected;
  IGPromoteProfileSecondaryCTAInfo *_profileVisitSecondaryCTAInfo;
  IGAPIPromoteAdditionalBusinessInfoRequiredMessage *_additionalBusinessInfoRequiredMessage;
  NSArray *_eligibleObjectives;
  IGPromoteLinkStickerInfo *_linkStickerInfo;
  IGPromotelatestBudgetWithOffsetPerObjectiveMap *_latestBudgetWithOffsetPerObjectiveMap;
  BOOL _isMediaCaptionEditable;
  BOOL _doesMediaContainMessagingIntent;
  BOOL _isTrustedTierTwoOrHigher;
  NSString *_mediaProductType;
  BOOL _hasUsedCTWABefore;
  BOOL _isSensitiveVerticalAd;
  IGBoostDSADefaultDataModel *_dsaDefaultData;
  NSString *_businessVertical;
  BOOL _hasAdvertised;
}

/* class methods */
+ (id)promoteInitDataModelFromExistingPromoteInitDataModel:(id)model;

/* instance methods */
- (id)initWithCurrency:(id)currency currencyOffset:(id)offset minDailyBudgetWithOffset:(id)offset dailyBudgetOptionsWithOffset:(id)offset defaultDailyBudgetWithOffset:(id)offset defaultDurationInDays:(id)days displayUrl:(id)url;
- (id)build;
- (id)withUserFbId:(id)id;
- (id)withPageId:(id)id;
- (id)withPageName:(id)name;
- (id)withPageProfilePicURI:(id)uri;
- (id)withAdAccountId:(id)id;
- (id)withCurrency:(id)currency;
- (id)withCurrencyOffset:(id)offset;
- (id)withHasBudgetLimit:(BOOL)limit;
- (id)withRemainingTotalBudgetWithOffset:(id)offset;
- (id)withMinDailyBudgetWithOffset:(id)offset;
- (id)withDailyBudgetOptionsWithOffset:(id)offset;
- (id)withDefaultDailyBudgetWithOffset:(id)offset;
- (id)withDailyBudgetPackageOptionsWithOffset:(id)offset;
- (id)withDefaultDailyBudgetPackageOptionWithOffset:(id)offset;
- (id)withIsMediaEligibleForStoryPlacement:(BOOL)placement;
- (id)withIsMediaEligibleForExplorePlacement:(BOOL)placement;
- (id)withDefaultDurationInDays:(id)days;
- (id)withIsPoliticalAdsEligible:(BOOL)eligible;
- (id)withPoliticalAdsByLineText:(id)text;
- (id)withIsLocalAwarenessEligible:(BOOL)eligible;
- (id)withDestination:(id)destination;
- (id)withRecommendedDestination:(id)destination;
- (id)withDestinationRecommendationReason:(id)reason;
- (id)withCallToAction:(id)action;
- (id)withWebsiteUrl:(id)url;
- (id)withDisplayUrl:(id)url;
- (id)withLinkedIgtvVideoId:(id)id;
- (id)withLastPromotionAudienceId:(id)id;
- (id)withIsStoryPost:(BOOL)post;
- (id)withIsCarouselPost:(BOOL)post;
- (id)withIsIABP:(BOOL)iabp;
- (id)withBoostingStatus:(id)status;
- (id)withShouldShowPoliticalAdsRestrictionUx:(BOOL)ux;
- (id)withCanRunIGBA:(BOOL)igba;
- (id)withCanUsePromoteHardLink:(BOOL)link;
- (id)withIsCallCenterAvailable:(BOOL)available;
- (id)withSbgEngagementEligibilityAndDynamicContent:(id)content;
- (id)withInstagramPositions:(id)positions;
- (id)withHasOptedOutOfSecondaryCTA:(BOOL)cta;
- (id)withSelectedMessagingApp:(id)app;
- (id)withProfileWebsiteUrl:(id)url;
- (id)withHasCreatedLeadAd:(BOOL)ad;
- (id)withSelectedLeadForm:(id)form;
- (id)withSelectedMessagingAdsCTA:(id)cta;
- (id)withSelectedLeadAdsCTA:(id)cta;
- (id)withAdditionalEligiblePublisherPlatforms:(id)platforms;
- (id)withAdditionalPublisherPlatformsUserSelected:(id)selected;
- (id)withProfileVisitSecondaryCTAInfo:(id)ctainfo;
- (id)withAdditionalBusinessInfoRequiredMessage:(id)message;
- (id)withEligibleObjectives:(id)objectives;
- (id)withLinkStickerInfo:(id)info;
- (id)withLatestBudgetWithOffsetPerObjectiveMap:(id)map;
- (id)withIsMediaCaptionEditable:(BOOL)editable;
- (id)withDoesMediaContainMessagingIntent:(BOOL)intent;
- (id)withIsTrustedTierTwoOrHigher:(BOOL)higher;
- (id)withMediaProductType:(id)type;
- (id)withHasUsedCTWABefore:(BOOL)ctwabefore;
- (id)withIsSensitiveVerticalAd:(BOOL)ad;
- (id)withDsaDefaultData:(id)data;
- (id)withBusinessVertical:(id)vertical;
- (id)withHasAdvertised:(BOOL)advertised;
@end

#endif /* IGPromoteInitDataModelBuilder_h */
