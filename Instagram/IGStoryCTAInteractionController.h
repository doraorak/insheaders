//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryCTAInteractionController_h
#define IGStoryCTAInteractionController_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition;
@protocol UIViewController<IGStoryCTAInteractionControllerDelegate;

@interface IGStoryCTAInteractionController : NSObject<UIGestureRecognizerDelegate> {
  /* instance variables */
  BOOL _isInteracting;
  BOOL _shouldCompleteTransition;
  struct CGPoint { double x; double y; } _initialTranslation;
  UIPanGestureRecognizer *_panGestureRecognizer;
  UIViewController<IGStoryCTAInteractionControllerDelegate> *_interactingViewController;
  UIPercentDrivenInteractiveTransition *_transitionController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithInteractingViewController:(id)controller;
- (void)_handlePanGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (BOOL)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
@end

#endif /* IGStoryCTAInteractionController_h */
