//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC13IGProfileWall34IGProfileWallOverlayViewController_h
#define _TtC13IGProfileWall34IGProfileWallOverlayViewController_h
@import Foundation;

#include "IGViewController.h"
#include "_TtP38IGProfileWallOverlayViewControllerType38IGProfileWallOverlayViewControllerType_-Protocol.h"

@interface _TtC13IGProfileWall34IGProfileWallOverlayViewController : IGViewController<_TtP38IGProfileWallOverlayViewControllerType38IGProfileWallOverlayViewControllerType_> { // (Swift)
  /* instance variables */
   userSession;
   profileUser;
   isSelfProfile;
   profileNavigationAction;
   profileService;
   $__lazy_storage_$_replyController;
   dataSource;
   $__lazy_storage_$_overlayView;
   shouldShowOverlayView;
   isProfileWallEnabledObserver;
}

@property (nonatomic, readonly) BOOL disableNavigationEvent;

/* instance methods */
- (void)reload;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC13IGProfileWall34IGProfileWallOverlayViewController_h */