//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBlockQueue_h
#define IGBlockQueue_h
@import Foundation;

@protocol IGScheduler><IGBarrierScheduler, {queue<void (^)(void (^)()), std::deque<void (^)(void (^)())>>="c"{deque<void (^)(void (^)()), std::allocator<void (^)(void (^)())>>="__map_"{__split_buffer<void (^__strong *)(void (^)()), std::allocator<void (^__strong *)(void (^)())>>="__first_"^^@?"__begin_"^^@?"__end_"^^@?"__end_cap_"{__compressed_pair<void (^__strong **)(void (^)()), std::allocator<void (^__strong *)(void (^)())>>="__value_"^^@?}}"__start_"Q"__size_"{__compressed_pair<unsigned long, std::allocator<void (^)(void (^)())>>="__value_"Q}}};

@interface IGBlockQueue : NSObject {
  /* instance variables */
  struct queue<void (^)(void (^)()), std::deque<void (^)(void (^)())>> { struct deque<void (^)(void (^)()), std::allocator<void (^)(void (^)())>> { struct __split_buffer<void (^__strong *)(void (^)()), std::allocator<void (^__strong *)(void (^)())>> { id /* block */ * *__first_; id /* block */ * *__begin_; id /* block */ * *__end_; struct __compressed_pair<void (^__strong **)(void (^)()), std::allocator<void (^__strong *)(void (^)())>> { id /* block */ * *__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<void (^)(void (^)())>> { unsigned long long __value_; } __size_; } c; } _waitingTasks;
  NSObject<IGScheduler><IGBarrierScheduler> *_scheduler;
  long long _processingTasks;
  long long _maxConcurrentTasks;
}

/* instance methods */
- (id)initWithMaxConcurrentTasks:(long long)tasks scheduler:(id)scheduler;
@end

#endif /* IGBlockQueue_h */