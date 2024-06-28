//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC24IGSundialChangeDraftName38IGSundialChangeDraftNameViewController_h
#define _TtC24IGSundialChangeDraftName38IGSundialChangeDraftNameViewController_h
@import Foundation;

#include "IGViewController.h"
#include "_TtP24IGSundialChangeDraftName46IGSundialChangeDraftNameViewControllerDelegate_-Protocol.h"

@interface _TtC24IGSundialChangeDraftName38IGSundialChangeDraftNameViewController : IGViewController { // (Swift)
  /* instance variables */
   draftName;
   $__lazy_storage_$_textField;
}

@property (nonatomic, weak) NSObject<_TtP24IGSundialChangeDraftName46IGSundialChangeDraftNameViewControllerDelegate_> *delegate;

/* instance methods */
- (id)initWithDraftName:(id)name;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarDividerHidden;
- (void)didTapDoneButton;
- (void)didTapCancelButton;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC24IGSundialChangeDraftName38IGSundialChangeDraftNameViewController_h */
