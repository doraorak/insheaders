//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC15IGLiveFreeNowUI36IGLiveFreeNowSelectionViewController_h
#define _TtC15IGLiveFreeNowUI36IGLiveFreeNowSelectionViewController_h
@import Foundation;

#include "IGViewController.h"
#include "_TtP15IGLiveFreeNowUI44IGLiveFreeNowSelectionViewControllerDelegate_-Protocol.h"

@interface _TtC15IGLiveFreeNowUI36IGLiveFreeNowSelectionViewController : IGViewController { // (Swift)
  /* instance variables */
   liveIcon;
   descriptionTitleLabel;
   descriptionSubtitleLabel;
   $__lazy_storage_$_timePicker;
}

@property (nonatomic, weak) NSObject<_TtP15IGLiveFreeNowUI44IGLiveFreeNowSelectionViewControllerDelegate_> *delegate;
@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

/* instance methods */
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
@end

#endif /* _TtC15IGLiveFreeNowUI36IGLiveFreeNowSelectionViewController_h */