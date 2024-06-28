//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageListViewController_h
#define IGDirectMessageListViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAnalyticsModule-Protocol.h"
#include "IGApplicationWillEnterForegroundCriticalEventsListener-Protocol.h"
#include "IGBugReportingProtocol-Protocol.h"
#include "IGCollectionView.h"
#include "IGDirectAgentsAddMetaAICommandProtocol-Protocol.h"
#include "IGDirectAggregatedMediaViewerViewControllerDelegate-Protocol.h"
#include "IGDirectCameraReplying-Protocol.h"
#include "IGDirectContextualSuggestionService.h"
#include "IGDirectMessageFooterTextManager.h"
#include "IGDirectMessageMenuController.h"
#include "IGDirectMessageReactionController.h"
#include "IGDirectMessageReplying-Protocol.h"
#include "IGDirectMessageViewModelProtocol-Protocol.h"
#include "IGDirectPromptXMAMessageViewModel.h"
#include "IGDirectQuotedReplyMessageCell.h"
#include "IGDirectReceiverFetchPreviewDataProviding-Protocol.h"
#include "IGDirectScrollCoordinator.h"
#include "IGDirectStoryStickerLogger.h"
#include "IGDirectThreadAnalyticsLogger.h"
#include "IGDirectThreadCollectionViewLayout.h"
#include "IGDirectThreadGyroscopeThemeManager.h"
#include "IGDirectThreadLastSeenMessageTracker.h"
#include "IGDirectThreadSelectiveSyncService.h"
#include "IGDirectThreadViewOutgoingMessageSendAttributionFactory.h"
#include "IGDirectThreadViewTimestampAnimator.h"
#include "IGDirectTranslationsService.h"
#include "IGDirectVisualMessageViewerPresentationManager-Protocol.h"
#include "IGDirectVisualMessageViewerPresentationManagerContextDelegate-Protocol.h"
#include "IGListDiffable-Protocol.h"
#include "IGNewMessageIndicator.h"
#include "IGScopedListener-Protocol.h"
#include "IGScreenshotObserverDelegate-Protocol.h"
#include "IGUserAvatarStatusListener-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"
#include "_TtC32IGDirectMessageStreamingEventKit40IGDirectMessageStreamingEventCoordinator.h"
#include "_TtP32IGDirectMessageStreamingEventKit51IGDirectMessageStreamingReactionCoordinatorDelegate_-Protocol.h"

@class IGDirectGradientBubbleTracker, IGDirectMessageImpressionLoggingManager, IGDirectMessageSentSpeedLogger, IGDirectShhModeLearnMoreViewModel, IGDirectThreadNullStateViewModel, IGDirectThreadViewMessagesClientStateManager, IGListAdapter, IGPerformanceTailLoadLogger, IGPlaybackCoordinator, IGScreenshotObserver, IGScrollPerfManualLogger, IGScrollViewAnnouncer, IGUserSession, IGViewControllerAnnouncer, NSArray, NSMutableArray, NSString, UILongPressGestureRecognizer;
@protocol IGDirectBroadcastChannelJoinToInteractDelegate, IGDirectGalleryHandler, IGDirectMessageActionBlocking, IGDirectMessageCellSelectStateCoordinating, IGDirectMessageCellSwipeToReplyHandler, IGDirectMessageListDataSource, IGDirectMessageListViewControllerDelegate, IGDirectRepliesEntrypointHandler, IGDirectThreadInfoProviding, IGDirectVaulting;

@interface IGDirectMessageListViewController : IGViewController<IGDirectAggregatedMediaViewerViewControllerDelegate, IGScreenshotObserverDelegate, UICollectionViewDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, IGUserAvatarStatusListener, _TtP32IGDirectMessageStreamingEventKit51IGDirectMessageStreamingReactionCoordinatorDelegate_, IGAnalyticsModule, IGBugReportingProtocol, IGDirectVisualMessageViewerPresentationManagerContextDelegate, IGScopedListener, IGApplicationWillEnterForegroundCriticalEventsListener> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGDirectThreadInfoProviding> *_threadInfoProvider;
  IGCollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  IGDirectMessageMenuController *_menuController;
  IGDirectThreadViewMessagesClientStateManager *_clientStateManager;
  IGDirectThreadAnalyticsLogger *_analyticsLogger;
  IGDirectThreadViewOutgoingMessageSendAttributionFactory *_sendAttributionFactory;
  IGDirectScrollCoordinator *_scrollCoordinator;
  UILongPressGestureRecognizer *_longPressGestureRecognizer;
  IGNewMessageIndicator *_messageIndicator;
  IGDirectThreadLastSeenMessageTracker *_lastSeenMessageTracker;
  IGScrollPerfManualLogger *_scrollPerfLogger;
  BOOL _detectedRubberBanding;
  BOOL _isFirstAppearance;
  BOOL _isViewVisible;
  double _navigationBarHeight;
  NSObject<IGDirectMessageReplying> *_messageReplyHandler;
  NSObject<IGDirectMessageCellSwipeToReplyHandler> *_swipeToReplyHandler;
  NSObject<IGDirectCameraReplying> *_cameraReplyHandler;
  NSObject<IGDirectGalleryHandler> *_galleryHandler;
  NSObject<IGDirectAgentsAddMetaAICommandProtocol> *_commandHandler;
  IGDirectTranslationsService *_translationsService;
  IGDirectThreadViewTimestampAnimator *_timestampAnimator;
  NSObject<IGDirectMessageListDataSource> *_messageListDataSource;
  NSArray *_nonHighlightedCells;
  NSMutableArray *_updateReasonsSincePaused;
  BOOL _isPerformingListKitUpdates;
  IGDirectThreadCollectionViewLayout *_collectionViewLayout;
  IGDirectMessageFooterTextManager *_footerTextPromotionManager;
  long long _threadAppearance;
  IGScreenshotObserver *_screenshotObserver;
  NSObject<IGListDiffable> *_pendingPowerupTextMessageViewModel;
  BOOL _isScreenRecording;
  BOOL _isPendingReelsReplyMessageForSkippingAutoscroll;
  IGDirectThreadGyroscopeThemeManager *_gyroscopeThemeManager;
  NSObject<IGDirectVisualMessageViewerPresentationManager> *_visualMessageViewerPresentationManager;
  NSObject<IGDirectVaulting> *_vault;
  NSMutableArray *_insertedAccessibilityMessageViewModels;
  NSString *_messageIdToScrollTo;
  long long _messageNumberOfPagesSearched;
  NSObject<IGDirectMessageViewModelProtocol> *_scrollingToMessageViewModel;
  IGDirectQuotedReplyMessageCell *_tappedQuotedReplyMessageCell;
  IGDirectContextualSuggestionService *_contextualSuggestionService;
  BOOL _didLogSaveReplyNuxImpression;
  unsigned long long _currentUpdateReason;
  IGPerformanceTailLoadLogger *_tailLoadLogger;
  IGScrollViewAnnouncer *_scrollViewAnnouncer;
  IGViewControllerAnnouncer *_viewControllerAnnouncer;
  IGDirectMessageSentSpeedLogger *_messageSentSpeedLogger;
  IGDirectMessageReactionController *_reactionController;
  IGPlaybackCoordinator *_playbackCoordinator;
  IGDirectThreadSelectiveSyncService *_selectiveSyncService;
  BOOL _shouldLogScrollDepth;
  unsigned long long _upwardScrollCount;
  double _oldestMessageViewed;
  BOOL _socialStickerDiscplaimerInProgress;
  NSObject<IGDirectReceiverFetchPreviewDataProviding> *_receiverFetchPreviewDataFetcher;
  NSArray *_recipientIDs;
  IGDirectStoryStickerLogger *_logger;
  double _keyboardHeight;
  NSObject<IGListDiffable> *_lastPinnedStreamingMessage;
  NSObject<IGDirectMessageCellSelectStateCoordinating> *_bulkDeleteSelectionCoordinator;
  IGDirectMessageImpressionLoggingManager *_messageImpressionLoggingManager;
  BOOL _isActivelyScrollingToBottom;
  _TtC32IGDirectMessageStreamingEventKit40IGDirectMessageStreamingEventCoordinator *_streamingEventCoordinator;
  BOOL _canLoadPreviousMessages;
  BOOL _willScrollToTop;
  NSObject<IGDirectMessageActionBlocking> *_messageActionBlockHandler;
  NSObject<IGDirectRepliesEntrypointHandler> *_commentsHandler;
  NSObject<IGDirectBroadcastChannelJoinToInteractDelegate> *_joinToInteractDelegate;
}

@property (weak, nonatomic) NSObject<IGDirectMessageListViewControllerDelegate> *delegate;
@property (nonatomic) BOOL isPaused;
@property (readonly, nonatomic) IGDirectShhModeLearnMoreViewModel *shhModeLearnMoreViewModel;
@property (readonly, nonatomic) IGDirectThreadNullStateViewModel *nullStateViewModel;
@property (readonly, nonatomic) IGDirectPromptXMAMessageViewModel *channelChallengeViewModel;
@property (readonly, nonatomic) IGDirectGradientBubbleTracker *gradientBubbleTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session threadInfoProvider:(id)provider messageListDataSource:(id)source analyticsLogger:(id)logger navigationBarHeight:(double)height messageReplyHandler:(id)handler swipeToReplyHandler:(id)handler cameraReplyHandler:(id)handler galleryHandler:(id)handler commandHandler:(id)handler messagesClientStateManager:(id)manager sendAttributionFactory:(id)factory footerTextPromotionManager:(id)manager translationsService:(id)service gyroscopeThemeManager:(id)manager visualMessageViewerPresentationManager:(id)manager vault:(id)vault messageSentSpeedLogger:(id)logger receiverFetchPreviewDataFetcher:(id)fetcher bulkDeleteSelectionCoordinator:(id)coordinator messageIdToScrollTo:(id)to recipientIDs:(id)ids;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (id)scrollView;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (void)avatarStatusManager:(id)manager didUpdateAvatarStatus:(long long)status;
- (void)avatarStatusManagerDidCreateAvatar:(id)avatar;
- (void)avatarStatusManagerDidDeleteAvatar:(id)avatar;
- (void)avatarStatusManagerDidUpdateAvatar:(id)avatar;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint *)offset;
- (void)scrollViewDidScroll:(id)scroll;
- (BOOL)scrollViewShouldScrollToTop:(id)top;
- (void)scrollViewDidScrollToTop:(id)top;
- (void)screenshotObserverDidSeeScreenshotTaken:(id)taken;
- (void)screenshotObserverDidSeeActiveScreenCapture:(id)capture event:(long long)event;
- (void)messageListDataSource:(id)source didTapParticipantCellWithUserKey:(id)key;
- (id)createMessageSectionComponentsWithLastSeenShhMessageInfoForCurrentUserWhenEnteringShhMode:(id)mode;
- (void)messageListDataSource:(id)source didEncounterError:(id)error;
- (void)messageListDataSourceDidToggleShhMode:(id)mode;
- (void)messageListDataSourceDidReplayInShhMode:(id)mode;
- (void)messageListDataSource:(id)source didTapCtaForPoll:(id)poll optionsCount:(long long)count messageMetadata:(id)metadata entryPoint:(unsigned long long)point;
- (void)messageListDataSource:(id)source didTapQuotedMessageBubbleViewInCell:(id)cell withQuotedMessageId:(id)id;
- (BOOL)messageListDataSourceShouldUpdateSeenState:(id)state;
- (void)messageListDataSource:(id)source didUpdateWithDiffResult:(id)result isInitialLoad:(BOOL)load updateReason:(unsigned long long)reason;
- (void)messageListDataSource:(id)source showDailyPromptsConsumptionBannerIfNecessaryWithViewModel:(id)model;
- (void)messageListDataSource:(id)source hideDailyPromptsConsumptionBannerIfNecessaryWithViewModel:(id)model;
- (id)visualMessageViewerPresentationContextForIdentifier:(id)identifier;
- (id)messageListDisplayState;
- (void)timestampAnimatorDidBeginSliding:(id)sliding;
- (BOOL)timestampAnimator:(id)animator shouldSlideCell:(id)cell atIndexPath:(id)path;
- (BOOL)timestampAnimatorShouldReceiveTouchWithIndexPath:(id)path;
- (BOOL)timestampAnimatorShouldRespectOtherGestureRecognizers:(id)recognizers;
- (void)triggerAnalyticsLoggerForTimestampVisible;
- (void)didTapTranslationsFooterTextForMessageWithId:(id)id hasTranslationAvailable:(BOOL)available;
- (id)bugReportDescription;
- (id)additionalBugReportMetadata;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;
- (id)targetForAction:(SEL)action withSender:(id)sender;
- (void)unsend:(id)unsend;
- (void)unlike:(id)unlike;
- (void)copy:(id)copy;
- (void)report:(id)report;
- (void)save:(id)save;
- (void)replay:(id)replay;
- (void)viewDetails:(id)details;
- (void)lookupCreator:(id)creator;
- (void)forward:(id)forward;
- (void)quotedReply:(id)reply;
- (void)adminRemove:(id)remove;
- (void)commentOnMessage:(id)message;
- (void)shareToStory:(id)story;
- (void)edit:(id)edit;
- (void)positiveFeedback:(id)feedback;
- (void)negativeFeedback:(id)feedback;
- (void)inspect:(id)inspect;
- (void)paidPartnership:(id)partnership;
- (void)translate:(id)translate;
- (void)deleteForYou:(id)you;
- (void)reimagine:(id)reimagine;
- (void)saveAsFavorite:(id)favorite;
- (void)unsaveAsFavorite:(id)favorite;
- (void)creatorAIInspectInternal:(id)internal;
- (void)addToCollection:(id)collection;
- (void)stopRecurringPrompt:(id)prompt;
- (void)editPrompt:(id)prompt;
- (void)menuController:(id)controller didLookForCreatorWithName:(id)name isSticker:(BOOL)sticker;
- (void)menuController:(id)controller didTapOnGeneratedStickerWithId:(id)id messageViewModel:(id)model;
- (void)menuController:(id)controller didSaveText:(id)text;
- (void)menuController:(id)controller didContactInfoDetectedWithMessageViewModel:(id)model;
- (void)menuController:(id)controller didReplyWithMessageViewModel:(id)model;
- (void)menuController:(id)controller didReimagineWithMessageViewModel:(id)model;
- (void)menuController:(id)controller didEditWithMessageViewModel:(id)model;
- (void)menuController:(id)controller didEditPromptWithMessageViewModel:(id)model;
- (void)menuController:(id)controller didCommentWithMessageViewModel:(id)model;
- (void)menuController:(id)controller didTranslateWithMessageViewModel:(id)model;
- (void)menuController:(id)controller didSelectDeleteForYouWithMessageViewModel:(id)model;
- (void)menuController:(id)controller didSaveAsFavoriteWithMessageViewModel:(id)model;
- (void)menuController:(id)controller didUnsaveAsFavoriteWithMessageViewModel:(id)model;
- (void)menuController:(id)controller didTapSnoozeShortcutWithMessageViewModel:(id)model;
- (void)menuController:(id)controller didTapOpenSnoozedReelsWithViewModel:(id)model;
- (void)menuController:(id)controller didStopRecurringPromptWithMessageViewModel:(id)model;
- (void)menuController:(id)controller editPromptWithMessageViewModel:(id)model;
- (id)visualMessageViewerPresentationManagerContextDelegate;
- (id)currentThread;
- (id)currentThreadKey;
- (id)presentingViewControllerForAlertView;
- (id)messageViewModelForMessageKey:(id)key;
- (id)previousMessageForCreatorAIFeedbackWithMessageKey:(id)key;
- (id)promptForAIAgentWithMessageKey:(id)key;
- (BOOL)menuControllerShouldPresent:(id)present;
- (void)menuControllerDidSetVisible:(id)visible;
- (void)menuControllerWillPresent:(id)present actionsBar:(id)bar actionsViewController:(id)controller reactionsOverlay:(id)overlay contentTypeLogging:(id)logging messageIdLogging:(id)logging clientContextLogging:(id)logging botResponseId:(id)id;
- (void)menuControllerWillDismiss:(id)dismiss actionsBar:(id)bar actionsViewController:(id)controller reactionsOverlay:(id)overlay reactionBlock:(id /* block */)block messageCell:(id)cell animated:(BOOL)animated isEditAction:(BOOL)action contextMenuCompletion:(id /* block */)completion;
- (void)menuControllerWillPresentOrAdjustEmojiPickerTray:(id)tray selectionMode:(long long)mode;
- (void)menuControllerWillDismissEmojiPickerTray:(id)tray;
- (void)menuControllerWillResetOpacity:(id)opacity animated:(BOOL)animated;
- (void)menuControllerWillAdjustOpacityToFocusMessage:(id)message;
- (BOOL)menuControllerShouldStartMessageScaleAnimation:(id)animation;
- (void)menuControllerWillStartMessageScaleAnimation:(id)animation;
- (void)menuControllerDidStopMessageScaleAnimation:(id)animation;
- (void)menuControllerWillPerformFloatingReactionAnimation:(id)animation liveRect:(id /* block */)rect emojiUnicode:(id)unicode;
- (BOOL)menuControllerIsKeyboardActive:(id)active;
- (void)menuControllerWillDismissKeyboard:(id)keyboard;
- (void)menuControllerWillPresentKeyboard:(id)keyboard restoreKeyboard:(BOOL)keyboard;
- (void)menuControllerWillHandleTap:(id)tap forMessagePowerup:(id)powerup messageCell:(id)cell useHapticFeedback:(BOOL)feedback;
- (void)menuControllerWillBring:(id)bring messageCellToFrontOfMessageList:(id)list;
- (void)menuControllerShouldPresentThreadDetails:(id)details fromEntryPoint:(id)point;
- (id /* block */)menuControllerToggleBlockedForCallback:(id)callback;
- (BOOL)menuControllerShouldDisableForwardForAllMessage;
- (BOOL)menuControllerIsInCreatorBroadcast:(id)broadcast;
- (void)menuControllerCreateSharedAlbum:(id)album messageClientContext:(id)context messageId:(id)id actionType:(unsigned long long)type;
- (void)menuControllerShowMediaGalleryForSharedAlbum:(id)album originalMessageClientContext:(id)context originalMessageId:(id)id sharedAlbumId:(id)id actionType:(unsigned long long)type;
- (id)messageTypeTextInUnsendDialogTitleWithViewModel:(id)model;
- (id)messageTypeTextInUnsendDialogBodyWithViewModel:(id)model;
- (id)stickerIdForMessageKey:(id)key;
- (BOOL)isAnimatedStickerForMessageKey:(id)key;
- (BOOL)menuControllerShouldDisableSaveForMessage:(id)message;
- (BOOL)menuControllerShouldDisableReplyForMessage:(id)message;
- (void)menuControllerReloadThread;
- (void)menuControllerWillPresentQuickForwardMenu:(id)menu;
- (void)menuControllerWillDismissQuickForwardMenu:(id)menu;
- (void)threadCollectionViewLayoutWillFinalizeCollectionViewUpdates:(id)updates;
- (id)bottomColorForSeparatorAtIndexPath:(id)path;
- (BOOL)hasSeparatorAtIndexPath:(id)path;
- (BOOL)hasBottomSeparatorAtIndexPath:(id)path;
- (BOOL)hasTopSeparatorAtIndexPath:(id)path;
- (BOOL)hasSpacerAtIndexPath:(id)path;
- (BOOL)hasTimestampLabelAtIndexPath:(id)path;
- (id)mostRecentMessages:(unsigned long long)messages;
- (id)getPollsInLastMessages:(unsigned long long)messages;
- (id)getPollInfoInLastMessages:(unsigned long long)messages;
- (id)transitionZoomViewFromItem:(id)item withZoomContext:(id)context shouldMoveToVisiblePosition:(BOOL)position;
- (void)gyroscopeThemeMotionUpdate:(id)update;
- (void)setUpGyroScropicThemeTracker:(id)tracker;
- (void)avatarTrayViewControllerDidRequestAvatarEditor:(id)editor isEdit:(BOOL)edit;
- (void)avatarTrayViewController:(id)controller didSelectAvatarImage:(id)image;
- (void)avatarTrayViewController:(id)controller didSelectAvatarSticker:(id)sticker isAnimated:(BOOL)animated withQuotedMessage:(id)message;
- (void)avatarTrayViewController:(id)controller didLongPressStickerWithId:(id)id enableReportingOptions:(BOOL)options enableFavoriteOptions:(BOOL)options useContextMenuReportFlow:(BOOL)flow cellContentView:(id)view;
- (id)aggregatedMediaViewer:(id)viewer animationViewForMedia:(id)media;
- (void)aggregatedMediaViewer:(id)viewer didViewMedia:(id)media;
- (id)aggregatedMediaViewerBackgroundViewForSnapshot:(id)snapshot;
- (double)aggregatedMediaViewer:(id)viewer centerOffsetForAnimationView:(id)view;
- (void)aggregatedMediaViewerWillAppear:(id)appear;
- (id)aggregatedMediaViewer:(id)viewer layoutSpecForMedia:(id)media;
- (id)aggregatedMediaViewer:(id)viewer reactionsViewLayoutSpecForMedia:(id)media;
- (id)aggregatedMediaViewer:(id)viewer reactionsViewModelForMedia:(id)media;
- (id)aggregatedMediaViewer:(id)viewer reactionsViewThemeableForMedia:(id)media;
- (id)aggregatedMediaViewer:(id)viewer shadowLayerForMedia:(id)media;
- (void)aggregatedMediaViewer:(id)viewer reactionListForMedia:(id)media completionHandler:(id /* block */)handler;
- (void)reactionUpdatedOnMedia:(id)media isSelected:(BOOL)selected previousReaction:(id)reaction newreaction:(id)newreaction actionSource:(long long)source completionHandler:(id /* block */)handler;
- (void)aggregatedMediaViewer:(id)viewer unsendMediaWithId:(id)id mediaType:(unsigned long long)type authorPk:(id)pk;
- (void)aggregatedMediaViewer:(id)viewer reportMediaWithId:(id)id authorPk:(id)pk;
- (id)aggregatedMediaViewer:(id)viewer supportedMessageActionsForMedia:(id)media;
- (BOOL)aggregatedMediaViewerIsDisappearingModeActive:(id)active;
- (BOOL)aggregatedMediaViewer:(id)viewer wasMediaGeneratedByAI:(id)ai;
- (id)aggregatedMediaViewer:(id)viewer overlayButtonModelForMedia:(id)media;
- (void)aggregatedMediaViewer:(id)viewer didTapOverlayButtonWithModel:(id)model;
- (void)directMessageCellSelectStateDidUpdate:(long long)update;
- (void)directMessageCellSelectedCellDidUpdate;
- (void)traitCollectionDidChange:(id)change;
- (void)_didReceiveLongPress:(id)press;
- (void)_updateTruncationStateIfNeededWithDiffResult:(id)result updateReason:(unsigned long long)reason;
- (void)_applicationDidBecomeActive:(id)active;
- (void)_applicationWillResignActive:(id)active;
- (void)applicationWillEnterForegroundListener;
- (void)_applicationDidEnterBackground:(id)background;
- (BOOL)disableNavigationEvent;
- (id)analyticsExtras;
- (void)newReactionDidArriveWithReaction:(id)reaction for:(id)for;
- (BOOL)menuController:(id)controller canSaveAsFavoriteWithMessageKey:(id)key;
- (BOOL)menuController:(id)controller canUnsaveAsFavoriteWithMessageKey:(id)key;
- (void)didFinishFetchForThreadId:(id)id;
@end

#endif /* IGDirectMessageListViewController_h */
