//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC17IGWearableFilebus38IGWearableFilebusLinkingViewController_h
#define _TtC17IGWearableFilebus38IGWearableFilebusLinkingViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC17IGWearableFilebus38IGWearableFilebusLinkingViewController : IGViewController { // (Swift)
  /* instance variables */
   userSession;
   publicKey;
   deviceId;
   cryptoType;
   protocolVersion;
   centralManager;
   $__lazy_storage_$_permissionView;
   $__lazy_storage_$_connectButton;
   $__lazy_storage_$_learnMoreTextView;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (BOOL)prefersNavigationBarDividerHidden;
- (void)onCancelTapped;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC17IGWearableFilebus38IGWearableFilebusLinkingViewController_h */
