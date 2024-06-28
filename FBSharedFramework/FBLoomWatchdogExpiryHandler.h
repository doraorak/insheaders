//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBLoomWatchdogExpiryHandler_h
#define FBLoomWatchdogExpiryHandler_h
@import Foundation;

#include "FBWatchdogExpiryHandlerConfiguration.h"
#include "FBWatchdogExpiryHandling-Protocol.h"
#include "FBWatchdogStallFileManager.h"

@class NSMutableDictionary, NSSet, NSString;
@protocol {atomic<bool>="__a_"{__cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>="__a_value"AB}}, {atomic<double>="__a_"{__cxx_atomic_impl<double, std::__cxx_atomic_base_impl<double>>="__a_value"Ad}}, {shared_ptr<facebook::perflogger::QPLBase>="__ptr_"^{QPLBase}"__cntrl_"^{__shared_weak_count}};

@interface FBLoomWatchdogExpiryHandler : NSObject<FBWatchdogExpiryHandling> {
  /* instance variables */
  FBWatchdogExpiryHandlerConfiguration *_configuration;
  FBWatchdogStallFileManager *_sharedStallFileManager;
  struct atomic<double> { struct __cxx_atomic_impl<double, std::__cxx_atomic_base_impl<double>> { atomic  __a_value; double x0; } __a_; } _lastStallEndTime;
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _currentlyStalled;
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _traceInProgress;
  struct atomic<double> { struct __cxx_atomic_impl<double, std::__cxx_atomic_base_impl<double>> { atomic  __a_value; double x0; } __a_; } _maxTimeoutHit;
  NSString *_lastTraceID;
  NSMutableDictionary *_watchdogExtraParams;
  struct shared_ptr<facebook::perflogger::QPLBase> { struct QPLBase *__ptr_; struct __shared_weak_count *__cntrl_; } _cppQPLLogger;
}

@property (readonly, copy, nonatomic) NSSet *timeouts;

/* instance methods */
- (id)initWithConfiguration:(id)configuration logger:(struct shared_ptr<facebook::perflogger::QPLBase> { struct QPLBase * x0; struct __shared_weak_count * x1; })logger;
- (void)runLoopTimedOutAtTime:(double)time withTimeout:(double)timeout atRunLoopActivity:(unsigned long long)activity;
- (void)runLoopCompletedAtTime:(double)time;
- (void)watchdogTimerWasStopped;
- (void)setExtraInfoString:(id)string forKey:(id)key;
- (id)lastStallTraceID;
@end

#endif /* FBLoomWatchdogExpiryHandler_h */
