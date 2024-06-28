//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDefaultFeedItemConfiguration_h
#define IGDefaultFeedItemConfiguration_h
@import Foundation;

#include "IGDirectSavedMediaCollectionsDataSource.h"
#include "IGFeedItemConfigurationType-Protocol.h"
#include "IGFeedTheme-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class IGUser, IGUserDefaults, IGUserSessionProvider, NSString;

@interface IGDefaultFeedItemConfiguration : NSObject<IGFeedItemConfigurationType> {
  /* instance variables */
  IGUserSessionProvider *_userSessionProvider;
  IGUser *_user;
  NSObject<IGUserLauncherSetProviding> *_launcherSet;
  IGUserDefaults *_sessionUserDefaults;
  IGDirectSavedMediaCollectionsDataSource *_directSavedMediaCollectionsDataSource;
  unsigned long long _initialCarouselIndex;
}

@property (readonly, nonatomic) NSObject<IGFeedTheme> *theme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (id)initWithUserSessionProvider:(id)provider user:(id)user directSavedMediaCollectionsDataSource:(id)source launcherSet:(id)set sessionUserDefaults:(id)defaults;
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
- (BOOL)shouldHideFeedItem:(id)item sponsoredInfoProvider:(id)provider;
- (struct { long long x0; long long x1; })captionDisplayOptionsForMedia:(id)media;
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
- (BOOL)likeEnabledForMedia:(id)media;
- (BOOL)sendEnabledForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (BOOL)commentEnabledForMedia:(id)media;
- (BOOL)unseenIndicatorEnabledForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (BOOL)shouldShowLoadingIndicatorForMedia:(id)media;
- (id)followControllerContextStringForMedia:(id)media;
- (BOOL)shouldShowAuthorInTitleForHashtagFeedItem:(id)item;
- (BOOL)shouldShowCTAIfApplicableForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (id)headerTheme;
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
- (BOOL)showInteractionCountsInUFI;
- (BOOL)showReshareCountInUFI;
- (long long)pageIndicatorType;
- (BOOL)supportInterestPivot;
- (BOOL)showPositiveControlInOverflowMenuForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (long long)positiveControlSurfaceForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (id)onImpressionControlForMedia:(id)media sponsoredInfoProvider:(id)provider;
- (id)contextualRecommendationForMedia:(id)media;
@end

#endif /* IGDefaultFeedItemConfiguration_h */
