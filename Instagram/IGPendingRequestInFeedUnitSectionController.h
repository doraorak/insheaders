//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPendingRequestInFeedUnitSectionController_h
#define IGPendingRequestInFeedUnitSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGFollowRequestInFeedModel.h"
#include "IGFriendStatusChangedListener-Protocol.h"
#include "IGHScrollAYMFCellSectionControllerDelegate-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGListAdapterDelegate-Protocol.h"

@class IGFollowRequestLogger, IGListAdapter, IGUserSession, NSMutableArray, NSString;
@protocol IGNetegoImpressionActionProvider;

@interface IGPendingRequestInFeedUnitSectionController : IGListSectionController<IGListAdapterDelegate, IGListAdapterDataSource, IGHScrollAYMFCellSectionControllerDelegate, IGFriendStatusChangedListener> {
  /* instance variables */
  IGUserSession *_userSession;
  NSMutableArray *_followRequests;
  IGListAdapter *_listAdapter;
  IGFollowRequestLogger *_logger;
  NSString *_module;
  NSString *_modelPK;
  NSString *_sessionId;
  NSObject<IGNetegoImpressionActionProvider> *_netegoStrategy;
  IGFollowRequestInFeedModel *_model;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long itemPositionInFeed;

/* instance methods */
- (id)initWithUserSession:(id)session module:(id)module modelPK:(id)pk sessionId:(id)id netegoStrategy:(id)strategy;
- (void)didUpdateToObject:(id)object;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didDeleteFollowRequestFromUser:(id)user;
- (void)pendingRequestInFeedBannerCellDidTapActionButton:(id)button;
- (void)pendingRequestInFeedBannerCellDidTapMoreButton:(id)button;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)listAdapter:(id)adapter willDisplayObject:(id)object atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingObject:(id)object atIndex:(long long)index;
- (void)pendingRequestsInFeedRequestRowSectionControllerDidTapCell:(id)cell;
- (void)pendingRequestsInFeedRequestRowSectionControllerDidConfirmRequest:(id)request;
- (void)aymfSectionController:(id)controller didDismissWithAYMFCellType:(long long)type;
- (void)aymfSectionController:(id)controller wasTappedWithAYMFCellType:(long long)type;
- (void)aymfSectionController:(id)controller followRequestButtonTappedWithAYMFCellType:(long long)type userAction:(long long)action;
- (void)aymfSectionController:(id)controller followButtonTappedWithAYMFCellType:(long long)type userAction:(long long)action;
- (void)aymfSectionController:(id)controller connectToFBTappedWithAYMFCellType:(long long)type;
- (void)aymfSectionControllerDidImportContacts:(id)contacts;
- (void)didScrollProfileUnitAYMFSectionController:(id)controller;
- (void)aymfSectionController:(id)controller closeFriendButtonTappedForUser:(id)user didAdd:(BOOL)add completion:(id /* block */)completion;
- (void)aymfSectionController:(id)controller shopButtonTappedWithAYMFCellType:(long long)type profile:(id)profile;
- (void)aymfSectionController:(id)controller seeAllButtonTapped:(id)tapped;
- (void)aymfSectionController:(id)controller channelPreviewDict:(id)dict previewChannelTapped:(id)tapped;
- (void)aymfSectionController:(id)controller actionButtonDidTapWithAYMFCellType:(long long)type;
- (void)friendStatusChangedForUser:(id)user withUserAction:(long long)action;
@end

#endif /* IGPendingRequestInFeedUnitSectionController_h */