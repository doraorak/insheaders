//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveTwoLevelBufferedQueue_h
#define IGLiveTwoLevelBufferedQueue_h
@import Foundation;

@class FBTimer, NSMutableOrderedSet;
@protocol IGLiveTwoLevelBufferedQueueDelegate, IGLiveTwoLevelBufferedQueueHandler;

@interface IGLiveTwoLevelBufferedQueue : NSObject {
  /* instance variables */
  NSMutableOrderedSet *_buffer;
  long long _bufferSize;
  long long _bufferCount;
  NSObject<IGLiveTwoLevelBufferedQueueHandler> *_handler;
  NSObject<IGLiveTwoLevelBufferedQueueDelegate> *_delegate;
  FBTimer *_timer;
}

@property (nonatomic) BOOL suspended;

/* instance methods */
- (id)initWithDequeueInterval:(double)interval bufferSize:(long long)size queueHandler:(id)handler delegate:(id)delegate;
- (void)_update;
@end

#endif /* IGLiveTwoLevelBufferedQueue_h */
