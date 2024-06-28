//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC15IGFriendingList29IGFriendingListViewController_h
#define _TtC15IGFriendingList29IGFriendingListViewController_h
@import Foundation;

#include "IGViewController.h"
#include "_TtP15IGFriendingList37IGFriendingListViewControllerDelegate_-Protocol.h"

@interface _TtC15IGFriendingList29IGFriendingListViewController : IGViewController { // (Swift)
  /* instance variables */
   dataSource;
   userSession;
   module;
   model;
   keyboardObserver;
   currentBottomStickyViewMaxY;
   mobileConfigManager;
   didFinishFetchRecommendedAccounts;
   shouldEnableShimmerInQuickFriending;
   $__lazy_storage_$_listAdapter;
   $__lazy_storage_$_collectionView;
   scrollViewAnnouncer;
   searchView;
   $__lazy_storage_$_shimmerForSearchView;
   $__lazy_storage_$_shimmerForSearchContainerView;
   contentOffsetCache;
   $__lazy_storage_$_toastPresenter;
   toastIdentifier;
}

@property (nonatomic, weak) NSObject<_TtP15IGFriendingList37IGFriendingListViewControllerDelegate_> *delegate;

/* instance methods */
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (BOOL)prefersNavigationBarDividerHidden;
- (void)didTapDismissButton;
- (void)viewDidLayoutSubviews;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC15IGFriendingList29IGFriendingListViewController_h */