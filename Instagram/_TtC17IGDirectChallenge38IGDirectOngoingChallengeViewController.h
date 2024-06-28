//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC17IGDirectChallenge38IGDirectOngoingChallengeViewController_h
#define _TtC17IGDirectChallenge38IGDirectOngoingChallengeViewController_h
@import Foundation;

#include "IGViewController.h"
#include "_TtP17IGDirectChallenge46IGDirectOngoingChallengeViewControllerDelegate_-Protocol.h"

@interface _TtC17IGDirectChallenge38IGDirectOngoingChallengeViewController : IGViewController { // (Swift)
  /* instance variables */
   blurredBackgroundView;
   descriptionTextView;
}

@property (nonatomic, weak) NSObject<_TtP17IGDirectChallenge46IGDirectOngoingChallengeViewControllerDelegate_> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (void)didTapCloseButton;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC17IGDirectChallenge38IGDirectOngoingChallengeViewController_h */