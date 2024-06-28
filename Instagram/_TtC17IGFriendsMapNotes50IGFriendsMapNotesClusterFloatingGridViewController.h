//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC17IGFriendsMapNotes50IGFriendsMapNotesClusterFloatingGridViewController_h
#define _TtC17IGFriendsMapNotes50IGFriendsMapNotesClusterFloatingGridViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC17IGFriendsMapNotes50IGFriendsMapNotesClusterFloatingGridViewController : IGViewController { // (Swift)
  /* instance variables */
   cellReuseIdentifier;
   $__lazy_storage_$_blurView;
   $__lazy_storage_$_gridView;
   $__lazy_storage_$_closeButton;
   $__lazy_storage_$_locationTitleView;
   userSession;
   annotations;
   annotationDelegate;
   presentingViewDelegate;
}

/* instance methods */
- (void)loadView;
- (void)viewDidLoad;
- (BOOL)prefersNavigationBarHidden;
- (void)didTapDismiss;
- (void)didLongPressCell:(id)cell;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC17IGFriendsMapNotes50IGFriendsMapNotesClusterFloatingGridViewController_h */