//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC6BCNBio27BCNBioEditingViewController_h
#define _TtC6BCNBio27BCNBioEditingViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC6BCNBio27BCNBioEditingViewController : IGViewController { // (Swift)
  /* instance variables */
   userSession;
   editorStyle;
   contentInset;
   contentInsetForCentering;
   delegate;
   loggingDelegate;
   profilePictureModel;
   biography;
   linkModel;
   privacy;
   initialBioState;
   importButtonState;
   isPerformingImportAnimation;
   importTask;
   isImportingProfilePicture;
   $__lazy_storage_$_profilePictureUploadManager;
   $__lazy_storage_$_profilePictureController;
   $__lazy_storage_$_collectionView;
   $__lazy_storage_$_dataSource;
   toastPresenter;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC6BCNBio27BCNBioEditingViewController_h */
