//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMainAppCreationCustomTransition_h
#define IGMainAppCreationCustomTransition_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGDirectionalPanGestureRecognizer, NSString, UIView;

@interface IGMainAppCreationCustomTransition : NSObject<UIGestureRecognizerDelegate> {
  /* instance variables */
  UIView *_containerView;
  UIView *_presentedView;
  UIView *_transitionView;
  UIView *_dimmingView;
  IGDirectionalPanGestureRecognizer *_dismissPan;
  id /* block */ _shouldStartInteractiveDismissBlock;
  BOOL _isDismissing;
  BOOL _isInteractivePresentation;
  BOOL _isTrackingInteractivePresentation;
  BOOL _dismissOnScrollEnabled;
  id /* block */ _updateBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContainerView:(id)view presentedView:(id)view;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (void)_didPanDismiss:(id)dismiss;
@end

#endif /* IGMainAppCreationCustomTransition_h */
