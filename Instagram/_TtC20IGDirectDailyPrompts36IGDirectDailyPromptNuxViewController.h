//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC20IGDirectDailyPrompts36IGDirectDailyPromptNuxViewController_h
#define _TtC20IGDirectDailyPrompts36IGDirectDailyPromptNuxViewController_h
@import Foundation;

#include "IGViewController.h"
#include "_TtP20IGDirectDailyPrompts44IGDirectDailyPromptNuxViewControllerDelegate_-Protocol.h"

@interface _TtC20IGDirectDailyPrompts36IGDirectDailyPromptNuxViewController : IGViewController { // (Swift)
  /* instance variables */
   analyticsModule;
   userSession;
   primaryButton;
   $__lazy_storage_$_collectionView;
   $__lazy_storage_$_listAdapter;
   $__lazy_storage_$_bottomButtonView;
}

@property (nonatomic, weak) NSObject<_TtP20IGDirectDailyPrompts44IGDirectDailyPromptNuxViewControllerDelegate_> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC20IGDirectDailyPrompts36IGDirectDailyPromptNuxViewController_h */
