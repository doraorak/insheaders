//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC14IGMediaKitNUXs41IGMediaKitNUXAboutPortfolioViewController_h
#define _TtC14IGMediaKitNUXs41IGMediaKitNUXAboutPortfolioViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC14IGMediaKitNUXs41IGMediaKitNUXAboutPortfolioViewController : IGViewController { // (Swift)
  /* instance variables */
   defaultPadding;
   setUpPortfolioButtonHandler;
   backCompletionHandler;
   $__lazy_storage_$_backItem;
   $__lazy_storage_$_closeItem;
   $__lazy_storage_$_headlineView;
   $__lazy_storage_$_bulletItemViewModels;
   $__lazy_storage_$_bottomButtonsView;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didTapBack;
- (void)didTapClose;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC14IGMediaKitNUXs41IGMediaKitNUXAboutPortfolioViewController_h */
