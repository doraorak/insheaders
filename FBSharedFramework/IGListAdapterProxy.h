//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGListAdapterProxy_h
#define IGListAdapterProxy_h
@import Foundation;

#include "NSProxy.h"
#include "IGListAdapter.h"

@interface IGListAdapterProxy : NSProxy {
  /* instance variables */
  id _collectionViewTarget;
  id _scrollViewTarget;
  IGListAdapter *_interceptor;
}

/* instance methods */
- (id)initWithCollectionViewTarget:(id)target scrollViewTarget:(id)target interceptor:(id)interceptor;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)forwardingTargetForSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;
- (id)methodSignatureForSelector:(SEL)selector;
@end

#endif /* IGListAdapterProxy_h */