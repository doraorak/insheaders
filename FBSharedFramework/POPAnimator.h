//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef POPAnimator_h
#define POPAnimator_h
@import Foundation;

@class CADisplayLink, NSMutableArray;
@protocol POPAnimatorDelegate, {list<std::shared_ptr<POPAnimatorItem>, std::allocator<std::shared_ptr<POPAnimatorItem>>>="__end_"{__list_node_base<std::shared_ptr<POPAnimatorItem>, void *>="__prev_"^v"__next_"^v}"__size_alloc_"{__compressed_pair<unsigned long, std::allocator<std::__list_node<std::shared_ptr<POPAnimatorItem>, void *>>>="__value_"Q}};

@interface POPAnimator : NSObject {
  /* instance variables */
  CADisplayLink *_displayLink;
  struct list<std::shared_ptr<POPAnimatorItem>, std::allocator<std::shared_ptr<POPAnimatorItem>>> { struct __list_node_base<std::shared_ptr<POPAnimatorItem>, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<std::shared_ptr<POPAnimatorItem>, void *>>> { unsigned long long __value_; } __size_alloc_; } _list;
  struct __CFDictionary * _dict;
  NSMutableArray *_observers;
  struct list<std::shared_ptr<POPAnimatorItem>, std::allocator<std::shared_ptr<POPAnimatorItem>>> { struct __list_node_base<std::shared_ptr<POPAnimatorItem>, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<std::shared_ptr<POPAnimatorItem>, void *>>> { unsigned long long __value_; } __size_alloc_; } _pendingList;
  struct __CFRunLoopObserver * _pendingListObserver;
  double _slowMotionStartTime;
  double _slowMotionLastTime;
  double _slowMotionAccumulator;
  struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _lock;
}

@property (nonatomic) BOOL disableDisplayLink;
@property (nonatomic) double beginTime;
@property (weak, nonatomic) NSObject<POPAnimatorDelegate> *delegate;
@property (readonly, nonatomic) double refreshPeriod;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) struct CAFrameRateRange { float x0; float x1; float x2; } preferredFrameRateRange;

/* class methods */
+ (id)sharedAnimator;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_processPendingList;
- (void)_clearPendingListObserver;
- (void)_scheduleProcessPendingList;
- (void)_renderTime:(double)time items:(struct list<std::shared_ptr<POPAnimatorItem>, std::allocator<std::shared_ptr<POPAnimatorItem>>> { struct __list_node_base<std::shared_ptr<POPAnimatorItem>, void *> { void * x0; void * x1; } x0; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<std::shared_ptr<POPAnimatorItem>, void *>>> { unsigned long long x0; } x1; })items;
- (void)_renderTime:(double)time item:(struct shared_ptr<POPAnimatorItem> { struct POPAnimatorItem * x0; struct __shared_weak_count * x1; })item;
- (id)observers;
- (void)addAnimation:(id)animation forObject:(id)object key:(id)key;
- (void)removeAllAnimationsForObject:(id)object;
- (void)removeAnimationForObject:(id)object key:(id)key cleanupDict:(BOOL)dict;
- (void)removeAnimationForObject:(id)object key:(id)key;
- (id)animationKeysForObject:(id)object;
- (id)animationForObject:(id)object key:(id)key;
- (double)_currentRenderTime;
- (void)render;
- (void)renderTime:(double)time;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
@end

#endif /* POPAnimator_h */