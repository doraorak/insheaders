//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC11BCNSettings37BCNOnlineStatusSettingsViewController_h
#define _TtC11BCNSettings37BCNOnlineStatusSettingsViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC11BCNSettings37BCNOnlineStatusSettingsViewController : IGViewController { // (Swift)
  /* instance variables */
   delegate;
   userSession;
   visiblitySetting;
   disclaimerTitle;
   $__lazy_storage_$_disclaimerView;
   helpCenterArticleUrlString;
   $__lazy_storage_$_listAdapter;
   $__lazy_storage_$_collectionView;
   $__lazy_storage_$_toastPresenter;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC11BCNSettings37BCNOnlineStatusSettingsViewController_h */
