//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeadGenReviewBottomSheetViewController_h
#define IGLeadGenReviewBottomSheetViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGLeadGenDisclaimerStageController.h"

@class NSString;

@interface IGLeadGenReviewBottomSheetViewController : IGViewController<IGGestureHandler> {
  /* instance variables */
  IGLeadGenDisclaimerStageController *_stageController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDisclaimerStageController:(id)controller;
- (void)viewWillLayoutSubviews;
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGLeadGenReviewBottomSheetViewController_h */
