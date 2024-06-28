//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadDetailViewControllerDEPRECATED_h
#define IGDirectThreadDetailViewControllerDEPRECATED_h
@import Foundation;

#include "IGViewController.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGBugReportEventLogger.h"
#include "IGBugReportPresenter-Protocol.h"
#include "IGBugReportPresenterDelegate-Protocol.h"
#include "IGBugReportingMenuDelegate-Protocol.h"
#include "IGButtonSectionControllerDelegate-Protocol.h"
#include "IGDirectAddMemberControlsViewControllerDelegate-Protocol.h"
#include "IGDirectAggregatedMediaCache-Protocol.h"
#include "IGDirectAggregatedMediaCacheListener-Protocol.h"
#include "IGDirectBusinessAggregatedOrdersCacheListener-Protocol.h"
#include "IGDirectChangeGroupIconActionManager.h"
#include "IGDirectCreatorSubscriberGroupThreadAddPeopleDelegate-Protocol.h"
#include "IGDirectOutgoingUpdateListener-Protocol.h"
#include "IGDirectOutgoingUpdateSending-Protocol.h"
#include "IGDirectParticipantRequestsService.h"
#include "IGDirectThreadAddPeopleDelegate-Protocol.h"
#include "IGDirectThreadCreationDelegate-Protocol.h"
#include "IGDirectThreadCreationViewControllerDelegate-Protocol.h"
#include "IGDirectThreadDetailAnalyticsLogger.h"
#include "IGDirectThreadDetailBlockUserActionHelper.h"
#include "IGDirectThreadDetailBlockUserActionHelperDelegate-Protocol.h"
#include "IGDirectThreadDetailMoveToFolderSectionControllerDelegate-Protocol.h"
#include "IGDirectThreadDetailUserCellDelegate-Protocol.h"
#include "IGDirectThreadDetailViewConfig.h"
#include "IGDirectThreadDetailViewControllerDelegate-Protocol.h"
#include "IGDirectThreadDetailViewControllerProtocol-Protocol.h"
#include "IGDirectThreadParticipantRequestAnalyticsLogging.h"
#include "IGDirectThreadParticipantsRequestsController.h"
#include "IGDirectThreadParticipantsRequestsViewControllerDelegate-Protocol.h"
#include "IGDirectThreadReportActionController.h"
#include "IGImageTitleSectionControllerDelegate-Protocol.h"
#include "IGLabelSectionControllerDelegate-Protocol.h"
#include "IGSavedMediaCollectionsListListener-Protocol.h"
#include "IGStoryViewerPresenting-Protocol.h"
#include "IGStoryViewerSectionControllerViewerDelegate-Protocol.h"
#include "IGSupportService.h"
#include "IGTextRowSectionControllerDelegate-Protocol.h"
#include "IGTitleAndActionSectionControllerDelegate-Protocol.h"
#include "IGTitleAndToggleCellDelegate-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "_TtP24IGDirectDetailPrivacyKit50IGDirectThreadDetailsPrivacyViewControllerDelegate_-Protocol.h"

@class IGDirectInboxBusinessMessagingHighVolumeStateLogger, IGDirectThreadDetailsViewModel, IGListAdapter, IGTooltipView, IGUserSession, NSArray, NSString, UICollectionView;
@protocol IGDirectCameraReplying><IGDirectMessageReplying, IGDirectThreadDetailsDataSourceProtocol;

@interface IGDirectThreadDetailViewControllerDEPRECATED : IGViewController<IGDirectAggregatedMediaCacheListener, IGDirectOutgoingUpdateListener, IGDirectThreadAddPeopleDelegate, IGDirectThreadCreationDelegate, IGDirectThreadCreationViewControllerDelegate, IGDirectThreadParticipantsRequestsViewControllerDelegate, IGLabelSectionControllerDelegate, IGTitleAndActionSectionControllerDelegate, IGTitleAndToggleCellDelegate, IGDirectBusinessAggregatedOrdersCacheListener, IGBugReportingMenuDelegate, IGBugReportPresenterDelegate, UICollectionViewDelegate, IGDirectThreadDetailBlockUserActionHelperDelegate, IGImageTitleSectionControllerDelegate, IGDirectCreatorSubscriberGroupThreadAddPeopleDelegate, _TtP24IGDirectDetailPrivacyKit50IGDirectThreadDetailsPrivacyViewControllerDelegate_, IGSavedMediaCollectionsListListener, IGDirectAddMemberControlsViewControllerDelegate, IGDirectThreadDetailViewControllerProtocol, IGDirectThreadDetailUserCellDelegate, IGDirectThreadDetailMoveToFolderSectionControllerDelegate, IGStoryViewerSectionControllerViewerDelegate, IGButtonSectionControllerDelegate, IGTextRowSectionControllerDelegate> {
  /* instance variables */
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  NSObject<IGDirectThreadDetailsDataSourceProtocol> *_dataSource;
  NSObject<IGDirectOutgoingUpdateSending> *_directOutgoingUpdateSender;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  IGDirectThreadDetailViewConfig *_config;
  IGUserSession *_userSession;
  IGDirectThreadReportActionController *_reportActionController;
  NSObject<IGUserLauncherSetProviding> *_featureSetProvider;
  NSObject<IGStoryViewerPresenting> *_storyPresentationController;
  IGDirectParticipantRequestsService *_participantRequestsService;
  IGDirectThreadParticipantsRequestsController *_participantsRequestsController;
  IGDirectThreadDetailAnalyticsLogger *_threadDetailAnalyticsLogger;
  IGDirectThreadParticipantRequestAnalyticsLogging *_participantRequestsLogger;
  NSObject<IGDirectAggregatedMediaCache> *_directAggregatedMediaCache;
  IGDirectThreadDetailsViewModel *_threadDetailsViewModel;
  BOOL _loggedInteropChatThemesUpsellImpression;
  IGDirectChangeGroupIconActionManager *_changeGroupIconActionManager;
  BOOL _loggedAggregatedOrdersImpression;
  IGBugReportEventLogger *_bugReportLogger;
  NSObject<IGBugReportPresenter> *_bugReportPresenter;
  IGSupportService *_supportService;
  IGTooltipView *_translationTooltipView;
  IGDirectInboxBusinessMessagingHighVolumeStateLogger *_businessMessagingHighVolumeStateLogger;
  IGDirectThreadDetailBlockUserActionHelper *_blockActionHelper;
  NSArray *_savedMediaCollections;
}

@property (weak, nonatomic) NSObject<IGDirectThreadDetailViewControllerDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGDirectCameraReplying><IGDirectMessageReplying> *replyHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfig:(id)config dataSource:(id)source participantRequestsService:(id)service participantsRequestsController:(id)controller directOutgoingUpdateSender:(id)sender analyticsLogger:(id)logger featureSetProvider:(id)provider userSession:(id)session directAggregatedMediaCache:(id)cache;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)endEditing;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)dealloc;
- (void)aggregatedMediaCacheDidUpdateForThreadKey:(id)key;
- (void)titleAndToggleCell:(id)cell didSwitchValueTo:(BOOL)to;
- (void)titleAndToggleCell:(id)cell didTapOnString:(id)string URL:(id)url;
- (void)titleAndActionSectionController:(id)controller didSelectActionForViewModel:(id)model;
- (unsigned long long)traitForTitleAndActionTextLabel:(id)label;
- (void)threadDetailUserCellDidTapAdminButtonForUserViewModel:(id)model;
- (void)threadDetailUserCellDidTapRemoveButtonForUserViewModel:(id)model;
- (void)threadDetailUserCellDidTapAvatarForUserKey:(id)key;
- (void)threadDetailUserCellDidTapUserForUserKey:(id)key;
- (void)threadDetailUserCellDidTapMessageButton:(id)button;
- (void)threadDetailUserCellDidTapSeeChannelButton:(id)button completionHandler:(id /* block */)handler;
- (void)threadCreationViewController:(id)controller didFailAddUserWithErrorMessage:(id)message;
- (void)threadCreationViewController:(id)controller didFailCreationWithErrorMessage:(id)message;
- (void)threadCreationViewControllerDidCancel:(id)cancel;
- (void)threadCreationViewControllerDidTapDone:(id)done entryPoint:(unsigned long long)point searchSessionId:(id)id selectedUsers:(id)users groupName:(id)name;
- (void)threadCreationViewControllerDidAddUsers:(id)users;
- (void)subscriberMessagingViewControllerDidAddUsers;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (void)threadDetailMoveToFolderSectionControllerDidMoveToFolderType:(long long)type;
- (void)directMessageOutgoingUpdateDidSucceed:(id)succeed;
- (void)directThreadOutgoingUpdateDidSucceed:(id)succeed;
- (void)directMessageOutgoingUpdate:(id)update didFailWithError:(id)error;
- (void)directThreadOutgoingUpdate:(id)update didFailWithError:(id)error;
- (void)didSelectLabelSectionController:(id)controller;
- (void)threadDetailsDataSourceDidUpdateWithThreadDetailsViewModel:(id)model;
- (void)businessAggregatedOrdersCacheDidUpdateForThreadId:(id)id;
- (void)groupIconSectionControllerDidChangeIconWithImage:(id)image fromOption:(long long)option;
- (void)groupIconSectionControllerDidRemoveGroupPhotoIcon;
- (void)groupNameSectionControllerDidBeginEditing:(id)editing groupNameIsEmpty:(BOOL)empty;
- (void)groupNameSectionControllerDidChange:(id)change groupNameIsEmpty:(BOOL)empty;
- (void)groupNameSectionControllerDidEndEditing:(id)editing didUpdateToNewName:(BOOL)name;
- (void)didUpdateRequestedParticipants;
- (void)didReachMaxParticipants:(long long)participants remainingUsersSelected:(long long)selected;
- (void)didTapButtonInSectionController:(id)controller button:(id)button;
- (void)storyViewerSectionController:(id)controller didTapViewerSource:(id)source;
- (void)storyViewerSectionController:(id)controller didTapMoreButtonInViewerCell:(id)cell;
- (void)storyViewerSectionController:(id)controller didTapCheckmarkButtonInViewerCell:(id)cell;
- (void)storyViewerSectionController:(id)controller didTapAddButtonInViewerCell:(id)cell;
- (void)storyViewerSectionController:(id)controller didTapProductThumbnailInViewerCell:(id)cell;
- (void)storyViewerSectionController:(id)controller didHideViewerSource:(id)source;
- (void)storyViewerSectionController:(id)controller presentStoryForReel:(id)reel media:(id)media fromView:(id)view profilePictureView:(id)view;
- (void)storyViewerSectionController:(id)controller willDisplayViewerSource:(id)source position:(long long)position;
- (void)storyViewerSectionController:(id)controller didMarkAsNotSpamViewerSource:(id)source;
- (void)storyViewerSectionController:(id)controller didTapHeartButtonInViewerCell:(id)cell;
- (void)storyViewerSectionController:(id)controller didTapViewCommentLikes:(id)likes;
- (void)storyViewerSectionController:(id)controller didTapStoryComment:(id)comment;
- (void)storyViewerSectionController:(id)controller didDeleteStoryComment:(id)comment;
- (void)participantRequestsViewControllerWillDismiss:(id)dismiss;
- (void)participantRequestsViewControllerDidNavigateToThread:(id)thread;
- (void)participantRequestsApprovedInViewController:(id)controller;
- (void)businessOrderSectionControllerDidRecieveTap:(id)tap withOrderId:(id)id;
- (id)threadId;
- (long long)preferredTabBarBehavior;
- (void)threadCreationViewController:(id)controller didCreateThread:(id)thread entryPoint:(unsigned long long)point context:(id)context;
- (void)bugReportingMenuDidTapReportABug:(id)abug;
- (void)bugReportingMenuDidTapReportAbuseOrSpam:(id)spam;
- (void)bugReportingMenuDidCancel:(id)cancel;
- (id)bugReportPresentingViewController;
- (void)bugReportDidFinishWithStatus:(BOOL)status;
- (void)bugReportDidBegin;
- (void)blockUserActionHelperBlockUserWithoutChaining;
- (void)blockUserActionHelperDidDeleteThreadInChainedAction;
- (void)blockUserActionHelperDidDismiss;
- (void)blockUserActionHelperDidPerformBlock;
- (void)blockUserActionHelperDidPerformUnblock;
- (void)imageTitleSectionController:(id)controller didSelectActionForViewModel:(id)model;
- (void)textRowSectionControllerDidTapRowWithSectionController:(id)controller viewModel:(id)model;
- (void)imageTitleSectionController:(id)controller didTapOnString:(id)string URL:(id)url;
- (void)threadDetailViewControllerDidDismissThread;
- (void)threadDetailViewControllerDidCreateNewXACThread:(id)xacthread thread:(id)thread;
- (void)threadDetailViewControllerDidLeaveThread;
- (void)threadDetailViewControllerDidEndThread;
- (void)savedMediaCollectionsDidLoadCollections:(id)collections;
- (void)savedMediaCollectionsDidFailToLoad:(id)load;
- (void)addMemberControlsViewControllerDidToggleAdminOnlyOption:(id)option isAdminOnlySelected:(BOOL)selected;
- (id)partialModalSheetViewControllerBackgroundConfig:(id)config;
- (id)partialModalSheetViewControllerDraggingIndicatorBackgroundColor:(id)color;
@end

#endif /* IGDirectThreadDetailViewControllerDEPRECATED_h */