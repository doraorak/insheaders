//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC20IGGalleryAlbumPicker16AlbumPickerTable_h
#define _TtC20IGGalleryAlbumPicker16AlbumPickerTable_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC20IGGalleryAlbumPicker16AlbumPickerTable : IGViewController { // (Swift)
  /* instance variables */
   userSession;
   viewModel;
   suggestedAlbumConsentSheet;
   albumProvider;
   $__lazy_storage_$_tableView;
   viewModelObservationToken;
   dataSource;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (void)didTapCancel;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC20IGGalleryAlbumPicker16AlbumPickerTable_h */