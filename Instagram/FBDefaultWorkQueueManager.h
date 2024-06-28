//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBDefaultWorkQueueManager_h
#define FBDefaultWorkQueueManager_h
@import Foundation;

#include "FBAppJobsWorkQueue.h"
#include "NSObject-Protocol.h"

@class FBTimer, NSString;
@protocol FBAppJobsWorkQueueExecutor, OS_dispatch_queue, {atomic<FBAppJobsAttribution>="__a_"{__cxx_atomic_impl<FBAppJobsAttribution, std::__cxx_atomic_base_impl<FBAppJobsAttribution>>="__a_value"Aq}}, {atomic<bool>="__a_"{__cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>="__a_value"AB}};

@interface FBDefaultWorkQueueManager : NSObject<NSObject> {
  /* instance variables */
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _cancelled;
  NSObject<FBAppJobsWorkQueueExecutor> *_mainQueueExecutor;
  NSObject<FBAppJobsWorkQueueExecutor> *_backgroundExecutor;
  NSObject<OS_dispatch_queue> *_backgroundQueue;
  FBAppJobsWorkQueue *_queue;
  FBTimer *_resumeTimer;
  struct atomic<FBAppJobsAttribution> { struct __cxx_atomic_impl<FBAppJobsAttribution, std::__cxx_atomic_base_impl<FBAppJobsAttribution>> { atomic  __a_value; long long x0; } __a_; } _promotedAttribution;
  long long _activeSuspensionCalls;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _suspensionCallsAndBackgroundQueueMutex;
  id _appContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)setAppContext:(id)context;
- (void)dispatchRequest:(id)request;
- (void)promoteJobsWithAttribution:(long long)attribution;
- (void)demoteJobsWithAttribution:(long long)attribution;
- (void)cancel;
- (void)suspendBackgroundQueue;
- (void)resumeBackgroundQueue;
- (void)dealloc;
@end

#endif /* FBDefaultWorkQueueManager_h */
