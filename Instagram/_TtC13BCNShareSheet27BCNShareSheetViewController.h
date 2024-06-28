//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC13BCNShareSheet27BCNShareSheetViewController_h
#define _TtC13BCNShareSheet27BCNShareSheetViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC13BCNShareSheet27BCNShareSheetViewController : IGViewController { // (Swift)
  /* instance variables */
   maxSelectedUsersCount;
   userSession;
   shareSheetSessionID;
   postViewModel;
   mediaCanBeReshared;
   keyboardObserver;
   searchBar;
   $__lazy_storage_$_collectionView;
   threadsCutoverModels;
   selectedThreadViewModels;
   $__lazy_storage_$_listAdapter;
   $__lazy_storage_$_emptyView;
   $__lazy_storage_$_permalinkTask;
   $__lazy_storage_$_searchableDataSource;
   showExternalShareViewController;
   $__lazy_storage_$_externalShareViewController;
   showMessageBar;
   $__lazy_storage_$_messageBar;
   messageBarGradientBackgroundView;
   $__lazy_storage_$_bcnDirectLogger;
   promotionViewModel;
   $__lazy_storage_$_bannerController;
   delegate;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC13BCNShareSheet27BCNShareSheetViewController_h */