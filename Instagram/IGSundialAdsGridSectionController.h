//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialAdsGridSectionController_h
#define IGSundialAdsGridSectionController_h
@import Foundation;

#include "IGSundialAdsBaseSectionController.h"
#include "IGALLogContextModelProvider-Protocol.h"
#include "IGDirectResponseLogging-Protocol.h"
#include "IGFeedItemConfigurationType-Protocol.h"
#include "IGListDisplayDelegate-Protocol.h"
#include "IGMediaUpdatedListener-Protocol.h"
#include "IGScopedListener-Protocol.h"
#include "IGStorySeenStateStoreListener-Protocol.h"
#include "IGSundialAdsCarouselIndicatorCoordinator.h"
#include "IGSundialAdsPrefetchController.h"
#include "IGSundialPlaybackSectionControllerProtocol-Protocol.h"
#include "IGSundialSwipeLeftTransitionable-Protocol.h"
#include "IGSundialVideoLogger.h"

@class IGAdPodMediaLoggingManager, IGMedia, NSSet, NSString;

@interface IGSundialAdsGridSectionController : IGSundialAdsBaseSectionController<IGALLogContextModelProvider, IGListDisplayDelegate, IGMediaUpdatedListener, IGSundialPlaybackSectionControllerProtocol, IGSundialSwipeLeftTransitionable, IGStorySeenStateStoreListener, IGScopedListener> {
  /* instance variables */
  NSObject<IGFeedItemConfigurationType> *_itemConfiguration;
  IGSundialAdsPrefetchController *_adsPrefetchController;
  long long _surfaceSource;
  NSObject<IGDirectResponseLogging> *_ctaLogger;
  IGAdPodMediaLoggingManager *_adPodMediaLoggingManager;
  IGSundialAdsCarouselIndicatorCoordinator *_carouselIndicatorCoordinator;
  NSSet *_carouselIndicatorViewpointActions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGMedia *video;
@property (readonly, nonatomic) BOOL isAd;
@property (retain, nonatomic) IGSundialVideoLogger *videoLogger;

/* instance methods */
- (id)initWithUserSession:(id)session interactionCoordinator:(id)coordinator adsInteractionCoordinator:(id)coordinator itemConfiguration:(id)configuration mediaPrefetchManager:(id)manager presentationContext:(unsigned long long)context immersiveFeedConfiguration:(id)configuration sundialAdsExperimentOptions:(id)options config:(id)config feedItemLogger:(id)logger adPodMediaLoggingManager:(id)manager;
- (void)dealloc;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)didUpdateToObject:(id)object;
- (id)cellForItemAtIndex:(long long)index;
- (void)linkHandlerDidStartHandlingLink:(id)link;
- (void)linkHandlerDidFinishHandlingLink:(id)link;
- (void)linkHandler:(id)handler didOpenLinkForProductId:(id)id presentingViewController:(id)controller;
- (void)mediaWasUpdated:(id)updated withChange:(long long)change isFromPreview:(BOOL)preview;
- (void)sundialAdsGridCell:(id)cell didTapSingleItemCellAtIndex:(long long)index withSource:(id)source loggingInfoProviding:(id)providing;
- (void)sundialAdsGridCell:(id)cell didTapGridCTAButtonWithMediaAtIndex:(long long)index;
- (void)sundialAdsGridCell:(id)cell didTapOnHashtag:(id)hashtag;
- (void)sundialAdsGridCell:(id)cell didTapProfileURL:(id)url fromCaption:(BOOL)caption;
- (void)sundialAdsGridCell:(id)cell didTapProfileURLFromSocialContext:(id)context fromCaption:(BOOL)caption;
- (void)sundialAdsGridCell:(id)cell didTapFBMentionWithProfileURL:(id)url;
- (void)sundialAdsGridCellDidTapUser:(id)user loggingInfoProviding:(id)providing;
- (void)sundialAdsGridCellProfileHeaderViewDidTapUser:(id)user loggingInfoProviding:(id)providing;
- (void)sundialAdsGridCellDidSingleTapWithLoggingInfoProviding:(id)providing;
- (void)sundialAdsGridCell:(id)cell didObserveTapOnStoryRingButton:(id)button;
- (void)sundialAdsGridCellDidTapTranslationButton:(id)button;
- (void)sundialAdsGridCellDidTapLocationAttributionView:(id)view;
- (void)sundialAdsGridCellDidTapMoreOptionsButton:(id)button;
- (void)sundialAdsGridCellDidTapINIButton:(id)inibutton menuDelegate:(id)delegate;
- (void)sundialAdsGridCellDidTapPeopleTagsButton:(id)button;
- (void)sundialAdsGridCell:(id)cell didTapSponsoredLabelAttributionView:(id)view;
- (void)sundialAdsGridCell:(id)cell didRegisterAttributionViewImpression:(long long)impression index:(long long)index;
- (void)sundialAdsGridCell:(id)cell didTapAttributionView:(long long)view index:(long long)index;
- (void)sundialAdsGridCellDidTapAppStoreRatingReviews:(id)reviews;
- (void)sundialAdsGridCellDidTapBusinessCategory:(id)category;
- (void)sundialAdsGridCellDidTapBusinessRatingReviews:(id)reviews;
- (void)sundialAdsGridCellDidTapRegisteredNonprofit:(id)nonprofit;
- (void)sundialAdsGridCellDidTapSoundButton:(id)button;
- (void)sundialAdsGridCellDidTapCaption:(id)caption;
- (void)sundialAdsGridCellDidTapCaptionMore:(id)more;
- (void)sundialAdsGridCellDidTapCaptionExpansionToggle:(id)toggle isExpanded:(BOOL)expanded;
- (void)sundialAdsGridCellDidTapNonExpansionCaption:(id)caption;
- (void)sundialAdsGridCellDidExpandCaptionAndBrowse:(id)browse isCaptionExpandable:(BOOL)expandable;
- (void)sundialAdsGridCellDidCollapseCaptionAndBrowse:(id)browse;
- (void)sundialAdsGridCellDidTapOverlayBackground:(id)background;
- (void)sundialAdsGridCellDidTapViewProductsEntryPoint:(id)point;
- (void)sundialAdsGridCellDidTapTransparencyButton:(id)button;
- (void)sundialAdsGridCellDidRegisterTransparencyButtonImpression:(id)impression;
- (void)sundialAdsGridCell:(id)cell didTapCaptionView:(id)view;
- (void)sundialAdsGridCellDidTapCombinedLikesAndCommentsButton:(id)button;
- (void)sundialAdsGridCellDidTapFollowedBySocialContextButton:(id)button shouldDisplaySecondarySurfaceCTA:(BOOL)cta;
- (void)sundialAdsGridCellDidTapLikeCountSocialContextButton:(id)button;
- (void)sundialAdsGridCellDidTapFollowersCountSocialContextButton:(id)button;
- (void)sundialAdsGridCellDidRegisterSocialContextButtonImpression:(id)impression withType:(long long)type;
- (void)sundialAdsGridCellDidTapRepostButton:(id)button;
- (void)sundialAdsGridCell:(id)cell didShowOnImpressionControl:(id)control;
- (void)sundialAdsGridCell:(id)cell didTapOnImpressionControlNegativeButton:(id)button;
- (void)sundialAdsGridCell:(id)cell didTapOnImpressionControlPositiveButton:(id)button;
- (void)sundialAdsGridCellViewModelUpdate:(id)update shouldLayoutAfterUpdate:(BOOL)update;
- (void)sundialAdsGridCellDidTapCTA:(id)cta loggingInfoProviding:(id)providing ctaTapInfo:(id)info;
- (void)sundialAdsGridCellDidScroll:(id)scroll scrollView:(id)view;
- (void)translationNetworkDataSource:(id)source didFailToLoadTranslationForCommentIds:(id)ids;
- (void)mediaHiddenFeedItem:(id)item sourceModule:(id)module storyReelPK:(id)pk reason:(long long)reason;
- (id)_loggingExtras;
- (id)trackingModel;
- (id)displayDelegate;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller;
- (BOOL)isAudioEnabled;
- (double)currentDwellTime;
- (unsigned long long)soundButtonState;
- (BOOL)allowSwipeLeftNavigation;
- (BOOL)allowSwipeLeftPresentation;
- (void)storySeenStateStoreDidUpdateReelPK:(id)pk;
- (void)sceneEventTimingController:(id)controller didEventsOccur:(id)occur fastForwarded:(BOOL)forwarded;
- (void)carouselIndicatorCoordinatorDidSetProgressIndicatorEnabled:(BOOL)enabled index:(long long)index;
- (void)carouselIndicatorCoordinatorDidUpdateToIndex:(long long)index animated:(BOOL)animated;
- (void)carouselIndicatorCoordinatorDidUpdateProgress:(double)progress;
- (void)carouselIndicatorCoordinatorDidDisableAutoAdvanceWithIndex:(long long)index;
- (void)_dismissAboutAdsWebView;
@end

#endif /* IGSundialAdsGridSectionController_h */
