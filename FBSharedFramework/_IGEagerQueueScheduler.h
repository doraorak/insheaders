//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _IGEagerQueueScheduler_h
#define _IGEagerQueueScheduler_h
@import Foundation;

#include "IGCancelableScheduler-Protocol.h"
#include "IGScheduler-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface _IGEagerQueueScheduler : NSObject<IGScheduler, IGCancelableScheduler> {
  /* instance variables */
  atomic int _queuedCount;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithQueue:(id)queue;
- (void)dealloc;
- (id)queue;
- (void)schedule:(id /* block */)schedule;
- (id)scheduleCancelable:(id /* block */)cancelable;
@end

#endif /* _IGEagerQueueScheduler_h */
