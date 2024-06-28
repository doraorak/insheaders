//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadViewListAdapterDataSource_h
#define IGDirectThreadViewListAdapterDataSource_h
@import Foundation;

#include "IGDirectAudioMessagePlaybackService.h"
#include "IGDirectMessageViewModelProtocol-Protocol.h"
#include "IGDirectPrivacyCheckThreadViewSubscriber.h"
#include "IGDirectSundialMessageMetaDataProvider-Protocol.h"
#include "IGDirectThreadAnalyticsLogger.h"
#include "IGDirectThreadDetailUserCellDelegate-Protocol.h"
#include "IGDirectThreadListMessageDataSource.h"
#include "IGDirectThreadOutgoingMessagesSortingInfoCache.h"
#include "IGLabelSectionControllerDelegate-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGSubscriptionToken-Protocol.h"

@class BKBloksXMAViewHelper, IGDirectDjangoUIThread, IGDirectLastSeenShhMessageInfo, IGDirectLocalSendSpeedPerformanceLogger, IGDirectOneTraceIDLogger, IGDirectShhModeLearnMoreViewModel, IGDirectTTRCMessageId, IGDirectThreadKey, IGDirectThreadNavigationPerfComponents, IGDirectThreadNullStateViewModel, IGDirectThreadScopedNUXProvider, IGDirectThreadViewControllerInitialParams, IGDirectThreadViewMessagesClientStateManager, IGPerformanceLoadingIndicatorAnnouncer, IGUserSession, MDCDataSubscriptionPipe, NSArray, NSString;
@protocol IGDirectMessageCellSelectStateCoordinating><IGDirectMessageSectionControllerSelectDelegate, IGDirectMessageListDataSourceDelegate;

@interface IGDirectThreadViewListAdapterDataSource : NSObject<IGLabelSectionControllerDelegate, IGDirectSundialMessageMetaDataProvider, IGDirectThreadDetailUserCellDelegate, IGListAdapterDataSource> {
  /* instance variables */
  IGUserSession *_userSession;
  IGDirectThreadKey *_initialThreadKey;
  MDCDataSubscriptionPipe *_threadViewModelInputPipe;
  IGDirectThreadAnalyticsLogger *_analyticsLogger;
  IGDirectAudioMessagePlaybackService *_audioPlaybackService;
  IGDirectThreadOutgoingMessagesSortingInfoCache *_messagesSortingInfoCache;
  IGDirectThreadViewMessagesClientStateManager *_messagesClientStateManager;
  IGDirectThreadScopedNUXProvider *_nuxProvider;
  IGDirectThreadNavigationPerfComponents *_threadNavigationPerfComponents;
  IGDirectTTRCMessageId *_directPushEntryPointMessageId;
  IGDirectThreadKey *_directPushEntryPointThreadKey;
  NSObject<IGSubscriptionToken> *_subscriptionToken;
  NSArray *_viewModels;
  BOOL _currentlyWaitingForPagingResults;
  BOOL _hasPerformedInitialLoad;
  BOOL _initialFetchCompletedIfNecessary;
  IGDirectLastSeenShhMessageInfo *_lastSeenShhMessageInfoForCurrentUserWhenEnteringShhMode;
  IGDirectPrivacyCheckThreadViewSubscriber *_dataCheckSubscriber;
  BKBloksXMAViewHelper *_bloksXMAViewHelper;
  IGDirectThreadViewControllerInitialParams *_initialParams;
  IGDirectDjangoUIThread *_thread;
}

@property (readonly, nonatomic) IGDirectDjangoUIThread *thread_DEPRECATED;
@property (readonly, nonatomic) IGDirectThreadListMessageDataSource *messageDataSource;
@property (weak, nonatomic) NSObject<IGDirectMessageListDataSourceDelegate> *delegate;
@property (readonly, nonatomic) BOOL hasPreviousMessages;
@property (readonly, nonatomic) IGDirectThreadNullStateViewModel *nullStateViewModel;
@property (readonly, nonatomic) IGDirectLocalSendSpeedPerformanceLogger *localSendSpeedLogger;
@property (readonly, nonatomic) IGDirectOneTraceIDLogger *e2eLogger;
@property (readonly, nonatomic) IGDirectShhModeLearnMoreViewModel *shhModeLearnMoreViewModel;
@property (readonly, nonatomic) IGPerformanceLoadingIndicatorAnnouncer *tailLoadingIndicatorAnnouncer;
@property (readonly, nonatomic) NSObject<IGDirectMessageViewModelProtocol> *channelChallengeViewModel;
@property (readonly, nonatomic) NSArray *viewModelsFromPreviousUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGDirectMessageCellSelectStateCoordinating><IGDirectMessageSectionControllerSelectDelegate> *bulkDeleteSelectionCoordinator;

/* instance methods */
- (id)initWithUserSession:(id)session threadKey:(id)key threadViewModelPipe:(id)pipe analyticsLogger:(id)logger audioPlaybackService:(id)service messageDataSource:(id)source messagesSortingInfoCache:(id)cache messagesClientStateManager:(id)manager nuxProvider:(id)provider threadNavigationPerfComponents:(id)components entryPointContext:(id)context bloksXMAViewHelper:(id)helper initialParams:(id)params;
- (id)threadKey;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (id)shareRecipient;
- (void)_logVMUpdateReasonToLocalSendLogger:(unsigned long long)logger vm:(id)vm;
- (void)startMonitoringForDataChanges;
- (void)stopMonitoringForDataChanges;
- (void)loadPreviousMessagesWithTailLoadLogger:(id)logger;
- (void)loadSurroundingMessagesForMessageId:(id)id timestamp:(id)timestamp;
- (void)loadInitialMessages;
- (id)messageViewModelForServerIdentifier:(id)identifier;
- (id)_channelChallengeViewModelFromViewModels;
- (id)messageViewModels;
- (id)mostRecentMessageSenderProfileImage;
- (void)initialFetchCompletedIfNecessary;
- (BOOL)shouldUpdateLastSeenMessage;
- (BOOL)hasMissedDisappearingMessage;
- (id)lastSeenMessageInfo;
- (id)lastSeenMessageMetadataForNewestPublishedMessageWithIsShhMessage:(BOOL)message filter:(long long)filter;
- (id)lastMessageMetadataForVisibleMessageViewModels:(id)models visibleActionLogExpandableTitleViewModels:(id)models isShhMessage:(BOOL)message;
- (BOOL)isMessageUnseenForMessageMetadata:(id)metadata forShhMode:(BOOL)mode;
- (void)willDisplayExpandableMessagesSetWithViewModel:(id)model;
- (void)willDisplayMessageWithMessageViewModel:(id)model;
- (void)didEndDisplayingMessageWithMessageViewModel:(id)model;
- (void)_logFOALSSLoggedEnd:(id)end isUsingNewLogging:(BOOL)logging outgoingStatus:(id)status;
- (void)_showDailyPromptsConsumptionBannerIfNecessaryForVisibleViewModel:(id)model;
- (void)_hideDailyPromptsConsumptionBannerIfNecessaryForVisibleViewModel:(id)model;
- (void)threadDetailUserCellDidTapAdminButtonForUserViewModel:(id)model;
- (void)threadDetailUserCellDidTapRemoveButtonForUserViewModel:(id)model;
- (void)threadDetailUserCellDidTapUserForUserKey:(id)key;
- (void)threadDetailUserCellDidTapAvatarForUserKey:(id)key;
- (void)threadDetailUserCellDidTapMessageButton:(id)button;
- (void)threadDetailUserCellDidTapSeeChannelButton:(id)button completionHandler:(id /* block */)handler;
- (void)didSelectLabelSectionController:(id)controller;
- (void)didTapShhModeReplayMessageLink:(id)link;
- (void)pollMessageSectionController:(id)controller didTapVoteOnPollWithId:(id)id optionsCount:(long long)count messageMetadata:(id)metadata entryPoint:(unsigned long long)point;
- (void)quotedReplyMessageCelldidTapQuotedMessageBubbleViewInCell:(id)cell withQuotedMessageId:(id)id;
- (id)sundialThreadMessages;
@end

#endif /* IGDirectThreadViewListAdapterDataSource_h */