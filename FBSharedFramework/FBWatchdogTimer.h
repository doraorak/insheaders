//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBWatchdogTimer_h
#define FBWatchdogTimer_h
@import Foundation;

#include "FBWatchdogExpiryHandling-Protocol.h"
#include "FBWatchdogTimerConfiguration.h"

@class NSSet, NSThread;
@protocol {atomic<bool>="__a_"{__cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>="__a_value"AB}}, {atomic<double>="__a_"{__cxx_atomic_impl<double, std::__cxx_atomic_base_impl<double>>="__a_value"Ad}}, {atomic<unsigned long>="__a_"{__cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>>="__a_value"AQ}};

@interface FBWatchdogTimer : NSObject {
  /* instance variables */
  NSThread *_watchdogThread;
  struct __CFRunLoopObserver * _keepaliveObserver;
  struct __CFRunLoopObserver * _firstRunloopPassObserver;
  struct atomic<double> { struct __cxx_atomic_impl<double, std::__cxx_atomic_base_impl<double>> { atomic  __a_value; double x0; } __a_; } _lastIdleEndTime;
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _idle;
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _firstRunLoopIteration;
  struct atomic<double> { struct __cxx_atomic_impl<double, std::__cxx_atomic_base_impl<double>> { atomic  __a_value; double x0; } __a_; } _largestTimeoutExpired;
  struct atomic<unsigned long> { struct __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>> { atomic  __a_value; unsigned long long x0; } __a_; } _currentRunLoopActivity;
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _isEnteringForeground;
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _isInColdStart;
  BOOL _isMonitoring;
  NSSet *_timeouts;
  double _timerWakeupInterval;
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _suspendedForExceptionHandler;
  NSObject<FBWatchdogExpiryHandling> *_watchdogExpiryHandler;
  BOOL _forceWatchdogTimerForTesting;
  double _watchdogThreadCancelInterval;
}

@property (nonatomic) struct __CFRunLoop * runLoop;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) FBWatchdogTimerConfiguration *configuration;

/* class methods */
+ (void)createMainThreadWatchdogWithConfiguration:(id)configuration watchdogExpiryHandler:(id)handler;
+ (id)mainThreadWatchdog;

/* instance methods */
- (id)initWithConfiguration:(id)configuration watchdogExpiryHandler:(id)handler;
- (void)_updateStartTypeLogging;
- (id)lastStallTraceID;
- (void)dealloc;
- (id)description;
- (void)_startWatchdogIfNeeded;
- (void)_stopWatchdog;
- (void)_onResignActive;
- (void)_onDidEnterBackground;
- (void)didReceiveLifecycleEvent:(long long)event;
- (void)_willEnterForegroundNotification;
- (void)_didBecomeActiveNotification;
- (void)_startObservingNotifications;
- (void)_watchdogMethod;
- (void)_watchdogThreadMethod;
- (void)_startMonitoringThreads;
- (BOOL)_stopMonitoringThreads;
- (BOOL)isEnabled;
@end

#endif /* FBWatchdogTimer_h */
