//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPendingInboxViewController_h
#define IGDirectPendingInboxViewController_h
@import Foundation;

#include "IGViewController.h"
#include "FBCancelable-Protocol.h"
#include "IGDirectBlendedMessageRequestsPagingCoordinator.h"
#include "IGDirectInboxCellSelectAction.h"
#include "IGDirectInboxCellSelectCoordinator.h"
#include "IGDirectInboxCellSwipeCoordinator.h"
#include "IGDirectInboxThreadCellContentTheme.h"
#include "IGDirectMessageRequestsTopBannerSectionController.h"
#include "IGDirectMessageRequestsTopBannerViewModel.h"
#include "IGDirectMoveToFolderController.h"
#include "IGDirectOutgoingUpdateListener-Protocol.h"
#include "IGDirectPendingInboxConfig.h"
#include "IGDirectPendingInboxHeaderCellViewModel.h"
#include "IGDirectPendingInboxHeaderSectionController.h"
#include "IGDirectPendingInboxNUXDelegate-Protocol.h"
#include "IGDirectPendingInboxService.h"
#include "IGDirectPendingInboxStoryRepliesFolderViewModel.h"
#include "IGDirectPendingInboxThreadSortButtonSectionController.h"
#include "IGDirectPendingInboxThreadSortButtonViewModel.h"
#include "IGDirectPendingInboxViewControllerDelegate-Protocol.h"
#include "IGDirectPendingThreadActionHandler.h"
#include "IGDirectThreadReportActionController.h"
#include "IGEmptyFeedViewDelegate-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGListAdapterDelegate-Protocol.h"
#include "IGQPMegaphoneSectionControllerPresenter.h"
#include "IGQPMegaphoneSectionControllerPresenterDelegate-Protocol.h"
#include "IGRefreshControlDelegate-Protocol.h"
#include "IGSubscriptionToken-Protocol.h"
#include "IGTabControlSegment-Protocol.h"
#include "IGTextViewSectionControllerDelegate-Protocol.h"
#include "MDCMessagingDataContext.h"
#include "UIScrollViewDelegate-Protocol.h"
#include "_TtC24IGDirectPendingInboxView19IGDirectThreadsSort.h"
#include "_TtC24IGDirectPendingInboxView24IGDirectPendingInboxView.h"
#include "_TtP24IGDirectPendingInboxView32IGDirectPendingInboxViewDelegate_-Protocol.h"
#include "_TtP24IGDirectPendingInboxView39IGDirectPendingInboxFiltersViewDelegate_-Protocol.h"

@class IGDirectPendingInboxAnalyticsLogger, IGDirectPendingInboxCounters, IGDirectReachabilitySettingsService, IGListAdapter, IGQPInterstitialPresenter, IGQPMegaphone, IGQuickPromotionCoordinator, IGRapidFeedbackController, IGRefreshControl, IGTableLayoutSpec, IGUserDefaults, IGUserSession, NSArray, NSDictionary, NSError, NSString, UIBarButtonItem, _TtC33IGDirectInboxCustomizationFilters37IGDirectInboxCustomizeTopFiltersModel;
@protocol IGDirectNUXManaging;

@interface IGDirectPendingInboxViewController : IGViewController<IGDirectOutgoingUpdateListener, IGEmptyFeedViewDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGRefreshControlDelegate, UIScrollViewDelegate, IGTextViewSectionControllerDelegate, IGQPMegaphoneSectionControllerPresenterDelegate, _TtP24IGDirectPendingInboxView32IGDirectPendingInboxViewDelegate_, _TtP24IGDirectPendingInboxView39IGDirectPendingInboxFiltersViewDelegate_, IGTabControlSegment> {
  /* instance variables */
  IGUserSession *_userSession;
  IGListAdapter *_listAdapter;
  IGRefreshControl *_refreshControl;
  IGDirectPendingInboxService *_service;
  IGDirectPendingInboxAnalyticsLogger *_analyticsLogger;
  IGDirectInboxCellSwipeCoordinator *_swipeCoordinator;
  IGDirectInboxCellSelectCoordinator *_selectCoordinator;
  IGTableLayoutSpec *_tableLayoutSpec;
  IGDirectInboxThreadCellContentTheme *_threadCellContentTheme;
  _TtC24IGDirectPendingInboxView24IGDirectPendingInboxView *_pendingInboxView;
  UIBarButtonItem *_editButton;
  UIBarButtonItem *_cancelButton;
  IGDirectPendingInboxHeaderSectionController *_headerSectionController;
  IGDirectPendingInboxThreadSortButtonSectionController *_threadSortButtonController;
  IGDirectPendingInboxConfig *_pendingInboxConfig;
  BOOL _rankedRequestsEnabled;
  BOOL _initialThreadFetchCompleted;
  BOOL _loading;
  BOOL _loadingMore;
  BOOL _isNavPerfCacheRendered;
  BOOL _isNavPerfServerRendered;
  NSError *_loadingError;
  long long _selectedFolderType;
  _TtC33IGDirectInboxCustomizationFilters37IGDirectInboxCustomizeTopFiltersModel *_topFiltersModel;
  _TtC24IGDirectPendingInboxView19IGDirectThreadsSort *_threadSortType;
  NSArray *_threadFilterTypes;
  IGUserDefaults *_sessionUserDefaults;
  NSObject<IGDirectNUXManaging> *_nuxManager;
  NSObject<IGDirectPendingInboxNUXDelegate> *_nuxDelegate;
  IGQuickPromotionCoordinator *_qpCoordinator;
  IGQPMegaphone *_qpMegaphone;
  IGQPMegaphoneSectionControllerPresenter *_qpMegaphoneSectionControllerPresenter;
  IGQPInterstitialPresenter *_qpInterstitialPresenter;
  IGRapidFeedbackController *_rapidFeedbackController;
  IGDirectThreadReportActionController *_reportActionController;
  IGDirectMoveToFolderController *_moveToFolderController;
  IGDirectInboxCellSelectAction *_deleteAllAction;
  IGDirectInboxCellSelectAction *_acceptAction;
  IGDirectInboxCellSelectAction *_deleteAction;
  IGDirectBlendedMessageRequestsPagingCoordinator *_dataLoader;
  long long _hiddenWordsNewCount;
  IGDirectPendingInboxCounters *_counters;
  NSDictionary *_threadKeyToViewModel;
  BOOL _shownHiddenWordsUpsellDialog;
  NSArray *_mostRecentCacheResponse;
  IGDirectMessageRequestsTopBannerViewModel *_topBannerViewModel;
  IGDirectMessageRequestsTopBannerSectionController *_topBannerSectionController;
  IGDirectPendingInboxThreadSortButtonViewModel *_threadSortButtonViewModel;
  BOOL _hasMoreThreads;
  NSArray *_threadCellViewModelList;
  NSObject<IGSubscriptionToken> *_subscriptionToken;
  IGDirectPendingThreadActionHandler *_threadActionHandler;
  IGDirectReachabilitySettingsService *_reachabilitySettingsService;
  BOOL _readyToShowToast;
  BOOL _willShowToast;
  IGDirectPendingInboxHeaderCellViewModel *_headerCellViewModel;
  unsigned long long _selectedTabIndex;
  long long _storyFolderIndex;
  IGDirectPendingInboxStoryRepliesFolderViewModel *_storyRepliesFolderViewModel;
  MDCMessagingDataContext *_messagingDataContext;
  NSObject<FBCancelable> *_secureHiddenRequestsBadgeObserverCancelable;
  long long _secureHiddenRequestsBadgeCount;
  BOOL _isUserEstablishedCreatorOrAbove;
  BOOL _didVisitThread;
  BOOL _isFaLoggingEnabled;
}

@property (readonly, @dynamic, nonatomic) long long hiddenRequestsBadgeCount;
@property (weak, nonatomic) NSObject<IGDirectPendingInboxViewControllerDelegate> *delegate;
@property (readonly, nonatomic) long long threadsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session tableLayoutSpec:(id)spec threadCellContentTheme:(id)theme pendingInboxConfig:(id)config nuxDelegate:(id)delegate;
- (void)loadView;
- (void)dealloc;
- (id)title;
- (id)userSession;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (long long)preferredTabBarBehavior;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredMinimizableInsets;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint *)offset;
- (void)listAdapter:(id)adapter willDisplayObject:(id)object atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingObject:(id)object atIndex:(long long)index;
- (void)threadReportControllerDidReportAndShouldExitThreadContext:(id)context;
- (void)threadReportControllerDidRestrictAndShouldExitThreadContext:(id)context;
- (void)threadReportControllerDidTapBlockForUser:(id)user threadId:(id)id;
- (void)pendingInboxViewDidTapAnnotatedFooter:(id)footer;
- (void)inboxThreadSectionController:(id)controller didAllowThreadWithKey:(id)key;
- (void)inboxThreadSectionController:(id)controller didTapDeleteThreadWithKey:(id)key;
- (void)inboxThreadSectionController:(id)controller didRequestBlockThreadWithKey:(id)key;
- (void)inboxThreadSectionController:(id)controller didRequestLeaveThreadWithKey:(id)key;
- (long long)inboxThreadSectionControllerSelectedSortOption;
- (void)inboxThreadSectionController:(id)controller didRequestPresentBlockPromptForUser:(id)user threadKey:(id)key threadInfo:(id)info;
- (void)inboxThreadSectionController:(id)controller didEnterThreadWithKey:(id)key;
- (void)inboxHeaderSectionController:(id)controller didTapCell:(id)cell withTabIndex:(unsigned long long)index cellViewModel:(id)model;
- (void)didTapMessageSettings;
- (void)didDismissQpMegaphoneSectionControllerPresenter:(id)presenter;
- (void)directInboxCellSelectStateDidUpdate:(long long)update;
- (void)directInboxCellSelectActionBarVisibilityDidUpdate;
- (void)directInboxCellSelectedCellsDidUpdate;
- (id)actionsForCellSelectCoordinator:(id)coordinator;
- (BOOL)shouldGreyOutButtonForAction:(id)action;
- (void)_acceptTapped:(id)tapped;
- (void)_deleteTapped:(id)tapped;
- (void)_deleteAllTapped:(id)tapped;
- (void)inboxCellSwipeCoordinator:(id)coordinator wantToClosePeviouslyOpenedViewModel:(id)model completion:(id /* block */)completion;
- (void)inboxCellSwipeCoordinator:(id)coordinator didSwipeOpenWithViewModel:(id)model;
- (void)inboxCellSwipeCoordinatorDidBeginPanning:(id)panning;
- (void)emptyViewPrimaryButtonWasTapped:(id)tapped;
- (void)threadSortButtonSectionControllerDidTap:(id)tap cell:(id)cell;
- (void)refreshControl:(id)control didReleaseWithRefreshControlState:(long long)state;
- (void)refreshControlDidEndFinishLoadingAnimation:(id)animation;
- (void)refreshControl:(id)control didUpdateAppearingProgress:(double)progress;
- (void)directMessageOutgoingUpdateDidSucceed:(id)succeed;
- (void)directThreadOutgoingUpdateDidSucceed:(id)succeed;
- (void)directMessageOutgoingUpdate:(id)update didFailWithError:(id)error;
- (void)directThreadOutgoingUpdate:(id)update didFailWithError:(id)error;
- (void)directMoveToFolderController:(id)controller didSelectFolderType:(long long)type forThreadKeys:(id)keys;
- (void)_didTapEditButton;
- (BOOL)prefersNavigationBarDividerHidden;
- (void)_calculateStoryReplyFolderIndex:(id)index withLatestStoryTimestamp:(id)timestamp;
- (void)didTapFilteredThreadsButtonWithSectionController:(id)controller;
- (void)didTapStoryRepliesFolderWithSectionController:(id)controller;
- (void)titleAndSubtitleAndActionSectionController:(id)controller didSelectActionForViewModel:(id)model;
- (void)didSelectTextViewSectionController:(id)controller;
- (void)textViewSectionController:(id)controller didTapOnString:(id)string URL:(id)url;
- (void)textViewSectionController:(id)controller didLongTapOnString:(id)string URL:(id)url;
- (void)textViewSectionController:(id)controller didTapOnNonLinkedString:(id)string touchEvent:(unsigned long long)event;
- (void)inboxThreadSectionController:(id)controller didTapCell:(id)cell;
- (void)inboxThreadSectionController:(id)controller didTapDisplayOldestVisualMessageForThreadKey:(id)key autoLoopingMode:(unsigned long long)mode entryPoint:(long long)point analyticsModule:(id)module sendAttributionFactory:(id /* block */)factory dismissalDelegate:(id)delegate;
- (void)inboxThreadSectionController:(id)controller didTapAlertForReplayableVisualMessages:(id)messages forThreadKey:(id)key analyticsModule:(id)module sendAttributionFactory:(id /* block */)factory;
- (void)pendingInboxFiltersView:(id)view didFinishSelecting:(id)selecting filterTypes:(id)types;
- (void)_saveSelectedSortAndFilter;
- (void)_retrieveSelectedSortAndFilter;
- (id)_availableThreadFilters;
- (id)analyticsModule;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (id)accessibilityLabel;
- (void)toggleEditMode;
- (BOOL)isEditing;
@end

#endif /* IGDirectPendingInboxViewController_h */