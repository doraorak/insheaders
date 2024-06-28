//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFindUsersViewController_h
#define IGFindUsersViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGEmptyFeedViewDelegate-Protocol.h"
#include "IGFeedItemPreviewProviding-Protocol.h"
#include "IGFindFriendsHelperDelegate-Protocol.h"
#include "IGFindFriendsHelperProtocol-Protocol.h"
#include "IGFindUsersViewDataSource.h"
#include "IGFindUsersViewDataSourceDelegate-Protocol.h"
#include "IGFollowPeopleLoggerProtocol-Protocol.h"
#include "IGFriendCenterViewControllerDelegate-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGListAdapterDelegate-Protocol.h"
#include "IGScopedListener-Protocol.h"

@class IGContactsUserStore, IGEmptyFeedView, IGListAdapter, IGSearchBarConfig, IGUserSession, IGViewController, NSArray, NSMutableArray, NSString, UICollectionView;
@protocol IGContactPermissionAnnouncer;

@interface IGFindUsersViewController : IGViewController<IGEmptyFeedViewDelegate, IGFindFriendsHelperDelegate, IGFindUsersViewDataSourceDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGFeedItemPreviewProviding, IGScopedListener> {
  /* instance variables */
  IGContactsUserStore *_contactsUserStore;
  IGSearchBarConfig *_searchBarConfig;
  BOOL _isContactImportRowDismissed;
  BOOL _didAuthorize;
  BOOL _displayModal;
  IGEmptyFeedView *_emptyFeedView;
  IGEmptyFeedView *_errorStateView;
  unsigned long long _findUsersType;
  NSObject<IGFindFriendsHelperProtocol> *_helper;
  NSArray *_nearbyBusinessesList;
  NSObject<IGContactPermissionAnnouncer> *_contactPermissionAnnouncer;
  long long _similarAccountSource;
  NSString *_socialContextForConnectContactsEmptyState;
}

@property (readonly, nonatomic) IGUserSession *userSession;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (nonatomic) BOOL loading;
@property (readonly, nonatomic) IGFindUsersViewDataSource *dataSource;
@property (readonly, nonatomic) long long entryPoint;
@property (readonly, nonatomic) NSObject<IGFollowPeopleLoggerProtocol> *logger;
@property (readonly, nonatomic) NSString *statusText;
@property (retain, nonatomic) NSMutableArray *userList;
@property (weak, nonatomic) NSObject<IGFriendCenterViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) IGViewController *containingViewController;
@property (nonatomic) long long friendCenterNavigationTab;

/* instance methods */
- (id)initWithDataSource:(id)source logger:(id)logger findUsersType:(unsigned long long)type statusText:(id)text title:(id)title userSession:(id)session entryPoint:(long long)point;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (void)emptyViewPrimaryButtonWasTapped:(id)tapped;
- (void)findFriendsHelper:(id)helper didAuthorizeWithDataRequest:(id)request;
- (void)findFriendsHelper:(id)helper didFailToAuthorizeWithMessage:(id)message;
- (void)connectButtonWasTapped:(id)tapped;
- (void)findUsersViewDataSourceWillLoadUserList:(id)list;
- (void)findUsersViewDataSource:(id)source didLoadUserList:(id)list andNearbyBusinesses:(id)businesses;
- (void)findUsersViewDataSource:(id)source didLoadThumbnailsForUsers:(id)users;
- (void)findUsersViewDataSource:(id)source didFailWithError:(id)error;
- (void)findUsersViewDataSource:(id)source didLoadMoreUsers:(id)users allUsers:(id)users;
- (void)findUsersViewDataSource:(id)source didLoadAllUserIDs:(id)ids;
- (void)findUsersViewDataSource:(id)source didLoadUserListFromCache:(id)cache;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)featuredUserDismissed:(id)dismissed;
- (void)listAdapter:(id)adapter willDisplayObject:(id)object atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingObject:(id)object atIndex:(long long)index;
- (void)discoverPeopleConnectionSectionControllerAuthorizedWithSuccess:(id)success;
- (void)discoverPeopleConnectionSectionControllerAuthorizedWithFailure:(id)failure;
- (void)discoverPeopleConnectionSectionControllerDidTapDismissButton:(id)button forType:(long long)type;
- (void)discoverPeopleConnectionSectionController:(id)controller didLoginToFacebookWithAccessToken:(id)token;
- (void)discoverPeopleConnectionSectionController:(id)controller didLoginToFacebookWithSDKAccessToken:(id)token;
- (void)discoverPeopleConnectionSectionControllerDidExposeToCALControlGroup:(id)group;
- (void)discoverPeopleConnectionSectionControllerDidEnterSearch:(id)search;
- (void)facebookPermissionAcquired;
- (void)facebookPermissionRemoved;
- (void)contactPermissionAcquired;
- (void)contactPermissionDenied;
- (void)_authorizeAndFetchUsers;
- (id)scrollView;
- (id)cellForPreviewAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)objectForPreviewAtPoint:(struct CGPoint { double x0; double x1; })point;
- (BOOL)_shouldInsertContactImportRowAboveFeaturedUsers;
- (id)_contactImportRowConfiguration;
- (id)_contactImportActionTitleForAuthorizationStatus;
- (id)analyticsModule;
- (BOOL)isLoading;
@end

#endif /* IGFindUsersViewController_h */
