//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBaseUser_h
#define IGBaseUser_h
@import Foundation;

#include "IGAPIStorableObject.h"
#include "FBBoxedBoolean-Protocol.h"
#include "FBBoxedDouble-Protocol.h"
#include "FBBoxedInteger-Protocol.h"
#include "IGAPIActionButtonPartner.h"
#include "IGAPIActiveStandaloneFundraisers.h"
#include "IGAPIBCAdsPermission.h"
#include "IGAPIBioInterestsResponse.h"
#include "IGAPIChainingInfo.h"
#include "IGAPICommerceOnboardingConfig.h"
#include "IGAPICreatorInfo.h"
#include "IGAPICreatorShoppingInfoDict.h"
#include "IGAPIExpiringDiscountDict.h"
#include "IGAPIFBHardLinkInfo.h"
#include "IGAPIFBPageCallToActionIXLabelBundle.h"
#include "IGAPIFanClubInfoDict.h"
#include "IGAPIFanClubStatusSyncInfo.h"
#include "IGAPIGatingDict.h"
#include "IGAPIGrowthFrictionInfo.h"
#include "IGAPIIsCallToActionEnabledBySurfaceDict.h"
#include "IGAPINotificationSettingResponse.h"
#include "IGAPIOpalInfo.h"
#include "IGAPIPinnedChannelsInfoDict.h"
#include "IGAPIProactiveWarningHarmInfo.h"
#include "IGAPIProactiveWarningsEventInfo.h"
#include "IGAPIProfileFundraiserDict.h"
#include "IGAPIProfileNoteOnProfileResponse.h"
#include "IGAPIProfilePicUrlInfo.h"
#include "IGAPIReconsiderationProfileFeatures.h"
#include "IGAPIRelationshipInfoDict.h"
#include "IGAPISchoolsBadgeMetadataDict.h"
#include "IGAPISetiProfileConfig.h"
#include "IGAPIStandaloneFundraiserDict.h"
#include "IGAPIStatusResponse.h"
#include "IGAPISupervisionInfo.h"
#include "IGAPITextPostAppSuggestionCardProfileContext.h"
#include "IGAPITextWithLinkedEntities.h"
#include "IGAPIUserAddressEditingConfigDict.h"
#include "IGAPIUserRelatedAccountsInfoDict.h"
#include "IGAPIUserSettingBundlesInfo.h"

@class NSArray, NSString;

@interface IGBaseUser : IGAPIStorableObject

@property (retain, nonatomic) NSObject<FBBoxedInteger> *acrCount;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *aiAgentCanParticipateInAudioCall;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *aiAgentCanParticipateInVideoCall;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *aiAgentIsAdmin;
@property (retain, nonatomic) NSString *aiCreatorAgentOwnerIgid;
@property (retain, nonatomic) NSString *_private_animatedProfilePicUrl;
@property (retain, nonatomic) NSString *_private_approvalRequestStatus;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *canSeePrimaryCountryInSettings;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *canSeeQuietPostAttribution;
@property (retain, nonatomic) IGAPICreatorInfo *creatorInfo;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *defaultE2eeThreadOneToOne;
@property (retain, nonatomic) NSString *_private_extraDisplayName;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasAcrs;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasCutoverThread;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasEmbodiment;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isArmadilloMessageRequestEligible;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isEligibleForRpSafetyNotice;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isFacebookFriend;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isFollowRestricted;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isGroupXacCallingEligible;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isGroupsXacEligible;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_isInteropEligible;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isVerifiedSearchBoosted;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *numVisibleStorefrontProducts;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *publicOptionFirst;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *_private_restrictionType;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *searchSerpType;
@property (retain, nonatomic) NSString *serviceShopMerchantEntrypointAppId;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *shouldBadgeUserTags;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *silentTagMentionDialog;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *supportsE2eeSpamdStorage;
@property (retain, nonatomic) NSString *robiFeedbackSource;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isUsingUnifiedInboxForDirect;
@property (retain, nonatomic) IGAPIExpiringDiscountDict *expiringDiscount;
@property (retain, nonatomic) IGAPINotificationSettingResponse *_private_broadcastChatPreferenceStatus;
@property (retain, nonatomic) NSArray *reshareXpostDenyReasonsForUser;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isSponsorEnabledForBrandedContentCrosspostingToFb;
@property (retain, nonatomic) NSString *aiAgentOwnerIgid;
@property (retain, nonatomic) NSString *aiAgentOwnerUsername;
@property (retain, nonatomic) NSString *aiAgentPersonaId;
@property (retain, nonatomic) NSString *_private_aiAgentType;
@property (retain, nonatomic) NSString *aiAgentVisibilityStatus;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *requireUnknownContactReview;
@property (retain, nonatomic) IGAPIBCAdsPermission *bcAdsPermission;
@property (retain, nonatomic) NSString *_private_bcApprovedPartnerStatus;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *canBeTaggedAsSponsor;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *canCreateSponsorTags;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *canUseBrandedContentDiscoveryAsBrand;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *canUseBrandedContentDiscoveryAsCreator;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *canUsePaidPartnershipMessagingAsCreator;
@property (retain, nonatomic) NSString *creatorMarketplaceAccountsEngagedMetric;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *showLeaveFeedback;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *totalArEffects;
@property (retain, nonatomic) NSString *defaultMediaKitId;
@property (retain, nonatomic) NSObject<FBBoxedDouble> *closenessScore;
@property (retain, nonatomic) NSString *_private_allowedCommenterType;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasReposts;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isApiUser;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *trialClipsEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasCreatorMarketplaceBrandCreatedAnyInAppCampaign;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *canCoauthorPosts;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isApproved;
@property (retain, nonatomic) NSString *aiAgentOwnerFbid;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_isCreatorAgentEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isSandboxCreatorAgentEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isEligibleForDiverseOwnedBusinessInfo;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isEligibleToDisplayDiverseOwnedBusinessInfo;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasContentNotesViewedInThePast3Days;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasUnseenContentNotesInventory;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *igHasAcceptedTifuALikes;
@property (retain, nonatomic) IGAPIActiveStandaloneFundraisers *_private_activeStandaloneFundraisers;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *canCreateNewStandaloneFundraiser;
@property (retain, nonatomic) NSString *charityId;
@property (retain, nonatomic) IGAPIProfileFundraiserDict *charityProfileFundraiserInfo;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasActiveCharityBusinessProfileFundraiser;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isAllowedToCreateStandaloneNonprofitFundraisers;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isAllowedToCreateStandalonePersonalFundraisers;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isFacebookOnboardedCharity;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isFundraiserInstagramAgreed;
@property (retain, nonatomic) IGAPIStandaloneFundraiserDict *standaloneFundraiserInfo;
@property (retain, nonatomic) IGAPIChainingInfo *chainingInfo;
@property (retain, nonatomic) NSArray *_private_chainingSuggestions;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasChaining;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_isNeedy;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasQuestions;
@property (retain, nonatomic) NSString *highlightsTrayType;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isProfileBroadcastSharingEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isReconAdCtaOnProfileEligibleWithViewer;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isReelsInterestPivotEligible;
@property (retain, nonatomic) IGAPIReconsiderationProfileFeatures *reconFeatures;
@property (retain, nonatomic) IGAPIProfileNoteOnProfileResponse *profileNoteInfo;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isNew;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isActiveOnline;
@property (retain, nonatomic) NSString *_private_liveModeratorEligibility;
@property (retain, nonatomic) NSString *_private_liveModeratorStatus;
@property (retain, nonatomic) NSString *liveWaveStatus;
@property (retain, nonatomic) NSString *_private_liveWithEligibility;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasEncryptedBackup;
@property (retain, nonatomic) NSArray *audioGoDarkEvents;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasMusicOnProfile;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isEligibleForMusicTabSettings;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *musicTabDisabled;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *totalMusicCount;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *myWeekEnabled;
@property (retain, nonatomic) NSArray *pronouns;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasPublicCollections;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isShopAdsReconEligible;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *canCoauthorPostsWithMusic;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isRemixSettingEnabledForPosts;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isRemixSettingEnabledForReels;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isTaggable;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *_private_thirdPartyDownloadsEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasCollabCollections;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasPrivateCollections;
@property (retain, nonatomic) IGAPISchoolsBadgeMetadataDict *showSchoolsBadge;
@property (retain, nonatomic) NSString *adsIncentiveExpirationDate;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *canInfluencersTagBusinessProducts;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *canTagProductsFromMerchants;
@property (retain, nonatomic) IGAPICommerceOnboardingConfig *_private_commerceOnboardingConfig;
@property (retain, nonatomic) IGAPICreatorShoppingInfoDict *creatorShoppingInfo;
@property (retain, nonatomic) NSArray *eligibleCatalogManagementEntrypoints;
@property (retain, nonatomic) NSArray *eligibleShoppingFormats;
@property (retain, nonatomic) NSArray *eligibleShoppingSignupEntrypoints;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasOptEligibleShop;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isAutoHighlightEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isEligibleForProductTaggingNullState;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isIgdProductPickerEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isSellerFeaturesDisabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isShoppingAutoHighlightEligible;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isShoppingCatalogSourceSelectionEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isShoppingCommunityContentEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isShoppingRevokedForSeller;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isShoppingSettingsEnabled;
@property (retain, nonatomic) NSString *_private_merchantCheckoutStyle;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *needsToAcceptShoppingSellerOnboardingTerms;
@property (retain, nonatomic) NSString *_private_sellerShoppableFeedType;
@property (retain, nonatomic) NSString *_private_shopManagementAccessState;
@property (retain, nonatomic) NSString *_private_shoppingOnboardingState;
@property (retain, nonatomic) NSString *shoppingPostOnboardNuxType;
@property (retain, nonatomic) NSString *storefrontAttributionUsername;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasPlacedOrders;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *showPrivacyScreen;
@property (retain, nonatomic) NSArray *upcomingEvents;
@property (retain, nonatomic) NSString *_private_adsPageId;
@property (retain, nonatomic) NSString *_private_adsPageName;
@property (retain, nonatomic) NSString *_private_pageId;
@property (retain, nonatomic) NSString *_private_pageName;
@property (retain, nonatomic) NSString *personalAccountAdsPageId;
@property (retain, nonatomic) NSString *personalAccountAdsPageName;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *showSeeRestaurantMenuCta;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *_private_accountType;
@property (retain, nonatomic) NSString *_private_addressStreet;
@property (retain, nonatomic) NSString *_private_businessContactMethod;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_canBoostPost;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_canClaimPage;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_canCrosspostWithoutFbToken;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_canSeeOrganicInsights;
@property (retain, nonatomic) NSString *_private_category;
@property (retain, nonatomic) NSString *_private_categoryId;
@property (retain, nonatomic) NSString *_private_cityId;
@property (retain, nonatomic) NSString *_private_cityName;
@property (retain, nonatomic) NSString *_private_contactPhoneNumber;
@property (retain, nonatomic) NSString *_private_fbPageCallToActionId;
@property (retain, nonatomic) NSString *_private_fbPageCallToActionIxAppId;
@property (retain, nonatomic) NSString *_private_fbPageCallToActionIxPartner;
@property (retain, nonatomic) NSString *instagramLocationId;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_isBusiness;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_isCallToActionEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_isCategoryTappable;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isEligibleForLeadCenter;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isEligibleForSmbSupportFlow;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isInterestAccount;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isProfileAudioCallEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_isPromotionsInProfileEnabled;
@property (retain, nonatomic) NSObject<FBBoxedDouble> *_private_latitude;
@property (retain, nonatomic) NSString *leadDetailsAppId;
@property (retain, nonatomic) NSObject<FBBoxedDouble> *_private_longitude;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *_private_professionalConversionSuggestedAccountType;
@property (retain, nonatomic) NSString *_private_publicEmail;
@property (retain, nonatomic) NSString *_private_publicPhoneCountryCode;
@property (retain, nonatomic) NSString *_private_publicPhoneNumber;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *requestContactEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *shouldShowCategory;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *shouldShowPublicContacts;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *showConversionEditEntry;
@property (retain, nonatomic) NSString *_private_zip;
@property (retain, nonatomic) IGAPIActionButtonPartner *_private_displayedActionButtonPartner;
@property (retain, nonatomic) IGAPIFBPageCallToActionIXLabelBundle *_private_fbPageCallToActionIxLabelBundle;
@property (retain, nonatomic) NSString *_private_fbPageCallToActionIxUrl;
@property (retain, nonatomic) NSString *_private_fbeAppId;
@property (retain, nonatomic) NSString *_private_fbeLabel;
@property (retain, nonatomic) NSString *_private_fbePartner;
@property (retain, nonatomic) NSString *_private_fbeUrl;
@property (retain, nonatomic) IGAPIIsCallToActionEnabledBySurfaceDict *_private_isCallToActionEnabledBySurface;
@property (retain, nonatomic) IGAPIActionButtonPartner *_private_smbDeliveryPartner;
@property (retain, nonatomic) IGAPIActionButtonPartner *_private_smbDonationPartner;
@property (retain, nonatomic) IGAPIActionButtonPartner *_private_smbGetQuotePartner;
@property (retain, nonatomic) IGAPIActionButtonPartner *_private_smbSupportPartner;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *_private_authenticityType;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasEligibleWhatsappLinkingCategory;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_canBeShareToFriendsStoryDistributor;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasHighlightReels;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *_private_latestBestiesReelMedia;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *_private_latestReelMedia;
@property (retain, nonatomic) NSString *_private_reelAutoArchive;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *_private_reelMediaSeenTimestamp;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *_private_bestiesCount;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isAdRater;
@property (retain, nonatomic) IGAPIFanClubInfoDict *_private_fanClubInfo;
@property (retain, nonatomic) IGAPIFanClubStatusSyncInfo *_private_fanClubStatusSyncInfo;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasExclusiveFeedContent;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasFanClubSubscriptions;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isParentingAccount;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isSupervisionFeaturesEnabled;
@property (retain, nonatomic) IGAPISupervisionInfo *_private_supervisionInfo;
@property (retain, nonatomic) NSString *homeCountry;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *waAddressable;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *_private_waEligibility;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_isFavoriteForIgtv;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isMutedWordsCustomEnabled;
@property (retain, nonatomic) NSObject<FBBoxedDouble> *paaScore;
@property (retain, nonatomic) IGAPIUserSettingBundlesInfo *settingBundles;
@property (retain, nonatomic) NSString *_private_allowMentionSetting;
@property (retain, nonatomic) NSString *_private_allowTagSetting;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *followFrictionType;
@property (retain, nonatomic) IGAPIGrowthFrictionInfo *growthFrictionInfo;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isInCanada;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isRegulatedC18;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isRegulatedNewsInViewerLocation;
@property (retain, nonatomic) NSArray *relevantNewsRegulationLocations;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_aboutYourAccountBloksEntrypointEnabled;
@property (retain, nonatomic) NSString *accountCategory;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isMemorialized;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *showAccountTransparencyDetails;
@property (retain, nonatomic) NSString *stateRunMediaCountry;
@property (retain, nonatomic) NSString *transparencyLabel;
@property (retain, nonatomic) NSString *transparencyProduct;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *transparencyProductEnabled;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *breakReminderInterval;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *dailyTimeLimit;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasUserEverSetBreak;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isQuietModeEnabled;
@property (retain, nonatomic) NSString *lastSeenTimezone;
@property (retain, nonatomic) NSArray *quietModePauseWindows;
@property (retain, nonatomic) NSArray *quietModeWindows;
@property (retain, nonatomic) IGAPIGatingDict *_private_gating;
@property (retain, nonatomic) NSArray *searchSocialContextFacepiles;
@property (retain, nonatomic) IGAPIBioInterestsResponse *bioInterests;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isOpalEnabled;
@property (retain, nonatomic) IGAPIOpalInfo *opalInfo;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isPotentialBusiness;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasIgProfile;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasInteropEnabled;
@property (retain, nonatomic) NSString *_private_interopMessagingUserFbid;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *_private_interopUserType;
@property (retain, nonatomic) IGAPIPinnedChannelsInfoDict *_private_pinnedChannelsInfo;
@property (retain, nonatomic) NSString *profileContext;
@property (retain, nonatomic) NSArray *_private_profileContextFacepileUsers;
@property (retain, nonatomic) NSArray *profileContextLinksWithUserIds;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_autoExpandChaining;
@property (retain, nonatomic) NSString *_private_birthdayTodayVisibilityForViewer;
@property (retain, nonatomic) NSArray *_private_chainingUpsellCards;
@property (retain, nonatomic) NSObject<FBBoxedDouble> *coeffWeight;
@property (retain, nonatomic) NSString *eventHostCohostStatusString;
@property (retain, nonatomic) NSString *_private_fbidV2;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *followerCount;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *followingCount;
@property (retain, nonatomic) IGAPIRelationshipInfoDict *_private_friendshipStatus;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_hasAnonymousProfilePicture;
@property (retain, nonatomic) IGAPIProfilePicUrlInfo *_private_hdProfilePicUrlInfo;
@property (retain, nonatomic) NSString *_private_graphQLID;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isEligibleToShowFbCrossSharingNux;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_isFavorite;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_isFavoriteForClips;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_isPrivate;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isSecondaryAccountCreation;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isShowingBirthdaySelfie;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isTooltipDisabledParam;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_isUnpublished;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_isVerified;
@property (retain, nonatomic) NSString *_private_pk;
@property (retain, nonatomic) NSString *profileFollowRequestSocialContext;
@property (retain, nonatomic) NSString *_private_profilePicId;
@property (retain, nonatomic) NSString *_private_profilePicUrl;
@property (retain, nonatomic) NSString *searchSocialContext;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_showInsightsTerms;
@property (retain, nonatomic) NSString *socialContext;
@property (retain, nonatomic) NSString *textAppUserRecommendationSocialContextExpanded;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isEligibleForIgdStacks;
@property (retain, nonatomic) NSString *_private_liveSubscriptionStatus;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *showTeenEducationBanner;
@property (retain, nonatomic) NSString *_private_pbiaPageId;
@property (retain, nonatomic) NSArray *adjustedBannersOrder;
@property (retain, nonatomic) IGAPITextWithLinkedEntities *biographyWithEntities;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *canLinkEntitiesInBio;
@property (retain, nonatomic) NSString *_private_externalLynxUrl;
@property (retain, nonatomic) NSString *_private_externalUrl;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_hasBiographyTranslation;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isEligibleForRequestMessage;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isNewToInstagram;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *primaryProfileLinkType;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *showFbLinkOnProfile;
@property (retain, nonatomic) NSArray *accountBadges;
@property (retain, nonatomic) IGAPIProactiveWarningsEventInfo *isPossibleBadActor;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isPossibleScammer;
@property (retain, nonatomic) NSString *similarUserId;
@property (retain, nonatomic) IGAPIStatusResponse *_private_status;
@property (retain, nonatomic) NSString *contextLine;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *existingUserAgeCollectionEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *removeMessageEntrypoint;
@property (retain, nonatomic) NSArray *additionalBusinessAddresses;
@property (retain, nonatomic) IGAPIUserAddressEditingConfigDict *addressEditingConfig;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isEligibleForMetaVerifiedEnhancedLinkSheet;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isEligibleForMetaVerifiedEnhancedLinkSheetConsumption;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isEligibleForMetaVerifiedLabel;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isEligibleForMetaVerifiedLinksInReels;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isEligibleForMetaVerifiedMultipleAddressesConsumption;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isEligibleForMetaVerifiedMultipleAddressesCreation;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isEligibleForMetaVerifiedRelatedAccounts;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isMetaVerifiedRelatedAccountsDisplayEnabled;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *metaVerifiedRelatedAccountsCount;
@property (retain, nonatomic) IGAPIUserRelatedAccountsInfoDict *metaVerifiedRelatedAccountsInfo;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isP2mEligibleShowPayout;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *eligibleForTextAppActivationBadge;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasOnboardedToTextPostApp;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasTextAppPosts;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasTextAppReplies;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasTextAppReposts;
@property (retain, nonatomic) NSString *igProfilePicUrl;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isActiveOnTextPostApp;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *showTextPostAppBadge;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *showTextPostAppSwitcherBadge;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *textAppAysfVerticalType;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *textAppIsLowLike;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *textAppLastVisitedTime;
@property (retain, nonatomic) NSString *textAppProfilePicUrl;
@property (retain, nonatomic) IGAPITextPostAppSuggestionCardProfileContext *textAppSuggestionCardProfileContext;
@property (retain, nonatomic) NSString *textPostAppBadgeLabel;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *textPostAppFediverseEnabledTime;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *textPostAppHasConsentedInEu;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *textPostAppHasFediverseEnabled;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *textPostAppJoinerNumber;
@property (retain, nonatomic) NSString *textPostAppJoinerNumberLabel;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *textPostAppRemoveMentionEntrypoint;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *textPostNewPostCount;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *_private_isBestie;
@property (retain, nonatomic) IGAPIFBHardLinkInfo *linkedFbInfo;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *showFbPageLinkOnProfile;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasDisallowedMediaNotesReshare;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isProfileWallEnabled;
@property (retain, nonatomic) NSString *liveBroadcastId;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *liveBroadcastVisibility;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *liveInviteOnlyBrandingEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasEverOwnedPublicCollections;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasTextTranslationsConsumptionEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasVideos;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isHidingStoriesFromSomeone;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *totalClipsCount;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *showShoppableFeed;
@property (retain, nonatomic) NSString *displayedActionButtonType;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isFavoriteForStories;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isFavoriteForExclusiveContent;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isStoriesTeaserMuted;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hasIgtvSeries;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *totalIgtvVideos;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isHideMoreCommentEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isMutedWordsGlobalEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isMutedWordsSpamscamEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *limitedInteractionsEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *textPostAppHasMaxPostsPinnedToProfile;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isMentionable;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *spamFollowerSettingEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *usertagReviewEnabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *openExternalUrlWithInAppBrowser;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *mutualFollowersCount;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isEligibleForSeoIndexing;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *feedPostReshareDisabled;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isProfilePictureExpansionEnabled;
@property (retain, nonatomic) IGAPISetiProfileConfig *nametag;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *mediaCount;
@property (retain, nonatomic) NSArray *bioLinks;
@property (retain, nonatomic) NSString *biography;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isProfileActionNeeded;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *isWhatsappLinked;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *unseenCount;
@property (retain, nonatomic) IGAPIProactiveWarningHarmInfo *accountWarning;
@property (retain, nonatomic) NSString *searchSocialContextSnippetType;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *hideTextAppActivationBadgeOnTextApp;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *showIgAppSwitcherBadge;
@property (retain, nonatomic) NSString *textAppOnlineStatusVisibilitySetting;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *textPostAppTakeABreakSetting;

/* instance methods */
- (id)GraphQLName;
- (struct vector<long long, std::allocator<long long>> { long long * x0; long long * x1; struct __compressed_pair<long long *, std::allocator<long long>> { long long * x0; } x2; })collectFieldsToObserve;
- (struct vector<std::string_view, std::allocator<std::string_view>> { void * x0; void * x1; struct __compressed_pair<std::string_view *, std::allocator<std::string_view>> { void * x0; } x2; })collectFieldKeysToObserve;
- (BOOL)updateWithTree:(id)tree;
- (BOOL)updateWithStaleTree:(id)tree;
@end

#endif /* IGBaseUser_h */
