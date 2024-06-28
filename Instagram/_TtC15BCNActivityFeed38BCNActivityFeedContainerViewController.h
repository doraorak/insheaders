//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC15BCNActivityFeed38BCNActivityFeedContainerViewController_h
#define _TtC15BCNActivityFeed38BCNActivityFeedContainerViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGScrollViewListener-Protocol.h"

@interface _TtC15BCNActivityFeed38BCNActivityFeedContainerViewController : IGViewController<IGScrollViewListener> { // (Swift)
  /* instance variables */
   pendingActivityTabFilter;
   userSession;
   allActivityDataSource;
   $__lazy_storage_$_privacyListener;
   $__lazy_storage_$_badgeListener;
   suspendScrollawayBehaviour;
   headerCoordinator;
   $__lazy_storage_$_headerView;
   gradientView;
   filterBar;
   viewControllers;
   $__lazy_storage_$_pageViewController;
   $__lazy_storage_$_badgeChangeType;
   $__lazy_storage_$_badgeChangeFetchDelay;
   onBadgeChangeThrottler;
   $__lazy_storage_$_bellIconManager;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarHidden;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC15BCNActivityFeed38BCNActivityFeedContainerViewController_h */