//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC32IGDirectThreadDetailWelcomeVideo46IGDirectThreadWelcomeVideoDetailViewController_h
#define _TtC32IGDirectThreadDetailWelcomeVideo46IGDirectThreadWelcomeVideoDetailViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC32IGDirectThreadDetailWelcomeVideo46IGDirectThreadWelcomeVideoDetailViewController : IGViewController { // (Swift)
  /* instance variables */
   dataSource;
   threadKey;
   threadDisplayName;
   userSession;
   mediaIsLoaded;
   welcomeVideoMedia;
   mediaIsUploading;
   consistentThreadFbid;
   isBroadcastChannel;
   audienceType;
   $__lazy_storage_$_listAdapter;
   $__lazy_storage_$_collectionView;
   $__lazy_storage_$_coverView;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC32IGDirectThreadDetailWelcomeVideo46IGDirectThreadWelcomeVideoDetailViewController_h */
