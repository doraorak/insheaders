//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC17IGMediaKitPickers43IGMediaKitCameraGalleryPickerViewController_h
#define _TtC17IGMediaKitPickers43IGMediaKitCameraGalleryPickerViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC17IGMediaKitPickers43IGMediaKitCameraGalleryPickerViewController : IGViewController { // (Swift)
  /* instance variables */
   delegate;
   analyticsModule;
   userSession;
   cameraCellEnabled;
   multiSelectEnabled;
   photosEnabled;
   $__lazy_storage_$_limitedAccessHeaderView;
   $__lazy_storage_$_accessDeniedView;
   gridLayoutConfiguration;
   $__lazy_storage_$_collectionView;
   $__lazy_storage_$_galleryDataSource;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC17IGMediaKitPickers43IGMediaKitCameraGalleryPickerViewController_h */
