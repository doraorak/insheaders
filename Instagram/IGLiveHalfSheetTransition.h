//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveHalfSheetTransition_h
#define IGLiveHalfSheetTransition_h
@import Foundation;

#include "IGLiveSheetTransitionStyle.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface IGLiveHalfSheetTransition : NSObject<UIViewControllerTransitioningDelegate> {
  /* instance variables */
  BOOL _hasDimmedBackground;
  IGLiveSheetTransitionStyle *_presentTransitionStyle;
  IGLiveSheetTransitionStyle *_dismissTransitionStyle;
  NSMutableDictionary *_styleToAnimatorDict;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPresentTransitionStyle:(id)style dismissTransitionStyle:(id)style hasDimmedBackground:(BOOL)background;
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (id)presentationControllerForPresentedViewController:(id)controller presentingViewController:(id)controller sourceViewController:(id)controller;
@end

#endif /* IGLiveHalfSheetTransition_h */
