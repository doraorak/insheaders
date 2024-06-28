//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTouchDownQueuedProxy_h
#define IGTouchDownQueuedProxy_h
@import Foundation;

#include "NSProxy.h"

@class NSMutableArray, Protocol;
@protocol OS_dispatch_queue;

@interface IGTouchDownQueuedProxy : NSProxy {
  /* instance variables */
  NSMutableArray *_invocations;
  Protocol *_protocol;
  NSObject<OS_dispatch_queue> *_callbackQueue;
  id _listener;
}

/* instance methods */
- (id)initWithProtocol:(id)protocol callbackQueue:(id)queue;
- (void)setListenerAndResume:(id)resume;
- (BOOL)conformsToProtocol:(id)protocol;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)forwardingTargetForSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;
- (id)methodSignatureForSelector:(SEL)selector;
@end

#endif /* IGTouchDownQueuedProxy_h */