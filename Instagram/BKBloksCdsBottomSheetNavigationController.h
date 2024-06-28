//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksCdsBottomSheetNavigationController_h
#define BKBloksCdsBottomSheetNavigationController_h
@import Foundation;

#include "UINavigationController.h"
#include "BKBloksCdsBottomSheetNavigationTransitionCoordinator.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UINavigationControllerDelegate-Protocol.h"

@class NSString, UIScreenEdgePanGestureRecognizer;
@protocol BKBloksCdsBottomSheetNavigationControllerDelegate;

@interface BKBloksCdsBottomSheetNavigationController : UINavigationController<UIGestureRecognizerDelegate, UINavigationControllerDelegate> {
  /* instance variables */
  BKBloksCdsBottomSheetNavigationTransitionCoordinator *_transitionCoordinator;
  UIScreenEdgePanGestureRecognizer *_backSwipeGestureRecognizer;
  BOOL _isSwiping;
  NSObject<BKBloksCdsBottomSheetNavigationControllerDelegate> *_cdsDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRootViewController:(id)controller;
- (void)handleSwipe:(id)swipe;
- (BOOL)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (id)navigationController:(id)controller animationControllerForOperation:(long long)operation fromViewController:(id)controller toViewController:(id)controller;
- (id)navigationController:(id)controller interactionControllerForAnimationController:(id)controller;
- (void)navigationController:(id)controller willShowViewController:(id)controller animated:(BOOL)animated;
- (void)navigationController:(id)controller didShowViewController:(id)controller animated:(BOOL)animated;
@end

#endif /* BKBloksCdsBottomSheetNavigationController_h */