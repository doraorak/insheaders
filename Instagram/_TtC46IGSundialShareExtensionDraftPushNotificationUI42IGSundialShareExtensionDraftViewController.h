//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC46IGSundialShareExtensionDraftPushNotificationUI42IGSundialShareExtensionDraftViewController_h
#define _TtC46IGSundialShareExtensionDraftPushNotificationUI42IGSundialShareExtensionDraftViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC46IGSundialShareExtensionDraftPushNotificationUI42IGSundialShareExtensionDraftViewController : IGViewController { // (Swift)
  /* instance variables */
   kShareExtensionDraftAnalyticsModule;
   userSession;
   draftId;
   reloadButton;
   reloadCount;
   reloadTimer;
   loadingView;
}

/* instance methods */
- (id)initWithDraftId:(id)id userSession:(id)session;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)prefersNavigationBarHidden;
- (long long)preferredTabBarBehavior;
- (void)reloadButtonTapped:(id)tapped;
- (void)showReloadButtonIfEligible;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC46IGSundialShareExtensionDraftPushNotificationUI42IGSundialShareExtensionDraftViewController_h */
