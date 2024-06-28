//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInboxThreadSectionController_h
#define IGDirectInboxThreadSectionController_h
@import Foundation;

#include "IGListBindingSingleSectionController.h"
#include "IGDirectInboxThreadCellViewModel.h"
#include "IGDirectMessageReplying-Protocol.h"
#include "IGDirectPseudoBlockDelegate-Protocol.h"
#include "IGDirectReplySundialFeedViewControllerDelegate-Protocol.h"
#include "IGDirectScrollPerfViewUpdateLogger.h"
#include "IGDirectUserBlockAlertPresenter.h"
#include "IGUserBlockingListener-Protocol.h"
#include "THAnimationCoordinatorListener-Protocol.h"

@class IGDirectAUDChecker, IGStoryCreationMediaReplyConfiguration, IGUserSession, NSString, THAnimationCoordinator;
@protocol IGDirectAvatarSelectionDelegate, IGDirectInboxCellSwipeCoordinatorType, IGDirectInboxThreadSectionControllerIGVPController, IGDirectInboxThreadSectionControllerSelectDelegate, IGDirectInboxThreadSectionControllerSwipeDelegate, IGDirectInboxThreadSectionControllerTapDelegate, IGDirectMainInboxThreadSectionControllerDelegate, IGDirectPendingInboxThreadSectionControllerDelegate, IGDirectVaulting;

@interface IGDirectInboxThreadSectionController : IGListBindingSingleSectionController<IGDirectMessageReplying, IGDirectPseudoBlockDelegate, IGUserBlockingListener, THAnimationCoordinatorListener, IGDirectReplySundialFeedViewControllerDelegate> {
  /* instance variables */
  NSString *_module;
  NSObject<IGDirectInboxCellSwipeCoordinatorType> *_swipeCoordinator;
  THAnimationCoordinator *_animationCoordinator;
  IGDirectUserBlockAlertPresenter *_blockAlertPresenter;
  id /* block */ _impressionTrackingBlock;
  NSObject<IGDirectInboxThreadSectionControllerTapDelegate> *_tapDelegate;
  NSObject<IGDirectInboxThreadSectionControllerIGVPController> *_igvpController;
  id /* block */ _entryPointProvider;
  IGStoryCreationMediaReplyConfiguration *_replyConfiguration;
  NSObject<IGDirectVaulting> *_vault;
  IGDirectScrollPerfViewUpdateLogger *_viewUpdateLogger;
  BOOL _isMsysThread;
  long long _entryPoint;
  IGDirectAUDChecker *_audChecker;
  NSObject<IGDirectMainInboxThreadSectionControllerDelegate> *_mainInboxDelegate;
  NSObject<IGDirectPendingInboxThreadSectionControllerDelegate> *_pendingInboxDelegate;
  NSObject<IGDirectInboxThreadSectionControllerSwipeDelegate> *_swipingDelegate;
  NSObject<IGDirectAvatarSelectionDelegate> *_avatarSelectionDelegate;
}

@property (readonly, nonatomic) IGUserSession *userSession;
@property (weak, nonatomic) NSObject<IGDirectInboxThreadSectionControllerSelectDelegate> *selectDelegate;
@property (retain, nonatomic) IGDirectInboxThreadCellViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session swipeCoordinator:(id)coordinator animationCoordinator:(id)coordinator module:(id)module viewPointActionBlock:(id /* block */)block tapDelegate:(id)delegate igvpController:(id)controller vault:(id)vault entryPointProvider:(id /* block */)provider viewUpdateLogger:(id)logger entryPoint:(long long)point;
- (void)dealloc;
- (Class)cellClass;
- (void)configureCell:(id)cell withViewModel:(id)model;
- (struct CGSize { double x0; double x1; })sizeForViewModel:(id)model;
- (void)didSelectItemWithCell:(id)cell;
- (void)didUpdateToObject:(id)object;
- (void)directInboxThreadCell:(id)cell didTapAvatarView:(id)view;
- (void)directInboxThreadCell:(id)cell didTapAccessoryButton:(id)button;
- (void)directInboxThreadCell:(id)cell didTapContextButton:(id)button areActionsOpen:(BOOL)open;
- (void)directInboxThreadCellDidReceiveSingleTap:(id)tap;
- (void)directInboxThreadCellDidReceiveLongPress:(id)press;
- (void)directInboxThreadCell:(id)cell didSwipeOpen:(BOOL)open;
- (void)directInboxThreadCellDidBeginPanning:(id)panning;
- (void)animationCoordinatorDidUpdate:(id)update;
- (void)animationCoordinatorDidReset:(id)reset;
- (void)sendMessageReplyWithText:(id)text quotedMessageId:(id)id actionSource:(long long)source;
- (void)sendMessageReplyWithText:(id)text quotedMessage:(id)message actionSource:(long long)source;
- (void)pseudoBlockAlertBlockActionWasPressed:(id)pressed actionString:(id)string threadInfo:(id)info;
- (void)pseudoBlockAlertMainActionWasPressed:(id)pressed threadInfo:(id)info;
- (void)visualMessageViewerDidTriggerDismissal:(id)dismissal originatingFromForwardNavigation:(BOOL)navigation;
- (void)blockingStatusForUser:(id)user didUpdateWithBlockingStatus:(BOOL)status isMessagingOnlyBlockingStatus:(BOOL)status;
- (void)threadViewControllerDidTapBack;
- (void)sundialFeedReplyBarDidSendReplyWithText:(id)text quotedMessage:(id)message;
- (void)didSelectEmoji:(id)emoji isSelected:(BOOL)selected messageId:(id)id clientContext:(id)context sentDate:(id)date contentType:(id)type;
- (void)didUpdateActiveVideo:(id)video threadMessage:(id)message;
- (void)dismissedSundialViewer;
- (id)messageViewModelForMessageKey:(id)key;
- (void)_hideFromMessagesAction;
- (void)_showInMessagesActionForCell:(id)cell;
- (void)_showPinnedThreadsLimitReachedAlertForShowingChannelInPrimaryForCell:(id)cell;
@end

#endif /* IGDirectInboxThreadSectionController_h */