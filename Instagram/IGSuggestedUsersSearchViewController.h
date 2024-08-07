//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSuggestedUsersSearchViewController_h
#define IGSuggestedUsersSearchViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGScrollViewListener-Protocol.h"
#include "IGSearchBarDelegate-Protocol.h"
#include "IGStoryViewerPresentationController.h"
#include "IGSuggestedUsersSearchListAdapterDataSource.h"

@class IGListAdapter, IGScrollViewAnnouncer, IGSearchAnalyticsLogger, IGSearchBar, IGSearchSession, IGUserSession, NSString, UICollectionView;

@interface IGSuggestedUsersSearchViewController : IGViewController<IGScrollViewListener, IGSearchBarDelegate> {
  /* instance variables */
  NSString *_analyticsModule;
  IGSuggestedUsersSearchListAdapterDataSource *_suggestedUsersSearchDataSource;
  IGScrollViewAnnouncer *_scrollViewAnnouncer;
  NSString *_searchText;
  IGStoryViewerPresentationController *_storyViewerController;
  IGSearchAnalyticsLogger *_searchLogger;
  IGSearchSession *_searchSession;
  IGUserSession *_userSession;
  UICollectionView *_collectionView;
  IGSearchBar *_searchInput;
}

@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAnalyticsModule:(id)module searchBarConfig:(id)config userSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)searchBarShouldBeginEditing:(id)editing;
- (void)searchBar:(id)bar didChangeSearchText:(id)text;
- (void)searchBarDidTapReturnKey:(id)key;
- (void)dataSourceDidFinishLoading:(id)loading;
- (void)dataSourceDidStartLoading:(id)loading;
- (void)dataSourceDidFollowAUser:(id)auser isPrivateUser:(BOOL)user;
- (void)dataSourceDidTapStoryFromReelOwner:(id)owner withReelOwner:(id)owner onStoryEntryView:(id)view;
- (void)scrollViewWillBeginDragging:(id)dragging;
@end

#endif /* IGSuggestedUsersSearchViewController_h */
