//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC22IGDirectNotesPromptsUI44IGDirectNotePromptResponseListViewController_h
#define _TtC22IGDirectNotesPromptsUI44IGDirectNotePromptResponseListViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC22IGDirectNotesPromptsUI44IGDirectNotePromptResponseListViewController : IGViewController { // (Swift)
  /* instance variables */
   userSession;
   viewModel;
   delegate;
   containerModule;
   responseIDsToOptimisticallyMarkSeen;
   $__lazy_storage_$_collectionView;
   $__lazy_storage_$_userEducationLabel;
   $__lazy_storage_$_listAdapter;
}

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

/* instance methods */
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (BOOL)prefersNavigationBarHidden;
- (void)applicationDidEnterBackground:(id)background;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC22IGDirectNotesPromptsUI44IGDirectNotePromptResponseListViewController_h */