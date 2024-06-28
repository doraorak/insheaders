//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialSwipeLeftTransitionManager_h
#define IGSundialSwipeLeftTransitionManager_h
@import Foundation;

#include "IGSundialSwipeLeftTransitionable-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGDirectionalPanGestureRecognizer, IGSwipeLocationInfo, IGTransitionAnimationPanResolver, IGUserSession, NSString, UIView;
@protocol UIViewController<IGSundialSwipeLeftTransitionDelegate;

@interface IGSundialSwipeLeftTransitionManager : NSObject<UIGestureRecognizerDelegate> {
  /* instance variables */
  UIViewController<IGSundialSwipeLeftTransitionDelegate> *_viewController;
  NSObject<IGSundialSwipeLeftTransitionable> *_transitionable;
  BOOL _panLeftThresholdEnabled;
  IGDirectionalPanGestureRecognizer *_panLeftRecognizer;
  IGTransitionAnimationPanResolver *_panResolver;
  IGSwipeLocationInfo *_locationInfo;
  UIView *_touchInterceptorView;
  IGUserSession *_session;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewController:(id)controller session:(id)session;
- (double)currentFractionComplete;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (void)_handlePan:(id)pan;
@end

#endif /* IGSundialSwipeLeftTransitionManager_h */