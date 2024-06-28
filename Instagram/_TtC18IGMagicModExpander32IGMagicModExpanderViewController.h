//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC18IGMagicModExpander32IGMagicModExpanderViewController_h
#define _TtC18IGMagicModExpander32IGMagicModExpanderViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC18IGMagicModExpander32IGMagicModExpanderViewController : IGViewController { // (Swift)
  /* instance variables */
   delegate;
   $__lazy_storage_$_headerView;
   $__lazy_storage_$_footerView;
   $__lazy_storage_$_footerToolBar;
   $__lazy_storage_$_nuxView;
   $__lazy_storage_$_shimmeringView;
   $__lazy_storage_$_expander;
   expanderRequest;
   $__lazy_storage_$_tapGesture;
   $__lazy_storage_$_longPressGesture;
   $__lazy_storage_$_panGesture;
   $__lazy_storage_$_mediaView;
   $__lazy_storage_$_originalMediaView;
   selectedEditedAsset;
   expandedAssets;
   previousPanGesturePoint;
   previousImageViewFrame;
   editedMediaTransform;
   gestures;
   userSession;
   editingAssets;
   mediaCompositionSize;
   mediaTransform;
   entrypoint;
   clientSessionId;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)handleTapWithGesture:(id)gesture;
- (void)handleLongPressWithGesture:(id)gesture;
- (void)handlePanWithGesture:(id)gesture;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC18IGMagicModExpander32IGMagicModExpanderViewController_h */
