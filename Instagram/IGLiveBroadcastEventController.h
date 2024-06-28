//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveBroadcastEventController_h
#define IGLiveBroadcastEventController_h
@import Foundation;

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IGLiveBroadcastEventController : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_internalQueue;
  NSMutableDictionary *_broadcastEventVersionDictionary;
}

/* instance methods */
- (id)init;
@end

#endif /* IGLiveBroadcastEventController_h */
