//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC12IGPotatoFeed26IGPotatoFeedViewController_h
#define _TtC12IGPotatoFeed26IGPotatoFeedViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC12IGPotatoFeed26IGPotatoFeedViewController : IGViewController { // (Swift)
  /* instance variables */
   userSession;
   dataSource;
   initialFocusedMedia;
   $__lazy_storage_$_listAdapter;
   isInZoomTransition;
   $__lazy_storage_$_effectView;
   $__lazy_storage_$_navigationBar;
   $__lazy_storage_$_collectionView;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarHidden;
- (void)viewSafeAreaInsetsDidChange;
- (void)didTapDismiss;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC12IGPotatoFeed26IGPotatoFeedViewController_h */
