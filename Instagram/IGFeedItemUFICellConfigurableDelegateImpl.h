//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemUFICellConfigurableDelegateImpl_h
#define IGFeedItemUFICellConfigurableDelegateImpl_h
@import Foundation;

#include "IGContentNotesActionHandler.h"
#include "IGContentNotesFloatingViewControllerDelegate-Protocol.h"
#include "IGFeedAdsDelaySkipPillCoordinator.h"
#include "IGFeedAdsPostAdEngagementHandler.h"
#include "IGFeedConfigurationType-Protocol.h"
#include "IGFeedItemActionSheetHandler.h"
#include "IGFeedItemActionSheetHandlerDelegate-Protocol.h"
#include "IGFeedItemConfigurationType-Protocol.h"
#include "IGFeedItemLikeCountTapHandler.h"
#include "IGFeedItemPageCellState.h"
#include "IGFeedItemSendActionHandler.h"
#include "IGFeedItemUFICell.h"
#include "IGFeedItemUFICellConfigurableDelegate-Protocol.h"
#include "IGFeedItemUFICellUserFlowLogger.h"
#include "IGFeedSectionCTAPerformUpdateAnnouncer-Protocol.h"
#include "IGFeedSectionControllerActionDelegate-Protocol.h"
#include "IGFeedSectionControllerBloksDelegateImpl.h"
#include "IGFeedSectionControllerIntentAwareAdsDelegate-Protocol.h"
#include "IGFeedSectionPerformUpdateAnnouncer-Protocol.h"
#include "IGFeedSectionUnifiedActionController.h"
#include "IGFeedShareSheetHandler.h"
#include "IGFeedShoppingSessionTrackerProvider.h"
#include "IGFeedUFIDirectQuickSendTooltipProvider.h"
#include "IGFeedUFINUXManager.h"
#include "IGHasCTAPresenterContext-Protocol.h"
#include "IGHeartAnimator.h"
#include "IGHiddenMediaHandler.h"
#include "IGSaveToCollectionsFeedDelegate-Protocol.h"
#include "IGScopedListener-Protocol.h"
#include "IGSponsoredInfoProviding-Protocol.h"
#include "_TtP22IGFeedDelayedCTAHelper22IGFeedDelayedCTAHelper_-Protocol.h"
#include "_TtP22IGFeedDirectPopoutView28IGFeedDirectPopoutViewHelper_-Protocol.h"
#include "_TtP57IGFeedItemContextualRecommendationsCellControllerProtocol49IGFeedItemContextualRecommendationsCellController_-Protocol.h"

@class IGMedia, IGPlaybackCoordinator, IGUserSession, NSString;
@protocol IGDirectQuickSendControllerProtocol, IGFeedItemWithCarouselLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate><IGFeedItemVideoLoggingProviderDelegate><IGFeedItemLoggingProviderDelegate><IGChainingLoggingProvider><IGGatingLoggingProviderDelegate;

@interface IGFeedItemUFICellConfigurableDelegateImpl : NSObject<IGContentNotesFloatingViewControllerDelegate, IGFeedItemUFICellConfigurableDelegate, IGScopedListener> {
  /* instance variables */
  NSObject<IGFeedConfigurationType> *_feedConfiguration;
  IGMedia *_media;
  IGUserSession *_userSession;
  IGFeedItemPageCellState *_pageCellState;
  NSObject<IGFeedItemWithCarouselLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate><IGFeedItemVideoLoggingProviderDelegate><IGFeedItemLoggingProviderDelegate><IGChainingLoggingProvider><IGGatingLoggingProviderDelegate> *_loggingProvider;
  NSObject<IGFeedItemConfigurationType> *_itemConfiguration;
  NSObject<IGFeedSectionControllerActionDelegate> *_actionDelegate;
  NSObject<IGHasCTAPresenterContext> *_ctaContextProvider;
  NSObject<IGSponsoredInfoProviding> *_sponsoredPostInfo;
  NSObject<IGFeedSectionPerformUpdateAnnouncer> *_feedSectionUpdateAnnouncer;
  IGFeedShoppingSessionTrackerProvider *_shoppingSessionTrackerProvider;
  IGFeedItemActionSheetHandler *_feedItemActionSheetHandler;
  IGFeedItemLikeCountTapHandler *_likeCountTapHandler;
  IGHiddenMediaHandler *_hiddenMediaHandler;
  NSString *_collectionId;
  NSObject<IGDirectQuickSendControllerProtocol> *_quickSendController;
  IGHeartAnimator *_heartAnimator;
  IGFeedSectionControllerBloksDelegateImpl *_sectionControllerBloksDelegate;
  IGPlaybackCoordinator *_playbackCoordinator;
  IGFeedItemSendActionHandler *_feedSendActionHandler;
  NSObject<_TtP22IGFeedDirectPopoutView28IGFeedDirectPopoutViewHelper_> *_directPopoutViewHelper;
  NSObject<IGFeedItemActionSheetHandlerDelegate> *_actionSheetHandler;
  NSObject<IGSaveToCollectionsFeedDelegate> *_saveToCollectionsFeedDelegate;
  IGFeedUFIDirectQuickSendTooltipProvider *_quickSendTooltipProvider;
  NSObject<IGFeedSectionControllerIntentAwareAdsDelegate> *_intentAwareAdsDelegate;
  IGFeedAdsPostAdEngagementHandler *_feedAdsPostAdEngagementHandler;
  NSObject<_TtP57IGFeedItemContextualRecommendationsCellControllerProtocol49IGFeedItemContextualRecommendationsCellController_> *_contextualRecommendationsCellController;
  IGFeedShareSheetHandler *_shareSheetHandler;
  NSObject<IGFeedSectionCTAPerformUpdateAnnouncer> *_sectionCTAUpdateAnnouncer;
  BOOL _isUFIVisible;
  BOOL _shouldDelayShowingSharingUfiTooltip;
  IGFeedItemUFICell *_ufiCell;
  IGFeedUFINUXManager *_feedUFITooltipManager;
  IGFeedItemUFICellUserFlowLogger *_userFlowLogger;
  NSObject<_TtP22IGFeedDelayedCTAHelper22IGFeedDelayedCTAHelper_> *_delayedCTAHelper;
  IGFeedSectionUnifiedActionController *_unifiedActionController;
  IGContentNotesActionHandler *_contentNotesActionHandler;
  IGFeedAdsDelaySkipPillCoordinator *_adsDelaySkipPillCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUfiComponentFeedConfiguration:(id)configuration media:(id)media userSession:(id)session loggingProvider:(id)provider itemConfiguration:(id)configuration actionDelegate:(id)delegate ctaContextProvider:(id)provider feedSectionUpdateAnnouncer:(id)announcer sponsoredPostInfo:(id)info pageCellState:(id)state navigationHelper:(id)helper shoppingSessionTrackerProvider:(id)provider hiddenMediaHandler:(id)handler heartAnimator:(id)animator sectionControllerBloksDelegate:(id)delegate actionSheetHandler:(id)handler saveToCollectionsFeedDelegate:(id)delegate playbackCoordinator:(id)coordinator quickSendTooltipProvider:(id)provider directPopoutViewHelper:(id)helper sectionCTAUpdateAnnouncer:(id)announcer feedUFINUXManager:(id)ufinuxmanager feedAdsPostAdEngagementHandler:(id)handler contextualRecommendationsCellController:(id)controller intentAwareAdsDelegate:(id)delegate delayedCTAHelper:(id)ctahelper unifiedActionController:(id)controller contentNotesActionHandler:(id)handler adsDelaySkipPillCoordinator:(id)coordinator;
- (void)feedItemUFICellDidTapCommentButton:(id)button;
- (void)feedItemUFICellDidTapLikeButton:(id)button;
- (void)feedItemUFICellDidTapLikeCountButton:(id)button;
- (void)feedItemUFICellDidTapSendButton:(id)button;
- (void)feedItemUFICellDidTapSaveButton:(id)button;
- (void)feedItemUFICellDidLongPressSaveButton:(id)button;
- (void)feedItemUFICell:(id)uficell wantsUpdateToPageIndex:(long long)index;
- (void)feedItemUFICell:(id)uficell didLongPressSendButton:(id)button gestureRecognizer:(id)recognizer;
- (void)feedItemUFICell:(id)uficell didLongPressLikeButton:(id)button gestureRecognizer:(id)recognizer;
- (void)feedItemUFICellDidTapRepostButton:(id)button;
- (void)feedItemUFICellDidTapAddContentNoteButton:(id)button;
- (id)_contentNotesLoggingInfo;
- (void)feedItemUFICellDidLongPressRepostButton:(id)button;
- (void)feedItemUFICellDidTapOnCTAExtensionButton:(id)button gestureRecognizer:(id)recognizer;
- (void)didDismissOverflowMenuWithUserEducationForMediaId:(id)id;
- (void)contentNotesFloatingViewController:(id)controller didTapNoteWithNoteModel:(id)model media:(id)media defaultLoggingInfo:(id)info presentationContext:(id)context;
- (void)contentNotesFloatingViewController:(id)controller didTapContextMenuWithAction:(long long)action noteModel:(id)model media:(id)media defaultLoggingInfo:(id)info;
- (void)contentNotesFloatingViewControllerDidTapAddNote:(id)note media:(id)media defaultLoggingInfo:(id)info;
@end

#endif /* IGFeedItemUFICellConfigurableDelegateImpl_h */