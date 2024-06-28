//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRestrictListViewController_h
#define IGRestrictListViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGRestrictListDataSource.h"
#include "IGRestrictListHeaderView.h"
#include "IGSearchBarDelegate-Protocol.h"

@class IGBasicListViewController, IGFullscreenSearchTransitionController, IGFullscreenSearchViewController, IGSearchBar, IGUserSession, NSString;

@interface IGRestrictListViewController : IGViewController<IGSearchBarDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGRestrictListHeaderView *_headerView;
  IGSearchBar *_searchBar;
  IGFullscreenSearchViewController *_searchViewController;
  IGFullscreenSearchTransitionController *_searchTransitionController;
  IGBasicListViewController *_restrictListViewController;
  IGRestrictListDataSource *_dataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session dataSource:(id)source;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (long long)preferredTabBarBehavior;
- (void)_dismissSearch;
- (BOOL)searchBarShouldBeginEditing:(id)editing;
- (void)searchBar:(id)bar didChangeSearchText:(id)text;
- (void)searchBarDidTapReturnKey:(id)key;
- (void)restrictListHeaderDidTapOnLearnMoreWithView:(id)view;
- (void)dataSourceDidFailLoad:(id)load withErrorMessage:(id)message;
- (void)dataSourceDidFailRestrictStatusUpdate:(id)update withErrorMessage:(id)message;
- (void)dataSourceDidUpdateSearchUsersList:(id)list;
- (void)dataSourceDidUpdateRestrictedUsersList:(id)list;
- (void)dataSourceDidUpdateRestrictedStatusForUser:(id)user user:(id)user;
@end

#endif /* IGRestrictListViewController_h */
