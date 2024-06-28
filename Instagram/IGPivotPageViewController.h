//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPivotPageViewController_h
#define IGPivotPageViewController_h
@import Foundation;

#include "IGViewController.h"

@interface IGPivotPageViewController : IGViewController { // (Swift)
  /* instance variables */
   userSession;
   dataSource;
   pageHandler;
   ctaButton;
   $__lazy_storage_$_listAdapter;
   $__lazy_storage_$_collectionView;
   userFlowID;
   $__lazy_storage_$_scrollViewAnnouncer;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (void)didTapCTAButton:(id)ctabutton;
- (long long)preferredTabBarBehavior;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* IGPivotPageViewController_h */