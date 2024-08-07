//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSponsoredInfoProviding_Protocol_h
#define IGSponsoredInfoProviding_Protocol_h
@import Foundation;

@protocol IGSponsoredInfoProviding <NSObject>

@property (readonly, nonatomic) NSString *adTitle;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) BOOL showIcon;
@property (readonly, nonatomic) BOOL allowDirectShare;
@property (readonly, nonatomic) BOOL isDemoAd;
@property (readonly, nonatomic) BOOL isHoldout;
@property (readonly, nonatomic) BOOL showAdChoicesIcon;
@property (readonly, copy, nonatomic) NSString *trackingToken;
@property (readonly, nonatomic) long long hideFlowVersion;
@property (retain, nonatomic) NSArray *possibleHideAnswers;
@property (readonly, copy, nonatomic) NSString *aboutAdsServerParams;
@property (readonly, copy, nonatomic) NSArray *cookies;
@property (readonly, copy, nonatomic) NSString *adId;
@property (readonly, nonatomic) BOOL displayViewabilityEligible;
@property (readonly, nonatomic) BOOL showFBPageNameHeadline;
@property (readonly, nonatomic) BOOL hideUsername;
@property (readonly, nonatomic) BOOL isAutomaticallyTranslated;
@property (readonly, copy, nonatomic) NSString *timeSinceInteraction;
@property (readonly, copy, nonatomic) NSDictionary *directResponseInfoDictionary;
@property (readonly, nonatomic) IGDirectResponseInfo *directResponseInfo;
@property (readonly, nonatomic) NSString *ctaActionText;
@property (readonly, nonatomic) NSURL *ctaLink;
@property (readonly, nonatomic) IGAdsFeedEndSceneInfoData *adsFeedEndSceneInfoData;
@property (readonly, copy, nonatomic) NSString *politicalContextText;
@property (readonly, copy, nonatomic) NSString *politicalAdHeaderInfo;
@property (readonly, nonatomic) BOOL forceDisplayFBPageName;
@property (readonly, nonatomic) IGStoryLandscapeAdsMetadata *backgroundMetadata;
@property (readonly, nonatomic) IGClickToMessagingAdsInfo *clickToMessagingAdsInfo;
@property (readonly, nonatomic) IGClickToWhatsAppFallbackWrapper *clickToWhatsAppFallbackWrapper;
@property (readonly, nonatomic) BOOL shouldShowSecondaryCtaOnProfile;
@property (readonly, nonatomic) IGCTDAdsInfo *ctdAdsInfo;
@property (readonly, nonatomic) IGClickToDirectLeadGenAdsInfo *clickToDirectLeadGenAdsInfo;
@property (readonly, nonatomic) IGClickToJoinAdsInfo *clickToJoinAdsInfo;
@property (readonly, nonatomic) IGBuyerIncentiveAdsInfo *buyerIncentiveAdsInfoFeed;
@property (readonly, nonatomic) IGBuyerIncentiveAdsInfo *buyerIncentiveAdsInfoStories;
@property (readonly, copy, nonatomic) NSURL *fbPageUrl;
@property (readonly, nonatomic) IGAdsPBIAProfileBrowseInfo *pbiaProfileBrowseInfo;
@property (readonly, nonatomic) BOOL isPreviewableVideoAd;
@property (readonly, nonatomic) BOOL isSensitiveVerticalAd;
@property (readonly, nonatomic) BOOL isLuxuryVerticalAd;
@property (readonly, nonatomic) BOOL isPharmaAndSensitiveVerticalAd;
@property (readonly, nonatomic) BOOL isPharmaVerticalAd;
@property (readonly, nonatomic) BOOL isAdsFollowButtonEligible;
@property (readonly, nonatomic) IGProfileVisitAdsInfo *profileVisitAdsInfo;
@property (readonly, nonatomic) IGSundialMidSceneInfo *midSceneInfo;
@property (readonly, nonatomic) IGSundialCarouselRenderingConfiguration *carouselRenderingConfiguration;
@property (readonly, nonatomic) IGSundialAdsCTAInfo *ctaInfo;
@property (readonly, copy, nonatomic) NSString *adDestination;
@property (readonly, copy, nonatomic) NSNumber *campaignId;
@property (readonly, copy, nonatomic) NSArray *copRenderDecision;
@property (readonly, copy, nonatomic) NSArray *ccaOptimizationOptions;
@property (readonly, copy, nonatomic) NSString *bcaPPLRemovalOption;
@property (readonly, copy, nonatomic) IGAPIAdsIAWRatingAndReviewInfoDict *iawRatingsAndReviewsInfo;
@property (readonly, copy, nonatomic) IGRatingsAndReviewsInfo *ratingsAndReviewsInfo;
@property (readonly, copy, nonatomic) NSString *creationSource;
@property (readonly, copy, nonatomic) NSString *callExtensionPhoneNumber;
@property (readonly, copy, nonatomic) IGMessageExtensionInfo *messageExtensionInfo;
@property (readonly, nonatomic) IGLeadGenFormPreClickData *leadGenPreClickData;
@property (readonly, nonatomic) BOOL isIneligibleForLeadGenAdsNewExperience;
@property (readonly, nonatomic) NSNumber *leadGenFormId;
@property (readonly, nonatomic) BOOL isFormExtensionEligible;
@property (readonly, nonatomic) BOOL isMultiAdsEligible;
@property (retain, nonatomic) IGIntentAwareAdData *intentAwareAdData;
@property (readonly, nonatomic) NSString *multiAdsMediaTapDestination;
@property (nonatomic) BOOL didTriggerIntentAwareAdsInsertion;
@property (readonly, nonatomic) NSArray *eligiblePostTriggerExperiences;
@property (readonly, nonatomic) NSArray *eligiblePostTriggerExperiencesTriggers;
@property (readonly, nonatomic) IGMusicInfo *musicInfo;
@property (readonly, nonatomic) NSArray *previewComments;
@property (readonly, nonatomic) BOOL shouldFetchPreviewComments;
@property (readonly, nonatomic) IGAdsCTATrustInfoData *ctaTrustInfo;
@property (readonly, nonatomic) IGAdsTextTrustInfoData *textTrustInfo;
@property (readonly, copy, nonatomic) NSString *disclaimerTitle;
@property (readonly, copy, nonatomic) NSString *disclaimerText;
@property (readonly, copy, nonatomic) NSString *disclaimerURL;
@property (readonly, nonatomic) BOOL isOverlayAd;
@property (readonly, copy, nonatomic) NSString *overlayAdHostMediaId;
@property (readonly, copy, nonatomic) IGSundialOverlayAdsFormatModel *overlayAdsFormatModel;
@property (readonly, copy, nonatomic) NSString *displayDomain;
@property (readonly, nonatomic) NSNumber *ODLProductCursor;
@property (readonly, nonatomic) IGAdsSponsoredDisclaimer *adsSponsoredDisclaimer;
@property (readonly, nonatomic) NSArray *dynamicAdsInfos;
@property (readonly, copy, nonatomic) NSNumber *hostProfileId;
@property (readonly, nonatomic) BOOL isHostProfileRevShare;
@property (readonly, nonatomic) BOOL isShopsIFUEligible;
@property (readonly, nonatomic) BOOL isBAUIFUEligible;
@property (readonly, nonatomic) BOOL isPostClickAfiEligible;
@property (readonly, nonatomic) BOOL isConsentGrowthIFUEligible;
@property (readonly, nonatomic) BOOL isConsentGrowthPopupEligible;
@property (readonly, copy, nonatomic) NSString *adtaxonI18nTop1L7Prediction;
@property (readonly, nonatomic) BOOL isReelsEndSceneEnabled;
@property (readonly, nonatomic) NSDictionary *adsDebugInfo;
@property (readonly, nonatomic) NSDictionary *feedVideoAdPostTapWatchAndBrowseInfo;
@property (readonly, nonatomic) BOOL isReelsViewerBasedWatchAndBrowseEnabled;
@property (readonly, nonatomic) IGAdsIABPostClickData *iabPostClickData;
@property (readonly, copy, nonatomic) NSString *genAIDisclaimerText;
@property (readonly, nonatomic) NSArray *adTransparencyDisclaimers;
@property (readonly, nonatomic) IGClipsOnImpressionControl *reelsOnImpressionControl;
@property (readonly, nonatomic) IGAFIInfo *afiInfo;
@property (readonly, nonatomic) IGGestureToActionInfo *gestureToActionInfo;
@property (readonly, nonatomic) unsigned long long formatType;
@property (readonly, nonatomic) IGIABInfo *iabInfo;
@property (readonly, nonatomic) IGAdsIABScreenshotURLData *screenshotURLData;
@property (readonly, nonatomic) BOOL isDelayedSkipAd;
@property (readonly, nonatomic) NSArray *nativeTextOverlays;
@property (readonly, nonatomic) IGOOPSSurveyInfo *igOopsSurveyInfo;
@property (retain, nonatomic) NSString *adRequestID;
@property (readonly, nonatomic) IGAdMediaTextOCRInfo *adMediaTextOCRInfo;

@end

#endif /* IGSponsoredInfoProviding_Protocol_h */
