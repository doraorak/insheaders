//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC17IGDirectChallenge37IGDirectCreateChallengeViewController_h
#define _TtC17IGDirectChallenge37IGDirectCreateChallengeViewController_h
@import Foundation;

#include "IGViewController.h"
#include "_TtP17IGDirectChallenge45IGDirectCreateChallengeViewControllerDelegate_-Protocol.h"

@interface _TtC17IGDirectChallenge37IGDirectCreateChallengeViewController : IGViewController { // (Swift)
  /* instance variables */
   userSession;
   blurredBackgroundView;
   $__lazy_storage_$_listAdapter;
   collectionView;
   viewModelGenerator;
   input;
}

@property (nonatomic, weak) NSObject<_TtP17IGDirectChallenge45IGDirectCreateChallengeViewControllerDelegate_> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (void)setUserInteractionsEnabled:(BOOL)enabled;
- (void)didTapCloseButton;
- (void)didTapStartButton;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC17IGDirectChallenge37IGDirectCreateChallengeViewController_h */