//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingActivityFeedViewController_h
#define IGShoppingActivityFeedViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGActivityFeedLogger.h"
#include "IGActivityPreviewingHandler.h"
#include "IGAnalyticsNavigationStateProvider-Protocol.h"
#include "IGFeedItemPreviewingControllerProtocol-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGListAdapterDelegate-Protocol.h"
#include "IGNewsCollectionViewCellSwipeCoordinator.h"
#include "IGShoppingActivityFeedLogger.h"
#include "IGShoppingActivityFeedPerformanceLogger.h"
#include "IGShoppingHomeUserFlowLogger.h"
#include "UIScrollViewDelegate-Protocol.h"

@class IGListAdapter, IGNavigationController, IGRefreshControl, IGSessionTracker, IGUserSession, NSArray, NSString, UICollectionView;

@interface IGShoppingActivityFeedViewController : IGViewController<IGFeedItemPreviewingControllerProtocol, IGListAdapterDataSource, IGListAdapterDelegate, UIScrollViewDelegate, IGAnalyticsNavigationStateProvider> {
  /* instance variables */
  IGUserSession *_userSession;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  IGRefreshControl *_refreshControl;
  IGSessionTracker *_shoppingSessionTracker;
  IGActivityFeedLogger *_activityFeedLogger;
  IGShoppingActivityFeedLogger *_shoppingFeedLogger;
  IGShoppingActivityFeedPerformanceLogger *_perfLogger;
  IGShoppingHomeUserFlowLogger *_userFlowLogger;
  IGActivityPreviewingHandler *_previewingHandler;
  IGNewsCollectionViewCellSwipeCoordinator *_cellSwipeCoordinator;
  NSArray *_emphasizedStoryPKs;
  BOOL _shouldDisplayNUX;
  BOOL _shouldCancelDeleteStory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGNavigationController *navigationController;

/* instance methods */
- (id)initWithUserSession:(id)session perfLogger:(id)logger emphasizedStoryPKs:(id)pks priorAnalyticsModule:(id)module priorSubmodule:(id)submodule shoppingSessionTracker:(id)tracker userFlowLogger:(id)logger;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewWillLayoutSubviews;
- (void)_refreshControlTriggered:(id)triggered;
- (void)_navigateToNotificationSettings:(id)settings;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)listAdapter:(id)adapter willDisplayObject:(id)object atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingObject:(id)object atIndex:(long long)index;
- (BOOL)performViewControllerCommitForPreviewedItem:(id)item;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)shoppingActivityDataController:(id)controller didUpdateStoryGroups:(id)groups withUpdateType:(long long)type;
- (void)shoppingActivityDataController:(id)controller didUpdateActivityFeedFetchState:(id)state;
- (void)shoppingActivityDataController:(id)controller didUpdateBadgeCount:(unsigned long long)count;
- (void)hideStoryForSectionController:(id)controller withStoryItemConfiguration:(id)configuration;
- (void)deleteCommentForSectionController:(id)controller forStory:(id)story entryPoint:(long long)point;
- (void)storySectionController:(id)controller removedFollowerForStory:(id)story;
- (void)storySectionController:(id)controller didRemoveUserFromPostFromStory:(id)story;
- (void)storySectionController:(id)controller removedFollowRequestForStory:(id)story;
- (void)storySectionController:(id)controller didSelectInlineControl:(id)control forStory:(id)story;
- (id)navState;
@end

#endif /* IGShoppingActivityFeedViewController_h */