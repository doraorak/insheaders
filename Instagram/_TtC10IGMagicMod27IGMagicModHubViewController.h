//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC10IGMagicMod27IGMagicModHubViewController_h
#define _TtC10IGMagicMod27IGMagicModHubViewController_h
@import Foundation;

#include "_TtC10IGMagicMod24IGMagicModViewController.h"

@interface _TtC10IGMagicMod27IGMagicModHubViewController : _TtC10IGMagicMod24IGMagicModViewController { // (Swift)
  /* instance variables */
   selectedToolViewController;
   tools;
   $__lazy_storage_$_headerView;
   hasAttemptedToShowDisclaimer;
   $__lazy_storage_$_disclaimerView;
}

/* instance methods */
- (id)initWithUserSession:(id)session edits:(id)edits configuration:(id)configuration;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (id)initWithUserSession:(id)session edits:(id)edits configuration:(id)configuration analyticsModule:(id)module;
@end

#endif /* _TtC10IGMagicMod27IGMagicModHubViewController_h */
