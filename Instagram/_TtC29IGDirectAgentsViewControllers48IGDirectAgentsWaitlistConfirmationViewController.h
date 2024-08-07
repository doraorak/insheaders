//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC29IGDirectAgentsViewControllers48IGDirectAgentsWaitlistConfirmationViewController_h
#define _TtC29IGDirectAgentsViewControllers48IGDirectAgentsWaitlistConfirmationViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC29IGDirectAgentsViewControllers48IGDirectAgentsWaitlistConfirmationViewController : IGViewController { // (Swift)
  /* instance variables */
   entryPoint;
   userSession;
   $__lazy_storage_$_headlineView;
   $__lazy_storage_$_bottomButtonsView;
}

/* instance methods */
- (id)initWithEntryPoint:(long long)point userSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didTapGotItButton;
- (void)didTapPreviewCharactersButton;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC29IGDirectAgentsViewControllers48IGDirectAgentsWaitlistConfirmationViewController_h */
