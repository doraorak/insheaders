//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectExternalLinkInfoSheetViewController_h
#define IGDirectExternalLinkInfoSheetViewController_h
@import Foundation;

#include "IGViewController.h"

@interface IGDirectExternalLinkInfoSheetViewController : IGViewController { // (Swift)
  /* instance variables */
   urlString;
   sourceController;
   continueBlock;
   $__lazy_storage_$_titleLabel;
   $__lazy_storage_$_descriptionLabel;
   $__lazy_storage_$_urlTextView;
   $__lazy_storage_$_urlShapeView;
   $__lazy_storage_$_urlContainerView;
   $__lazy_storage_$_bottomButtonsView;
}

/* instance methods */
- (id)initWithUrlString:(id)string analyticsModule:(id)module;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)presentModalSheetWithSourceController:(id)controller launcherSetProvider:(id)provider continueBlock:(id /* block */)block;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* IGDirectExternalLinkInfoSheetViewController_h */
