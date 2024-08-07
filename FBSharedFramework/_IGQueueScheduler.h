//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _IGQueueScheduler_h
#define _IGQueueScheduler_h
@import Foundation;

#include "IGBarrierScheduler-Protocol.h"
#include "IGCancelableScheduler-Protocol.h"
#include "IGDateScheduler-Protocol.h"
#include "IGGroupScheduler-Protocol.h"
#include "IGScheduler-Protocol.h"
#include "IGSynchronousScheduler-Protocol.h"
#include "IGWrappableScheduler-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface _IGQueueScheduler : NSObject<IGDateScheduler, IGScheduler, IGCancelableScheduler, IGSynchronousScheduler, IGGroupScheduler, IGBarrierScheduler, IGWrappableScheduler> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)schedule:(id /* block */)schedule;
- (id)scheduleCancelable:(id /* block */)cancelable;
- (id)queue;
- (void)scheduleSynchronously:(id /* block */)synchronously;
- (id)after:(unsigned long long)after schedule:(id /* block */)schedule;
- (double)currentAbsoluteTime;
- (double)currentMediaTime;
- (id)createGroup;
- (void)scheduleBarrier:(id /* block */)barrier;
- (void)scheduleBarrierSynchronously:(id /* block */)synchronously;
- (id)schedulerWrapperWithLabel:(id)label attributes:(id)attributes;
@end

#endif /* _IGQueueScheduler_h */
