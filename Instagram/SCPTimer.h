//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SCPTimer_h
#define SCPTimer_h
@import Foundation;

@class NSTimer;
@protocol OS_dispatch_queue;

@interface SCPTimer : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_validLockQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL valid;
@property (retain, nonatomic) NSTimer *timer;

/* class methods */
+ (id)scheduledTimerWithTimeInterval:(double)interval repeats:(BOOL)repeats block:(id /* block */)block;
+ (id)scheduledTimerWithTimeInterval:(double)interval repeats:(BOOL)repeats queue:(id)queue block:(id /* block */)block;

/* instance methods */
- (id)initWithTimeInterval:(double)interval repeats:(BOOL)repeats queue:(id)queue block:(id /* block */)block;
- (void)invalidate;
- (void)timerDidTick;
@end

#endif /* SCPTimer_h */