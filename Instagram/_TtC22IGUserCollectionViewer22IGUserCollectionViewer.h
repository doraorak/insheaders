//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC22IGUserCollectionViewer22IGUserCollectionViewer_h
#define _TtC22IGUserCollectionViewer22IGUserCollectionViewer_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC22IGUserCollectionViewer22IGUserCollectionViewer : IGViewController { // (Swift)
  /* instance variables */
   userSession;
   module;
   senderName;
   isSender;
   receiverPk;
   $__lazy_storage_$_listAdapter;
   $__lazy_storage_$_collectionView;
   blurView;
   $__lazy_storage_$_titleLabel;
   subtitleLabel;
   actionButton;
   dataSource;
}

/* instance methods */
- (void)viewDidLoad;
- (BOOL)prefersNavigationBarDividerHidden;
- (void)didTapDismissButton;
- (void)didTapActionButton;
- (void)viewDidLayoutSubviews;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC22IGUserCollectionViewer22IGUserCollectionViewer_h */
