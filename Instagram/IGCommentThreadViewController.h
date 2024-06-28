//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentThreadViewController_h
#define IGCommentThreadViewController_h
@import Foundation;

#include "IGViewController.h"
#include "FBGNVGenericClickMetadataProvider-Protocol.h"
#include "IGAutocompleteControllerDelegate-Protocol.h"
#include "IGBulkCommentDeleteManager.h"
#include "IGCTAPresenterContext.h"
#include "IGChildCommentThreadUpdateDelegate-Protocol.h"
#include "IGCommentCellRevealManager.h"
#include "IGCommentComposerControllerDelegate-Protocol.h"
#include "IGCommentCoverSectionControllerDelegate-Protocol.h"
#include "IGCommentFilteringBottomSheetViewController.h"
#include "IGCommentFilteringSectionViewModel.h"
#include "IGCommentGroup.h"
#include "IGCommentManagementController.h"
#include "IGCommentMediaTrayViewControllerDelegate-Protocol.h"
#include "IGCommentNavigationPerfComponents.h"
#include "IGCommentNuxModel.h"
#include "IGCommentOffense.h"
#include "IGCommentReshareRecord.h"
#include "IGCommentSectionViewModelCacheProtocol-Protocol.h"
#include "IGCommentSeenStateImpressionTracker.h"
#include "IGCommentSortingMenuController.h"
#include "IGCommentSortingSectionModel.h"
#include "IGCommentThreadEmptyView.h"
#include "IGCommentThreadManagerDelegate-Protocol.h"
#include "IGCommentThreadUpdateListener-Protocol.h"
#include "IGCommentToolsUpsellController.h"
#include "IGCommentUserFlowLogger.h"
#include "IGCommentViewControllerType-Protocol.h"
#include "IGContentWarningController.h"
#include "IGDirectRepliesBulkManagementMenuController.h"
#include "IGDirectShareSheetControllerDelegate-Protocol.h"
#include "IGDirectShareSheetControlling-Protocol.h"
#include "IGFeedNetworkSourceDelegate-Protocol.h"
#include "IGFeedSectionControllerActionDelegate-Protocol.h"
#include "IGFeedSectionControllerBloksDelegate-Protocol.h"
#include "IGGestureHandler-Protocol.h"
#include "IGKeyboardInputManager-Protocol.h"
#include "IGKeyboardInputManagerListener-Protocol.h"
#include "IGKeyboardObserverFrameChangeDelegate-Protocol.h"
#include "IGKeyboardObserverHideDelegate-Protocol.h"
#include "IGKeyboardObserverShowDelegate-Protocol.h"
#include "IGLimitedCommentsDataController.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGListDisplayDelegate-Protocol.h"
#include "IGMediaOverlayDelegate-Protocol.h"
#include "IGMediaUpdatedListener-Protocol.h"
#include "IGNudgingManager.h"
#include "IGPartialModalSheetListener-Protocol.h"
#include "IGPendingCommentsDataController.h"
#include "IGPermalinkFeedItemConfiguration.h"
#include "IGPinnedCommentsToastController.h"
#include "IGQPMegaphoneSectionControllerPresenter.h"
#include "IGQPMegaphoneSectionControllerPresenterDelegate-Protocol.h"
#include "IGScopedListener-Protocol.h"
#include "IGScreenshotObserverDelegate-Protocol.h"
#include "IGScreenshotObserverLoggingProvider-Protocol.h"
#include "IGScrollViewListener-Protocol.h"
#include "IGSingleFeedTitleHelper.h"
#include "IGSponsoredInfoProviding-Protocol.h"
#include "IGStoryPostCaptureEditingViewControllerDelegate-Protocol.h"
#include "IGStoryViewerPresenting-Protocol.h"
#include "IGTabControlSegment-Protocol.h"
#include "IGTombstoneManager.h"
#include "IGTooltipViewDelegate-Protocol.h"
#include "IGXARDisclosureModel.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "_TtC17IGCommentComposer27IGCommentComposerController.h"
#include "_TtC19IGCommentBannerView25IGCommentsBannerPresenter.h"
#include "_TtP19IGCommentBannerView33IGCommentsBannerPresenterDelegate_-Protocol.h"
#include "_TtP20IGCommentContextMenu28IGCommentContextMenuDelegate_-Protocol.h"

@class CAGradientLayer, IGBloksAsyncActionHandler, IGCommentModel, IGCommentThreadConfiguration, IGCreatorConnectionsLogger, IGDirectRepliesMessageMetadata, IGFeedNetworkSource, IGKeyboardObserver, IGLabelItemViewModel, IGListAdapter, IGMedia, IGMediaOverlayView, IGQPMegaphone, IGQuickPromotionCoordinator, IGRapidFeedbackController, IGRefreshControl, IGRestrictedUserController, IGScrollViewAnnouncer, IGSessionTracker, IGSponsoredSupportConfiguration, IGTapButton, IGTooltipView, IGUserSession, NSIndexPath, NSString, UIBarButtonItem, UICollectionView, UIView, UIViewController;
@protocol IGAdsBottomCTAControlling, IGCommentsManagerProtocol><IGCommentsManagerSwiftProtocol, IGFeedItemLoggingProviderDelegate><IGGatingLoggingProviderDelegate, IGFeedSectionControllerComponentsType, IGListSectionController<IGFeedSectionControllerType, UIView<IGCommentTextViewProtocol;

@interface IGCommentThreadViewController : IGViewController<FBGNVGenericClickMetadataProvider, _TtP19IGCommentBannerView33IGCommentsBannerPresenterDelegate_, IGCommentComposerControllerDelegate, IGChildCommentThreadUpdateDelegate, IGCommentCoverSectionControllerDelegate, IGCommentThreadManagerDelegate, IGFeedNetworkSourceDelegate, IGScrollViewListener, IGFeedSectionControllerActionDelegate, IGFeedSectionControllerBloksDelegate, IGKeyboardInputManagerListener, IGKeyboardObserverFrameChangeDelegate, IGKeyboardObserverHideDelegate, IGKeyboardObserverShowDelegate, IGListAdapterDataSource, IGListDisplayDelegate, IGMediaOverlayDelegate, IGMediaUpdatedListener, IGQPMegaphoneSectionControllerPresenterDelegate, IGPartialModalSheetListener, IGScreenshotObserverDelegate, IGTooltipViewDelegate, IGStoryPostCaptureEditingViewControllerDelegate, IGCommentMediaTrayViewControllerDelegate, UICollectionViewDelegate, _TtP20IGCommentContextMenu28IGCommentContextMenuDelegate_, IGDirectShareSheetControllerDelegate, IGAutocompleteControllerDelegate, IGCommentViewControllerType, IGGestureHandler, IGScreenshotObserverLoggingProvider, IGTabControlSegment, IGCommentThreadUpdateListener, IGScopedListener> {
  /* instance variables */
  NSString *_mediaID;
  IGMedia *_media;
  IGDirectRepliesMessageMetadata *_directMessageMetadata;
  NSString *_prefillText;
  IGSessionTracker *_sessionTracker;
  IGCTAPresenterContext *_ctaPresenterContext;
  NSObject<IGFeedItemLoggingProviderDelegate><IGGatingLoggingProviderDelegate> *_loggingDelegate;
  IGCommentThreadConfiguration *_commentThreadConfiguration;
  IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
  NSObject<IGSponsoredInfoProviding> *_sponsoredInfoProvider;
  UIViewController *_presentingViewController;
  NSObject<IGDirectShareSheetControlling> *_reshareController;
  IGCommentCellRevealManager *_cellRevealManager;
  NSObject<IGCommentsManagerProtocol><IGCommentsManagerSwiftProtocol> *_threadManager;
  _TtC17IGCommentComposer27IGCommentComposerController *_commentComposerController;
  IGBulkCommentDeleteManager *_bulkDeleteManager;
  NSObject<IGKeyboardInputManager> *_keyboardInputManager;
  IGScrollViewAnnouncer *_feedScrollAnnouncer;
  UIView<IGCommentTextViewProtocol> *_commentTextView;
  UICollectionView *_collectionView;
  UIView *_collectionContainerView;
  UIView *_collectionMaskView;
  CAGradientLayer *_collectionMaskLayer;
  IGListAdapter *_listAdapter;
  IGCommentReshareRecord *_commentReshareRecord;
  IGLabelItemViewModel *_closeFriendsCommentSheetDisclaimer;
  IGCommentNuxModel *_commentNuxModel;
  IGCommentGroup *_commentGroupToShowDoubleTapToLikeNUX;
  IGCommentModel *_commentToShowCommentManagementNUX;
  IGCommentGroup *_commentGroupToShowPinnedCommentNUX;
  IGCommentSeenStateImpressionTracker *_commentSeenStateImpressionTracker;
  IGKeyboardObserver *_keyboardObserver;
  BOOL _shouldUpdateContentOffsetWhenKeyboardShowsUpInitially;
  BOOL _modalViewControllerHasDisplayedKeyboard;
  IGPermalinkFeedItemConfiguration *_permalinkFeedItemConfiguration;
  IGTombstoneManager *_tombstoneManager;
  IGRefreshControl *_refreshControl;
  IGSingleFeedTitleHelper *_singleFeedTitleHelper;
  UIBarButtonItem *_navigationBarRefreshButton;
  IGFeedNetworkSource *_asyncFeedNetworkSource;
  NSObject<IGAdsBottomCTAControlling> *_bottomCTAController;
  _TtC19IGCommentBannerView25IGCommentsBannerPresenter *_commentsBannerPresenter;
  IGCommentNavigationPerfComponents *_navPerfComponents;
  NSObject<IGCommentSectionViewModelCacheProtocol> *_viewModelCache;
  IGCommentOffense *_commentOffense;
  IGCommentOffense *_pendingCommentOffense;
  IGContentWarningController *_contentWarningController;
  IGRestrictedUserController *_restrictedUserController;
  IGPinnedCommentsToastController *_pinnedCommentsToastController;
  IGCommentModel *_commentReplied;
  IGCommentGroup *_commentGroupForPrivateReplyTooltip;
  IGTooltipView *_privateReplyTooltip;
  BOOL _privateReplyTooltipAppearedOnce;
  long long _privateReplyTooltipDirection;
  BOOL _isPrivateReplyEnabled;
  IGMediaOverlayView *_commentInformView;
  BOOL _shouldShowCommentInform;
  BOOL _didTapCommentCoverCTA;
  BOOL _didSeeCommentCoverCTA;
  BOOL _isCommentCoverEnabled;
  BOOL _eligibleForHidingComments;
  BOOL _shouldDisplayHiddenComments;
  long long _commentCoverCTAShownCount;
  long long _commentCoverWithManualHideCTAShownCount;
  IGCommentGroup *_commentGroupForHideCommentTooltip;
  IGTooltipView *_hideCommentTooltip;
  IGCommentThreadEmptyView *_emptyView;
  BOOL _canEnableBulkManagement;
  BOOL _commentDisabled;
  long long _singleCommentDeletionCount;
  IGTapButton *_moreOptionButton;
  IGCommentManagementController *_commentManagementController;
  IGDirectRepliesBulkManagementMenuController *_directCommentBulkManagementMenuController;
  IGTooltipView *_limitedCommentsTooltip;
  IGLimitedCommentsDataController *_limitedCommentsDataController;
  NSString *_limitedCommentsSessionId;
  IGPendingCommentsDataController *_pendingCommentsDataController;
  NSString *_pendingCommentsSessionId;
  IGBloksAsyncActionHandler *_asyncActionHandler;
  BOOL _shouldShowAdsCTA;
  BOOL _enableGenericClickWhenIGMediaMissing;
  BOOL _isReadOnly;
  NSString *_parentCommentGroupPk;
  IGCommentGroup *_commentSheetCommentGroup;
  BOOL _isLoadingInitialReplies;
  BOOL _shouldLogFunnelLogging;
  IGCommentToolsUpsellController *_upsellController;
  long long _singleNonSelfCommentDeletionCount;
  IGQuickPromotionCoordinator *_qpCoordinator;
  IGQPMegaphone *_qpMegaphone;
  IGQPMegaphoneSectionControllerPresenter *_qpMegaphoneSectionControllerPresenter;
  IGNudgingManager *_nudgingManager;
  IGCommentSortingSectionModel *_commentSortingSectionModel;
  IGCommentSortingMenuController *_commentSortingMenuController;
  BOOL _mediaEligibleForFanClubCommentSorting;
  BOOL _eligibleForFanClubCommentSorting;
  IGCommentFilteringBottomSheetViewController *_commentFilteringBottomSheetViewController;
  IGCommentFilteringSectionViewModel *_commentFilteringSectionViewModel;
  IGTooltipView *_fanClubCommentFilteringTooltip;
  BOOL _isCreatorReshareNudgeEnabled;
  IGCreatorConnectionsLogger *_creatorConnectionsLogger;
  IGXARDisclosureModel *_xarDislosure;
  BOOL _xarDislosureSetup;
  UIBarButtonItem *_infoButton;
  NSObject<IGStoryViewerPresenting> *_storyPresentationController;
  IGRapidFeedbackController *_rapidFeedbackController;
  id /* block */ _partialModalDismissHandler;
  IGCommentUserFlowLogger *_userFlowLogger;
  IGCommentModel *_commentToReshare;
  IGCommentModel *_longPressedComment;
  NSIndexPath *_longPressedCommentIndexPath;
  BOOL _appearedOnce;
  NSObject<IGChildCommentThreadUpdateDelegate> *_childCommentThreadDelegate;
  NSObject<IGFeedSectionControllerComponentsType> *_feedSectionControllerComponents;
  IGListSectionController<IGFeedSectionControllerType> *_feedSectionController;
}

@property (retain, nonatomic) IGUserSession *userSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)initWithParentCommentPk:(id)pk media:(id)media threadManager:(id)manager prefillText:(id)text userSession:(id)session ctaPresenterContext:(id)context loggingDelegate:(id)delegate commentThreadConfiguration:(id)configuration sponsoredSupportConfiguration:(id)configuration presentingViewController:(id)controller childCommentThreadDelegate:(id)delegate;
- (id)initWithDirectRepliesMessageMetadata:(id)metadata prefillText:(id)text userSession:(id)session ctaPresenterContext:(id)context loggingDelegate:(id)delegate commentThreadConfiguration:(id)configuration sponsoredSupportConfiguration:(id)configuration presentingViewController:(id)controller childCommentThreadDelegate:(id)delegate;
- (id)initWithMedia:(id)media prefillText:(id)text userSession:(id)session ctaPresenterContext:(id)context loggingDelegate:(id)delegate commentThreadConfiguration:(id)configuration sponsoredSupportConfiguration:(id)configuration presentingViewController:(id)controller childCommentThreadDelegate:(id)delegate;
- (id)initWithMediaID:(id)id prefillText:(id)text userSession:(id)session ctaPresenterContext:(id)context loggingDelegate:(id)delegate commentThreadConfiguration:(id)configuration sponsoredSupportConfiguration:(id)configuration presentingViewController:(id)controller childCommentThreadDelegate:(id)delegate;
- (void)_reloadDataFromPullToRefresh;
- (void)viewDidLoad;
- (void)updateUserActivityState:(id)state;
- (BOOL)prefersNavigationBarDividerHidden;
- (BOOL)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (long long)preferredTabBarBehavior;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredMinimizableInsets;
- (void)_didTapDismiss;
- (BOOL)accessibilityPerformEscape;
- (void)bottomCTAControllerDidAddCTAView:(id)ctaview toScrollView:(id)view;
- (void)bottomCTAControllerDidShowCTA:(BOOL)cta withBottomOffset:(double)offset;
- (void)_showCommentBannerIfNeededWithThread:(id)thread hasAppearedOnce:(BOOL)once;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
- (void)contentWarningProgressManagerDidUpdateToProgress:(double)progress;
- (void)feedNetworkSource:(id)source didReceiveFeedResponse:(id)response forRequestConfig:(id)config;
- (void)feedNetworkSource:(id)source didFinishLoadingWithConfig:(id)config success:(BOOL)success error:(id)error httpResponse:(id)response;
- (void)feedNetworkSource:(id)source didChangeToObjects:(id)objects;
- (void)feedNetworkSource:(id)source didStartLoadingWithConfig:(id)config;
- (void)feedNetworkSource:(id)source didCancelRequestForRequestConfig:(id)config;
- (id)analyticsModule;
- (id)analyticsExtras;
- (void)_manageBulkComments;
- (void)_cancelBulkCommentManagement;
- (void)_removeStoryComment:(id)comment forMedia:(id)media;
- (void)_updateStoryComments:(id)comments forMedia:(id)media;
- (void)didTapTooltipView:(id)view;
- (void)commentManagementController:(id)controller didTapBulkAction:(unsigned long long)action withSubAction:(unsigned long long)action;
- (id)commentManagementController:(id)controller commentsToApprove:(id)approve;
- (void)commentManagementTopLevelMenuDidSelectManageComments:(id)comments;
- (void)commentManagementTopLevelMenuDidSelectCommentControls:(id)controls;
- (void)commentManagementTopLevelMenuDidSelectLimitedComments:(id)comments;
- (void)commentManagementTopLevelMenuDidSelectTurnOffCommenting:(id)commenting isOn:(BOOL)on;
- (void)commentManagementTopLevelMenuViewControllerDidSelectHideComments:(id)comments;
- (void)commentToolsUpsellViewControllerDidSelectSeeLimitedComments:(id)comments;
- (void)commentToolsUpsellViewControllerDidSelectManageComments:(id)comments;
- (void)mediaWasUpdated:(id)updated withChange:(long long)change isFromPreview:(BOOL)preview;
- (BOOL)canRespondToGesture:(id)gesture;
- (id)commentThreadManager;
- (id)collectionView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })commentTextViewFrame;
- (id)screenshotAnalyticsExtras;
- (void)screenshotObserverDidSeeScreenshotTaken:(id)taken;
- (void)screenshotObserverDidSeeActiveScreenCapture:(id)capture event:(long long)event;
- (void)mediaHiddenFeedItem:(id)item sourceModule:(id)module storyReelPK:(id)pk reason:(long long)reason;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndScrolling:(id)scrolling;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidEndDragging:(id)dragging;
- (void)scrollViewWillScrollNearBottom:(id)bottom;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity finalizedTargetContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)scrollViewWillScrollNearTop:(id)top;
- (void)scrollViewDidScrollToTop:(id)top;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)didTapCommentLoadSectionController:(id)controller;
- (void)didTapViewParentCommentThreadWithSectionController:(id)controller;
- (void)commentSortingSectionController:(id)controller didTapSortingCell:(id)cell;
- (void)_presentCommentPollVoterListIfNeeded;
- (void)commentSortingMenuController:(id)controller didSelectItemViewModel:(id)model;
- (void)didUpdateComment:(id)comment operation:(unsigned long long)operation;
- (void)didUpdateComment:(id)comment updatedCommentCount:(long long)count operation:(unsigned long long)operation;
- (void)updateTranslationStateForCommentIds:(id)ids isUndoingTranslations:(BOOL)translations;
- (void)didTranslateCommentsWithTranslations:(id)translations;
- (void)didFailToTranslateForCommentIds:(id)ids;
- (void)commentController:(id)controller didTapAvatarOnComment:(id)comment;
- (void)_logAvatarCommentTap;
- (void)commentMediaTray:(id)tray didSelectAvatar:(id)avatar avatarStickerLoggingInfo:(id)info;
- (void)commentMediaTray:(id)tray didSelectGIFAnimatedViewModel:(id)model;
- (void)didTapFacebookCCPAggregatedCommentCountSectionController;
- (void)commentDeleteManagerDidAddCommentToDelete:(id)delete numberOfCommentsToDelete:(long long)delete;
- (void)commentDeleteManagerDidFailToDeleteComments:(id)comments;
- (void)commentDeleteManagerDidStartCommentDeletion:(id)deletion;
- (void)commentDeleteManagerDidFinishCommentDeletion:(id)deletion deletedComments:(id)comments;
- (void)commentDeleteManagerDidGetUpsell:(id)upsell deletedComments:(id)comments upsellType:(unsigned long long)type usersToBlock:(id)block suggestedHiddenWords:(id)words upsellVariant:(unsigned long long)variant;
- (void)commentComposingController:(id)controller commentTextViewDidBeginEditing:(id)editing;
- (void)commentComposingController:(id)controller textUpdatedFromString:(id)string toString:(id)string;
- (void)commentComposingController:(id)controller didUpdateText:(id)text attributedText:(id)text replyingToComment:(id)comment;
- (void)commentComposingController:(id)controller postComment:(id)comment replyToComment:(id)comment loggingExtraParams:(id)params navigationState:(id)state carouselCommentConfig:(id)config;
- (void)commentComposingController:(id)controller postAnimatedMediaViewModel:(id)model replyToComment:(id)comment loggingExtraParams:(id)params navigationState:(id)state;
- (void)commentComposingController:(id)controller postAvatarSticker:(id)sticker avatarStickerLoggingInfo:(id)info surface:(id)surface replyToComment:(id)comment loggingExtraParams:(id)params navigationState:(id)state;
- (void)commentComposingController:(id)controller postImagineCreateEntId:(id)id imagineCreateImageURL:(id)url replyToComment:(id)comment loggingExtraParams:(id)params navigationState:(id)state;
- (void)commentComposingController:(id)controller didSendDirectWithUsernames:(id)usernames sender:(id)sender threadID:(id)id;
- (void)commentComposingController:(id)controller didShowReplyingToBannerView:(id)view;
- (void)commentComposingController:(id)controller didHideReplyingToBannerView:(id)view;
- (void)commentComposingController:(id)controller didShowSimilarCommentsBannerView:(id)view;
- (void)commentComposingController:(id)controller didHideSimilarCommentsBannerView:(id)view;
- (void)commentComposingController:(id)controller didTapProfilePicture:(id)picture;
- (void)commentComposingControllerDidEndEditing:(id)editing;
- (void)commentComposingControllerDidCancelReplying:(id)replying;
- (void)commentComposingController:(id)controller didTapCameraButton:(id)button replyToComment:(id)comment;
- (void)commentComposingController:(id)controller didTapGiftButton:(id)button;
- (void)commentComposingController:(id)controller didSelectEmoji:(id)emoji;
- (void)commentComposingController:(id)controller didTapShareWithSharingFrictionItem:(id)item;
- (void)commentController:(id)controller didTapCloseButtonOnCommentNuxForCommentGroup:(id)group nuxType:(unsigned long long)type;
- (void)commentController:(id)controller didTapCollapseRepliesForCommentGroup:(id)group;
- (void)commentController:(id)controller didTapInlineComposerCell:(id)cell replyToComment:(id)comment;
- (void)commentController:(id)controller commentOffenseUpdated:(id)updated;
- (void)commentController:(id)controller openMiniProfileForAccountId:(id)id name:(id)name;
- (void)commentController:(id)controller didTapOnViewMoreRepliesWithCommentGroup:(id)group entryPoint:(long long)point media:(id)media;
- (void)commentController:(id)controller didUnhideIGComment:(id)igcomment;
- (void)commentController:(id)controller didTapHideForIGComment:(id)igcomment;
- (void)commentController:(id)controller didTapPinForComment:(id)comment;
- (void)commentController:(id)controller didTapReplyForComment:(id)comment triggerType:(unsigned long long)type;
- (void)commentController:(id)controller didTapPrivateReplyForComment:(id)comment;
- (void)commentController:(id)controller didTapReactionCountForComment:(id)comment;
- (void)commentController:(id)controller didTapLikeForComment:(id)comment;
- (void)commentController:(id)controller didTapLikeCountForComment:(id)comment;
- (void)commentController:(id)controller didApproveComment:(id)comment;
- (void)commentController:(id)controller didTapOnProfileView:(id)view forComment:(id)comment;
- (void)commentController:(id)controller didTapURL:(id)url showsFanClubBadge:(BOOL)badge forComment:(id)comment shouldShowFanClubBannerOnProfileNavigation:(BOOL)navigation;
- (void)commentController:(id)controller didTapCarouselChildMentionURL:(id)url parameters:(id)parameters forComment:(id)comment;
- (void)commentController:(id)controller didTapOnLikedByButtonForUser:(id)user;
- (void)commentController:(id)controller willDeleteComment:(id)comment;
- (void)commentController:(id)controller didDeleteComment:(id)comment;
- (void)commentController:(id)controller didReportComment:(id)comment;
- (void)commentController:(id)controller didTapFailureButtonForComment:(id)comment;
- (void)commentController:(id)controller didFailToPost:(id)post;
- (void)commentController:(id)controller didMakeTranslations:(id)translations;
- (void)commentController:(id)controller didDoubleTapToLikeComment:(id)comment;
- (void)commentController:(id)controller didUnrestrictComment:(id)comment;
- (void)commentController:(id)controller didTapToReadRestrictedComment:(id)comment;
- (void)commentController:(id)controller didTapToSelectComment:(id)comment;
- (BOOL)commentController:(id)controller canSelectComment:(id)comment;
- (void)commentController:(id)controller didCancelRestrict:(id)restrict;
- (void)commentController:(id)controller didTapOnRestrict:(id)restrict;
- (void)commentController:(id)controller didTapOnBlock:(id)block;
- (void)commentController:(id)controller didCancelBlockActionSheet:(id)sheet;
- (void)commentController:(id)controller didTapOnUnfollow:(id)unfollow;
- (void)commentController:(id)controller didShowModerationActionSheet:(id)sheet triggerType:(unsigned long long)type;
- (void)commentController:(id)controller didTapReportAction:(id)action;
- (void)commentController:(id)controller didTapBlockAction:(id)action;
- (void)commentController:(id)controller didTapOnCommentMedia:(id)media;
- (void)commentController:(id)controller didCancelActionSheet:(id)sheet;
- (void)commentController:(id)controller willCompleteClosingSwipe:(id)swipe;
- (void)commentController:(id)controller didTapLikeOnCaption:(id)caption;
- (void)commentController:(id)controller didLongPressLikeButtonOnContentView:(id)view;
- (void)commentController:(id)controller didEndLongPressLikeButtonOnContentView:(id)view;
- (void)commentController:(id)controller didHideComment:(id)comment;
- (void)commentController:(id)controller didUnhideComment:(id)comment;
- (void)commentController:(id)controller didTapOnUnsupportedMediaViewForComment:(id)comment;
- (void)commentController:(id)controller didTapLikeCommentOnOwnPost:(id)post;
- (void)commentController:(id)controller didTapSeeAllByGifCreator:(id)creator;
- (void)commentController:(id)controller didTapStoryShare:(id)share;
- (void)commentController:(id)controller didTapShareSheetWithComment:(id)comment;
- (void)commentThreadManager:(id)manager didHaltPostComment:(id)comment;
- (void)commentThreadManagerDidResolvePendingComments;
- (void)feedSectionControllerDidUpdateAYMFRowVisibility:(BOOL)visibility;
- (void)feedSectionControllerDidTapCustomizableButton:(id)button;
- (void)feedSectionControllerDidTapCommentEntryPoint:(id)point replyText:(id)text;
- (void)feedSectionControllerDidSwipePageCellToIndex:(long long)index;
- (void)feedSectionControllerDidUnfollowUser:(id)user;
- (void)feedSectionControllerChangedMuteStatusForUser:(id)user changedPostsMuteStatus:(BOOL)status changedStoryMuteStatus:(BOOL)status;
- (void)feedSectionController:(id)controller didUnfollowHashtag:(id)hashtag;
- (BOOL)feedSectionController:(id)controller shouldNavigateToCommentsWithEntryPoint:(long long)point;
- (BOOL)feedSectionControllerShouldExpandFeedItemOnMoreTapped:(id)tapped;
- (void)feedSectionControllerDidDismissFeedItem:(id)item;
- (void)feedSectionControllerDidSnoozeSuggestedPosts;
- (void)feedSectionControllerDidLikeFeedItem:(id)item mediaView:(id)view;
- (void)feedSectionControllerDidPresentShareSheetForType:(long long)type;
- (void)feedSectionControllerDidDismissShareSheetForType:(long long)type;
- (void)feedSectionControllerDidBeginUserInteraction;
- (void)feedSectionControllerDidEndUserInteraction;
- (void)feedSectionControllerDidLoop:(id)loop;
- (void)feedSectionControllerDidBeginWYTSurvey:(id)wytsurvey;
- (BOOL)feedSectionControllerShouldDisableAudio;
- (void)feedSectionControllerDidTapToExpandVideo:(id)video media:(id)media mediaIndex:(long long)index;
- (void)feedSectionControllerDidCompleteActionRequiringFilterAfterMedia:(id)media;
- (void)feedSectionControllerDidSavePost;
- (void)feedSectionControllerDidShareToStory;
- (void)feedSectionControllerDidShareToDirect;
- (id)commentTrackableObjectForIndexPath:(id)path;
- (void)keyboardInputManagerDidUpdateBottomInsetY:(double)y;
- (void)keyboardInputManagerWillUpdateBottomInsetY:(double)y;
- (void)keyboardInputManagerDidUpdateKeyboardPercentPresented:(double)presented;
- (void)keyboardInputManagerWillChangeKeyboardFrame;
- (void)keyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserver:(id)observer keyboardWillHideWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidShow:(id)show;
- (void)keyboardObserver:(id)observer keyboardFrameWillChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserver:(id)observer keyboardFrameDidChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)tombstoneManager:(id)manager didTapShowButtonForTombstoneView:(id)view;
- (void)contentWarningControllerDidTapUndo:(id)undo;
- (void)contentWarningControllerDidTapLearnMore:(id)more;
- (void)contentWarningControllerDidDismissLearnMoreSheet:(id)sheet;
- (void)storyPostCaptureEditingViewController:(id)controller didShareToStory:(long long)story andDirectRecipients:(id)recipients storyModelArray:(id)array metadataArray:(id)array highlightIds:(id)ids exitPoint:(long long)point completion:(id /* block */)completion;
- (void)storyPostCaptureEditingViewControllerDidCancel:(id)cancel;
- (void)storyPostCaptureEditingViewController:(id)controller didTapSendRollCallWithDirectRecipients:(id)recipients;
- (void)storyPostCaptureEditingViewController:(id)controller didTapSendPermanentMediaWithAsset:(id)asset entryPoint:(long long)point;
- (void)storyPostCaptureEditingViewController:(id)controller didTapConfirmNotesPogVideoWithComposition:(id)composition;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)forceOpenShareSheet;
- (void)handleUserScopedIntentFromBloks:(id)bloks;
- (id)trackingModel;
- (void)didTapMediaOverlayButton:(id)button mediaItem:(id)item;
- (void)didTapActionableInsightsTipWithModel:(id)model;
- (void)didDismissActionableInsightsTipWithModel:(id)model;
- (void)registerBannerCell:(id)cell;
- (void)refreshBannerCell;
- (void)commentCoverSectionControllerDidTapTitle:(id)title;
- (void)commentCoverSectionControllerDidTapSubtitle:(id)subtitle;
- (id)fallbackIcon;
- (double)iconVerticalOffset;
- (id)accessibilityIdentifier;
- (id)badge;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)sheet willPresentConfirmationToast:(BOOL)toast hasShared:(BOOL)shared;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)toast;
- (void)directShareSheetController:(id)controller didTapRecipient:(id)recipient selected:(BOOL)selected;
- (void)directShareSheetControllerDidSelect:(id)select sender:(id)sender directRecipients:(id)recipients externalServices:(id)services text:(id)text media:(id)media selectedPostPk:(id)pk sharedAttachments:(id)attachments;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)toast;
- (void)directShareSheetControllerDidTapSave:(id)save;
- (void)directShareSheetControllerDidShareToStory:(id)story;
- (id)directShareSheetWarningMessage;
- (id)contentMetadata;
- (void)didDismissQpMegaphoneSectionControllerPresenter:(id)presenter;
- (void)didTapCommentFilteringSectionController:(id)controller;
- (void)commentFilteringBottomSheetViewControllerDidSelectFilter:(id)filter sortOrder:(id)order;
- (void)igXARDisclosure:(id)xardisclosure didOpenUrl:(id)url;
- (void)igXARDisclosureDidClickDismiss:(id)dismiss;
- (void)_igXARInfoButtonIsTapped;
- (void)autocompleteController:(id)controller willShowContainerView:(id)view type:(long long)type;
- (void)autocompleteController:(id)controller willHideContainerView:(id)view;
- (void)autocompleteControllerDidAutocomplete:(id)autocomplete autocompleteText:(id)text resultUser:(id)user;
- (void)autocompleteController:(id)controller atIndex:(long long)index isUserSearch:(BOOL)search allResults:(id)results indexInNullState:(unsigned long long)state;
- (void)autocompleteControllerDidReload:(id)reload;
- (void)carouselChildSectionControllerDidTapBackButton:(id)button;
- (void)carouselChildSectionControllerDidTapViewParentCommentThread:(id)thread;
- (void)commentsBannerPresenter:(id)presenter didAdd:(id)add toScrollView:(id)view;
- (void)commentsBannerPresenter:(id)presenter didShowCTA:(BOOL)cta bottomOffset:(double)offset;
- (void)commentDidUpdateWithCommentId:(id)id update:(long long)update;
- (void)childCommentThreadDidUpdateComment:(id)comment update:(long long)update;
- (void)childCommentThreadDismissWithCommentGroup:(id)group;
- (void)_updateCollectionViewMask:(long long)mask;
- (id)collectionView:(id)view contextMenuConfigurationForItemAtIndexPath:(id)path point:(struct CGPoint { double x0; double x1; })point;
- (void)collectionView:(id)view willDisplayContextMenuWithConfiguration:(id)configuration animator:(id)animator;
- (id)collectionView:(id)view previewForHighlightingContextMenuWithConfiguration:(id)configuration;
- (id)collectionView:(id)view previewForDismissingContextMenuWithConfiguration:(id)configuration;
- (void)commentContextMenuWithDidSelect:(long long)select comment:(id)comment cell:(id)cell;
@end

#endif /* IGCommentThreadViewController_h */