//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRestrictListDataSource_h
#define IGRestrictListDataSource_h
@import Foundation;

#include "IGRestrictListRestrictedUserAdapterDataSource.h"
#include "IGRestrictListSearchAdapterDataSource.h"
#include "IGUserListNetworkDataSourceDelegate-Protocol.h"
#include "IGUserListSectionControllerSelectionDelegate-Protocol.h"
#include "IGUserListSectionControllerTapDelegate-Protocol.h"

@class IGRestrictedUserController, IGUserListLocalDataSource, IGUserListNetworkDataSource, IGUserSession, NSMutableOrderedSet, NSString;
@protocol IGRestrictListDataSourceDelegate;

@interface IGRestrictListDataSource : NSObject<IGUserListNetworkDataSourceDelegate, IGUserListSectionControllerTapDelegate, IGUserListSectionControllerSelectionDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGUserListNetworkDataSource *_searchDataSource;
  IGRestrictedUserController *_restrictedUserController;
  IGUserListLocalDataSource *_localSearchDataSource;
  NSMutableOrderedSet *_selectedUsers;
  NSString *_analyticsModule;
  IGRestrictListRestrictedUserAdapterDataSource *_restrictedUserListAdapterDataSource;
  IGRestrictListSearchAdapterDataSource *_searchListAdapterDataSource;
}

@property (weak, nonatomic) NSObject<IGRestrictListDataSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module;
- (id)_initializeNetworkDataSource;
- (void)dataSourceDidStartLoading:(id)loading;
- (void)dataSourceDidFinishLoading:(id)loading;
- (void)dataSourceDidFailLoad:(id)load;
- (void)restrictedUserControllerDidSyncWithServer:(id)server;
- (void)restrictedUserControllerFailedSync:(id)sync withError:(id)error;
- (void)restrictedUserControllerDidUpdateRestrictedStatusForUser:(id)user user:(id)user;
- (void)userListSectionControllerDidSelectUser:(id)user;
- (void)userListSectionControllerDidDeselectUser:(id)user;
- (void)userListSectionControllerCellWasTapped:(id)tapped;
- (BOOL)userListSectionControllerShouldNavigateToProfileOnTap:(id)tap;
- (id)userListSectionControllerNavigationController:(id)controller;
- (id)sectionControllerForObject:(id)object;
- (BOOL)canShowEmptyView;
@end

#endif /* IGRestrictListDataSource_h */