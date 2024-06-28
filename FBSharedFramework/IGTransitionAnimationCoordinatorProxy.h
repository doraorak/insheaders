//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTransitionAnimationCoordinatorProxy_h
#define IGTransitionAnimationCoordinatorProxy_h
@import Foundation;

#include "NSProxy.h"

@protocol IGTransitionAnimationCoordinatorDelegate, UIViewControllerTransitionCoordinator;

@interface IGTransitionAnimationCoordinatorProxy : NSProxy {
  /* instance variables */
  NSObject<UIViewControllerTransitionCoordinator> *_transitionCoordinator;
  NSObject<IGTransitionAnimationCoordinatorDelegate> *_animationDelegate;
}

/* instance methods */
- (id)initWithTransitionCoordinator:(id)coordinator animationDelegate:(id)delegate;
- (BOOL)animateAlongsideTransition:(id /* block */)transition completion:(id /* block */)completion;
- (BOOL)animateAlongsideTransitionInView:(id)view animation:(id /* block */)animation completion:(id /* block */)completion;
- (id)forwardingTargetForSelector:(SEL)selector;
- (BOOL)isProxy;
- (void)doesNotRecognizeSelector:(SEL)selector;
- (BOOL)isKindOfClass:(Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
- (BOOL)isMemberOfClass:(Class)class;
- (void)forwardInvocation:(id)invocation;
- (id)methodSignatureForSelector:(SEL)selector;
@end

#endif /* IGTransitionAnimationCoordinatorProxy_h */
