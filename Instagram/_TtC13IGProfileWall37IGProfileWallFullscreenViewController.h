//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC13IGProfileWall37IGProfileWallFullscreenViewController_h
#define _TtC13IGProfileWall37IGProfileWallFullscreenViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC13IGProfileWall37IGProfileWallFullscreenViewController : IGViewController { // (Swift)
  /* instance variables */
   userSession;
   profileUser;
   isSelfProfile;
   dataSource;
   profileService;
   $__lazy_storage_$_navigationBar;
   $__lazy_storage_$_effectView;
   $__lazy_storage_$_gridViewController;
   $__lazy_storage_$_replyController;
   $__lazy_storage_$_screenEdgePanGestureRecognizer;
   presentationState;
   overscrollAnimator;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarHidden;
- (void)screenEdgePanWithPanGestureRecognizer:(id)recognizer;
- (void)didTapDismiss;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC13IGProfileWall37IGProfileWallFullscreenViewController_h */
