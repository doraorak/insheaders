//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC38IGDirectGeneratedStickerViewController48IGDirectGeneratedStickerDisclosureViewController_h
#define _TtC38IGDirectGeneratedStickerViewController48IGDirectGeneratedStickerDisclosureViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC38IGDirectGeneratedStickerViewController48IGDirectGeneratedStickerDisclosureViewController : IGViewController { // (Swift)
  /* instance variables */
   buttonsView;
   url;
   userSession;
   constants;
   primaryCompletion;
   scrollView;
   $__lazy_storage_$_bulletGroupView;
   $__lazy_storage_$_headlineView;
}

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (BOOL)prefersNavigationBarDividerHidden;
- (void)onDoneTapped;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC38IGDirectGeneratedStickerViewController48IGDirectGeneratedStickerDisclosureViewController_h */
