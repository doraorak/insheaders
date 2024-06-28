//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC21IGAppreciationGifting38IGAppreciationBuyAndSendViewController_h
#define _TtC21IGAppreciationGifting38IGAppreciationBuyAndSendViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC21IGAppreciationGifting38IGAppreciationBuyAndSendViewController : IGViewController { // (Swift)
  /* instance variables */
   viewModel;
   $__lazy_storage_$_giftAnimatedImageView;
   $__lazy_storage_$_loadingView;
   $__lazy_storage_$_headlineView;
   $__lazy_storage_$_balanceView;
   $__lazy_storage_$_footnoteView;
   $__lazy_storage_$_footerViewStyle;
   $__lazy_storage_$_footerView;
   bannerView;
   flowService;
   gatingService;
   giftMessage;
   shouldShowBonusesBanner;
}

/* instance methods */
- (id)initWithFlowService:(id)service gatingService:(id)service giftMessage:(id)message;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (BOOL)prefersNavigationBarHidden;
- (void)viewDidLayoutSubviews;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC21IGAppreciationGifting38IGAppreciationBuyAndSendViewController_h */
