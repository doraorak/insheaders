//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBLifecycle_h
#define FBLifecycle_h
@import Foundation;

#include "FBAnalyticsLogging-Protocol.h"
#include "FBLifecycleConfiguration.h"
#include "FBLifecycleEventBatchWriter.h"

@class FBTimer, NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue, {atomic<UIApplicationState>="__a_"{__cxx_atomic_impl<UIApplicationState, std::__cxx_atomic_base_impl<UIApplicationState>>="__a_value"Aq}}, {vector<StructuredLogger::IosLifecycleLifecycleEventsTypeNoBuilder, std::allocator<StructuredLogger::IosLifecycleLifecycleEventsTypeNoBuilder>>="__begin_"^{IosLifecycleLifecycleEventsTypeNoBuilder}"__end_"^{IosLifecycleLifecycleEventsTypeNoBuilder}"__end_cap_"{__compressed_pair<StructuredLogger::IosLifecycleLifecycleEventsTypeNoBuilder *, std::allocator<StructuredLogger::IosLifecycleLifecycleEventsTypeNoBuilder>>="__value_"^{IosLifecycleLifecycleEventsTypeNoBuilder}}};

@interface FBLifecycle : NSObject {
  /* instance variables */
  FBLifecycleConfiguration *_configuration;
  NSObject<FBAnalyticsLogging> *_logger;
  NSObject<OS_dispatch_queue> *_samplingQueue;
  FBTimer *_allModesTimer;
  struct vector<StructuredLogger::IosLifecycleLifecycleEventsTypeNoBuilder, std::allocator<StructuredLogger::IosLifecycleLifecycleEventsTypeNoBuilder>> { struct IosLifecycleLifecycleEventsTypeNoBuilder *__begin_; struct IosLifecycleLifecycleEventsTypeNoBuilder *__end_; struct __compressed_pair<StructuredLogger::IosLifecycleLifecycleEventsTypeNoBuilder *, std::allocator<StructuredLogger::IosLifecycleLifecycleEventsTypeNoBuilder>> { struct IosLifecycleLifecycleEventsTypeNoBuilder *__value_; } __end_cap_; } _loggingEvents;
  FBLifecycleEventBatchWriter *_eventWriter;
  struct atomic<UIApplicationState> { struct __cxx_atomic_impl<UIApplicationState, std::__cxx_atomic_base_impl<UIApplicationState>> { atomic  __a_value; long long x0; } __a_; } _appState;
  struct shared_timed_mutex { struct __shared_mutex_base { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } __mut_; struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char x[40] __opaque; } __cv_; } __gate1_; struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char x[40] __opaque; } __cv_; } __gate2_; unsigned int __state_; } __base_; } _navigationLock;
  NSString *_navigationModule;
  NSString *_navigationViewController;
  NSMutableArray *_userPerceptibleScopeNames;
  NSArray *_signalHandlers;
  int _lowDiskSpaceNotifyToken;
  int _lowDiskSpaceRootNotifyToken;
  int _lowDiskSpaceOtherNotifyToken;
  double _lastSmoothScrollTime;
}

/* instance methods */
- (id)initWithStructuredLogger:(id)logger configuration:(id)configuration;
- (void)dealloc;
- (void)_heartbeat;
- (void)_heartbeatWithExtraInfo:(id)info;
- (void)notifyOfNavigationToViewControllerWithClassNamed:(id)named module:(id)module;
- (void)notifyOfUserPerceptibleOpen:(id)open metadata:(id)metadata;
- (void)notifyOfUserPerceptibleClose:(id)close metadata:(id)metadata;
- (void)notifyOfSessionChangeWithIdentifier:(id)identifier;
- (void)notifyOfLoggerChangeWithStructuredLogger:(id)logger;
- (void)notifyDidFinishLaunching;
- (void)notifyWillEnterForeground;
- (void)notifyDidEnterBackground;
- (void)notifyDidBecomeActive;
- (void)notifyWillResignActive;
- (void)_thermalStateNotification:(id)notification;
- (void)_didEndScrollNotification:(id)notification;
- (void)_notifyBundleResourceRequestLowDiskSpaceNotification:(id)notification;
- (void)_notifyLowDiskSpaceOfType:(id)type;
- (void)_memoryLimitNotification:(id)notification;
- (void)_memoryPressureNotification:(id)notification;
- (void)_memoryWarningNotification:(id)notification;
@end

#endif /* FBLifecycle_h */