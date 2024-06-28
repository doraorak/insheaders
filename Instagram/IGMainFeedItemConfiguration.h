//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMainFeedItemConfiguration_h
#define IGMainFeedItemConfiguration_h
@import Foundation;

#include "IGCommentDraftDataController.h"
#include "IGDefaultFeedItemConfiguration.h"
#include "IGDirectSavedMediaCollectionsDataSource.h"
#include "IGFeedItemConfigurationType-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "NSCopying-Protocol.h"

@class IGHashtagFollowStatusStore, IGUser, IGUserDefaults, IGUserSessionProvider, NSString;
@protocol FBAnalyticsLogging><IGAnalyticsEventLoggingProtocol;

@interface IGMainFeedItemConfiguration : NSObject<IGFeedItemConfigurationType, NSCopying> {
  /* instance variables */
  struct { long long maximumUntruncatedNumberOfLines; long long truncateToNumberOfLines; } _captionDisplayOptions;
  IGCommentDraftDataController *_commentDraftDataController;
  IGUserSessionProvider *_userSessionProvider;
  BOOL _hideFollowButtonQE;
  NSString *_analyticsModule;
  BOOL _immersiveFeedEnabled;
  NSObject<IGUserLauncherSetProviding> *_launcherSet;
  IGUser *_user;
  NSObject<FBAnalyticsLogging><IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  IGUserDefaults *_sessionUserDefaults;
  IGDirectSavedMediaCollectionsDataSource *_directSavedMediaCollectionsDataSource;
  IGHashtagFollowStatusStore *_hashtagFollowStatusStore;
  BOOL _showInlineComposerWithFullWidth;
  IGDefaultFeedItemConfiguration *_defaultConfig;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (id)initWithUserSession:(id)session analyticsModule:(id)module;
- (id)initWithUserSession:(id)session analyticsModule:(id)module immersiveFeedConfiguration:(id)configuration;
- (id)initWithUserSessionProvider:(id)provider user:(id)user laucherSet:(id)set analyticsLogger:(id)logger sessionUserDefaults:(id)defaults directSavedMediaCollectionsDataSource:(id)source hashtagFollowStatusStore:(id)store analyticsModule:(id)module isImmersiveFeedEnabled:(BOOL)enabled;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)theme;
- (id)headerTheme;
- (BOOL)shouldShowDisclaimerForMedia:(id)media;
- (BOOL)showFollowButtonForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (BOOL)showFollowButtonRedesignForMedia:(id)media;
- (BOOL)allowSponsoredContextForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (BOOL)shouldShowSponsoredLabelOnly;
- (BOOL)shouldHideSponsoredLabelForSponsoredItem;
- (unsigned long long)exploreContextDisplayTypeForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (BOOL)shouldDisablePreviewComments;
- (BOOL)shouldHideTimestamp;
- (BOOL)shouldHideUFIBar;
- (BOOL)shouldShowPreviewCommentLikeButton;
- (unsigned long long)viewCommentsDisplayModeForMedia:(id)media;
- (BOOL)increaseViewAllCommentsTapArea;
- (struct { long long x0; long long x1; })captionDisplayOptionsForMedia:(id)media;
- (BOOL)shouldHideFeedItem:(id)item sponsoredInfoProvider:(id)provider;
- (int)hiddenCellTypeForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (BOOL)allowSFPLTFromFeedItem:(id)item;
- (BOOL)showDismissButtonOnFeedItemHeaderForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (BOOL)shouldShowThumbnailOnFeedItemHeader;
- (BOOL)allowHidingSponsoredItem;
- (BOOL)shouldMoreSupersedeCustomizableButtonForMedia:(id)media;
- (id)likeRequestParametersForMedia:(id)media;
- (BOOL)isMediaEligibleForProfilePinningTooltip:(id)tooltip;
- (BOOL)isMediaEligibleForEditCoverCroppingTooltip:(id)tooltip;
- (BOOL)isMediaEligibleForExclusiveMediaPreviewTooltip:(id)tooltip;
- (BOOL)shouldShowInlineInsightsForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (BOOL)shouldPopAfterDeletingFeedItem:(id)item;
- (id)marieKondoExperimentConfiguration;
- (BOOL)isEligibleForOpalMediaIndicator;
- (BOOL)shouldShowMessageButtonForMedia:(id)media;
- (BOOL)enableDelaySkipAd;
- (id)actionSheetControllerActionsForMedia:(id)media sponsoredInfoProvider:(id)provider sponsoredSupportConfiguration:(id)configuration module:(id)module delegate:(id)delegate;
- (BOOL)shouldUseRedesignedOverflowMenuForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (id)actionListDataSourceForMedia:(id)media sponsoredInfoProvider:(id)provider sponsoredSupportConfiguration:(id)configuration module:(id)module delegate:(id)delegate headerTitle:(id)title;
- (BOOL)showVerifiedBadgeForMedia:(id)media;
- (BOOL)shouldUseProfilePhotoForTitleForMedia:(id)media;
- (BOOL)isPermalinkView;
- (BOOL)favoritesButtonEnabledWhenAvailable;
- (id)commentDraftDataController;
- (BOOL)shouldShowInlineComposerForMedia:(id)media;
- (BOOL)shouldRenderAsExploreInFeedUnit:(id)unit;
- (BOOL)shouldShowNotInterestedInFooter:(id)footer;
- (BOOL)isMainFeedCarouselBumpedUnit:(id)unit;
- (BOOL)supportCarouselIndicatorAnimation;
- (unsigned long long)carouselStartingIndex:(id)index;
- (id)collabAction:(id)action;
- (BOOL)saveEnabledForMedia:(id)media;
- (BOOL)sendEnabledForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (BOOL)likeEnabledForMedia:(id)media;
- (BOOL)commentEnabledForMedia:(id)media;
- (BOOL)unseenIndicatorEnabledForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (BOOL)shouldShowLoadingIndicatorForMedia:(id)media;
- (id)followControllerContextStringForMedia:(id)media;
- (BOOL)shouldShowAuthorInTitleForHashtagFeedItem:(id)item;
- (BOOL)shouldShowCTAIfApplicableForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (id)ctaPresenterContext;
- (id)originalCarouselMediaId;
- (id)originalCarouselThumbnailURL;
- (BOOL)enableMediaPreviewOnlyForMedia:(id)media;
- (BOOL)shouldLoadDetailsIfNeeded;
- (id)followButtonLoggingProvider;
- (BOOL)useSingleFeedItemAccessibility;
- (BOOL)shouldAutoRevealTagsForMedia:(id)media;
- (BOOL)shouldShowMuteOptionForMedia:(id)media;
- (BOOL)shouldShowReportOptionForMedia:(id)media;
- (unsigned long long)showUnfollowOptionTypeForMedia:(id)media;
- (id)shoppingConfiguration;
- (BOOL)shouldShowCallButtons;
- (BOOL)shouldShowFavoritesBadgeForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (BOOL)shouldShowWhyAmISeeingThisForMedia:(id)media;
- (BOOL)allowTimestampOnUnconnectedContent;
- (id)hostProfileUsername;
- (id)hostProfileId;
- (double)longPressDurationForMedia:(id)media;
- (BOOL)shouldShowControlCenterEntryPointForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (BOOL)supportInterestPivot;
- (BOOL)showPositiveControlInOverflowMenuForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (long long)positiveControlSurfaceForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (id)onImpressionControlForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (id)contextualRecommendationForMedia:(id)media;
- (BOOL)showInteractionCountsInUFI;
- (BOOL)showReshareCountInUFI;
- (long long)pageIndicatorType;
@end

#endif /* IGMainFeedItemConfiguration_h */
