//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoverPeopleSearchController_h
#define IGDiscoverPeopleSearchController_h
@import Foundation;

#include "IGDiscoverPeopleSearchListAdapterDataSource.h"
#include "IGScrollViewListener-Protocol.h"
#include "IGSearchBarDelegate-Protocol.h"
#include "IGStoryViewerPresentationController.h"

@class IGFullscreenSearchTransitionController, IGFullscreenSearchViewController, IGListAdapter, IGScrollViewAnnouncer, IGSearchAnalyticsLogger, IGSearchSession, IGUserSession, NSString;

@interface IGDiscoverPeopleSearchController : NSObject<IGSearchBarDelegate, IGScrollViewListener> {
  /* instance variables */
  IGUserSession *_userSession;
  IGFullscreenSearchViewController *_searchViewController;
  IGFullscreenSearchTransitionController *_searchTransitionController;
  BOOL _presentWithTransitionCoordinator;
  NSString *_moduleName;
  IGDiscoverPeopleSearchListAdapterDataSource *_discoverPeopleSearchDataSource;
  IGListAdapter *_listAdapter;
  IGScrollViewAnnouncer *_scrollViewAnnouncer;
  BOOL _isTypeaheadEnabled;
  NSString *_searchText;
  IGStoryViewerPresentationController *_storyViewerController;
  IGSearchAnalyticsLogger *_searchLogger;
  IGSearchSession *_searchSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session moduleName:(id)name isTypeaheadEnabled:(BOOL)enabled;
- (void)_searchCancelTapped:(id)tapped;
- (BOOL)searchBarShouldBeginEditing:(id)editing;
- (void)searchBar:(id)bar didChangeSearchText:(id)text;
- (void)searchBarDidTapReturnKey:(id)key;
- (void)dataSourceDidTapStoryFromReelOwner:(id)owner withReelOwner:(id)owner onStoryEntryView:(id)view;
- (void)scrollViewDidScroll:(id)scroll;
- (void)dataSourceDidFinishLoading:(id)loading;
- (void)dataSourceDidStartLoading:(id)loading;
- (void)dataSourceDidFollowAUser:(id)auser isPrivateUser:(BOOL)user;
@end

#endif /* IGDiscoverPeopleSearchController_h */
