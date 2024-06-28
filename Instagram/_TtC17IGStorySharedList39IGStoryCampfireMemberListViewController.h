//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC17IGStorySharedList39IGStoryCampfireMemberListViewController_h
#define _TtC17IGStorySharedList39IGStoryCampfireMemberListViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC17IGStorySharedList39IGStoryCampfireMemberListViewController : IGViewController { // (Swift)
  /* instance variables */
   userSession;
   delegate;
   sharedList;
   userListItemConfigurations;
   users;
   emptyViewState;
   listViewState;
   fromConsumptionEntrypoint;
   loadingView;
   loadingSpinerOverlayViewSpinner;
   loadingSpinnerOverlayView;
   $__lazy_storage_$_sharedListEmptyView;
   $__lazy_storage_$_moreButtonItem;
   $__lazy_storage_$_addUsersButtonItem;
   headerModel;
   $__lazy_storage_$_collectionView;
   $__lazy_storage_$_listAdapter;
}

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC17IGStorySharedList39IGStoryCampfireMemberListViewController_h */
