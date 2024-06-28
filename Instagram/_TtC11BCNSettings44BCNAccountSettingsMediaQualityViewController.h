//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC11BCNSettings44BCNAccountSettingsMediaQualityViewController_h
#define _TtC11BCNSettings44BCNAccountSettingsMediaQualityViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC11BCNSettings44BCNAccountSettingsMediaQualityViewController : IGViewController { // (Swift)
  /* instance variables */
   _initialHQUploadSetting;
   _initialDisableHDRSetting;
   dataSource;
   hqUploadViewModel;
   disableHDRViewModel;
   $__lazy_storage_$_listAdapter;
   $__lazy_storage_$_collectionView;
   userSession;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (void)updateHQUploadsSettingWithValue:(BOOL)value;
- (void)updateDisableHDRSettingWithValue:(BOOL)value;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC11BCNSettings44BCNAccountSettingsMediaQualityViewController_h */