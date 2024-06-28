//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRealtimeMessageDispatcherWithTimeout_h
#define IGDirectRealtimeMessageDispatcherWithTimeout_h
@import Foundation;

#include "IGDirectRealtimeMessageDispatcher.h"

@interface IGDirectRealtimeMessageDispatcherWithTimeout : NSObject {
  /* instance variables */
  IGDirectRealtimeMessageDispatcher *_realtimeMessageDispatcher;
}

/* instance methods */
- (id)initWithRealtimeMessageDispatcher:(id)dispatcher;
@end

#endif /* IGDirectRealtimeMessageDispatcherWithTimeout_h */
