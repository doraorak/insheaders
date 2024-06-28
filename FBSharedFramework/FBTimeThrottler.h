//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBTimeThrottler_h
#define FBTimeThrottler_h
@import Foundation;

#include "FBCancelable-Protocol.h"

@protocol OS_dispatch_queue;

@interface FBTimeThrottler : NSObject {
  /* instance variables */
  double _period;
  long long _options;
  NSObject<OS_dispatch_queue> *_queueForPerforming;
  id /* block */ _block;
  id /* block */ _timeBlock;
  id /* block */ _callAfterBlock;
  double _lastCallTime;
  NSObject<FBCancelable> *_scheduledTrailingInvocation;
}

/* instance methods */
- (id)initWithPeriod:(double)period options:(long long)options queueForPerforming:(id)performing block:(id /* block */)block timeBlock:(id /* block */)block callAfterBlock:(id /* block */)block;
- (id)initWithPeriod:(double)period options:(long long)options queueForPerforming:(id)performing block:(id /* block */)block;
- (void)reset;
- (void)_performTrailingInvocation;
@end

#endif /* FBTimeThrottler_h */