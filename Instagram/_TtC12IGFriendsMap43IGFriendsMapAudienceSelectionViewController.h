//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC12IGFriendsMap43IGFriendsMapAudienceSelectionViewController_h
#define _TtC12IGFriendsMap43IGFriendsMapAudienceSelectionViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC12IGFriendsMap43IGFriendsMapAudienceSelectionViewController : IGViewController { // (Swift)
  /* instance variables */
   userSession;
   audienceType;
   delegate;
   keyboardObserver;
   isLoading;
   isSearching;
   savedUsers;
   suggestedUsers;
   usersAddedFromSearch;
   selectedUsers;
   $__lazy_storage_$_navigationBar;
   $__lazy_storage_$_searchBar;
   $__lazy_storage_$_searchDataSource;
   $__lazy_storage_$_collectionView;
   $__lazy_storage_$_listAdapter;
   $__lazy_storage_$_footerButton;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (void)dismissViewController;
- (void)didTapCancelButton;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC12IGFriendsMap43IGFriendsMapAudienceSelectionViewController_h */