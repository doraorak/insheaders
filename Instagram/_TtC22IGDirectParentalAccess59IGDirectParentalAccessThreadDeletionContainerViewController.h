//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC22IGDirectParentalAccess59IGDirectParentalAccessThreadDeletionContainerViewController_h
#define _TtC22IGDirectParentalAccess59IGDirectParentalAccessThreadDeletionContainerViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC22IGDirectParentalAccess59IGDirectParentalAccessThreadDeletionContainerViewController : IGViewController { // (Swift)
  /* instance variables */
   userSession;
   $__lazy_storage_$_contentViewController;
   $__lazy_storage_$_pageViewController;
   $__lazy_storage_$_inboxViewController;
   $__lazy_storage_$_channelViewController;
   $__lazy_storage_$_pendingViewController;
   $__lazy_storage_$_genericViewController;
   $__lazy_storage_$_headerView;
}

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didTapDoneButton;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC22IGDirectParentalAccess59IGDirectParentalAccessThreadDeletionContainerViewController_h */
