//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC27IGDirectThreadThemeKitSwift36IGDirectThreadThemePreviewController_h
#define _TtC27IGDirectThreadThemeKitSwift36IGDirectThreadThemePreviewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC27IGDirectThreadThemeKitSwift36IGDirectThreadThemePreviewController : IGViewController { // (Swift)
  /* instance variables */
   userSession;
   viewModel;
   threadKey;
   primaryButtonAction;
   theme;
   darkThemeFragment;
   $__lazy_storage_$_contentView;
   $__lazy_storage_$_primaryButton;
   $__lazy_storage_$_secondaryButton;
   $__lazy_storage_$_backgroundImageView;
   $__lazy_storage_$_backgroundVideoView;
   loadingIndicator;
}

/* instance methods */
- (id)initWithUserSession:(id)session viewModel:(id)model threadKey:(id)key primaryButtonAction:(id /* block */)action;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarDividerHidden;
- (void)primaryButtonTapped;
- (void)secondaryButtonTapped;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC27IGDirectThreadThemeKitSwift36IGDirectThreadThemePreviewController_h */