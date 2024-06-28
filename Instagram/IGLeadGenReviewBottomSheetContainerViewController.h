//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeadGenReviewBottomSheetContainerViewController_h
#define IGLeadGenReviewBottomSheetContainerViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGLeadGenReviewBottomSheetViewController.h"
#include "IGPartialModalSheetListener-Protocol.h"

@class NSString;

@interface IGLeadGenReviewBottomSheetContainerViewController : IGViewController<IGGestureHandler, IGPartialModalSheetListener> {
  /* instance variables */
  unsigned long long _partialModalSheetState;
  IGLeadGenReviewBottomSheetViewController *_highIntentReviewViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session stageController:(id)controller;
- (void)_onEditBarButtonTapped;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
@end

#endif /* IGLeadGenReviewBottomSheetContainerViewController_h */
