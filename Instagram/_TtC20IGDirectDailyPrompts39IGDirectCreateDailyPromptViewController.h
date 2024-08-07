//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC20IGDirectDailyPrompts39IGDirectCreateDailyPromptViewController_h
#define _TtC20IGDirectDailyPrompts39IGDirectCreateDailyPromptViewController_h
@import Foundation;

#include "IGViewController.h"
#include "_TtP20IGDirectDailyPrompts47IGDirectCreateDailyPromptViewControllerDelegate_-Protocol.h"

@interface _TtC20IGDirectDailyPrompts39IGDirectCreateDailyPromptViewController : IGViewController { // (Swift)
  /* instance variables */
   userSession;
   threadId;
   blurredBackgroundView;
   promptSuggestions;
   $__lazy_storage_$_promptCardView;
   $__lazy_storage_$_footerLabel;
   $__lazy_storage_$_suggestionsCollectionView;
   $__lazy_storage_$_timerLabel;
   timerLabelSize;
}

@property (nonatomic, weak) NSObject<_TtP20IGDirectDailyPrompts47IGDirectCreateDailyPromptViewControllerDelegate_> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session threadId:(id)id;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarDividerHidden;
- (void)didTapCloseButton;
- (void)didTapSendButton;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC20IGDirectDailyPrompts39IGDirectCreateDailyPromptViewController_h */
