//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC17IGStorySharedList39IGStorySharedListCreationViewController_h
#define _TtC17IGStorySharedList39IGStorySharedListCreationViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC17IGStorySharedList39IGStorySharedListCreationViewController : IGViewController { // (Swift)
  /* instance variables */
   userSession;
   delegate;
   shouldShowSharedListListOnDismiss;
   sharedListID;
   colorProviderDelegate;
   colorPickingState;
   textColorPickingControls;
   contentRegion;
   $__lazy_storage_$_keyboardObserver;
   $__lazy_storage_$_eyedropperPresentationView;
   $__lazy_storage_$_nextSharedListCreationButton;
   $__lazy_storage_$_cancelSharedListCreationButton;
   $__lazy_storage_$_contentSubview;
   $__lazy_storage_$_cancelSharedListCreationButtonForBottomSheet;
   $__lazy_storage_$_addUsersBackgroundView;
   $__lazy_storage_$_textField;
   $__lazy_storage_$_textLabel;
}

/* instance methods */
- (id)initWithUserSession:(id)session delegate:(id)delegate colorProviderDelegate:(id)delegate contentRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })region;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC17IGStorySharedList39IGStorySharedListCreationViewController_h */
