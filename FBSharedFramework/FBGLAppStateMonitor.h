//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBGLAppStateMonitor_h
#define FBGLAppStateMonitor_h
@import Foundation;

@class UIApplication;
@protocol OS_dispatch_semaphore, {atomic<bool>="__a_"{__cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>="__a_value"AB}};

@interface FBGLAppStateMonitor : NSObject {
  /* instance variables */
  UIApplication *_application;
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _initialized;
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _isAppForegrounded;
  NSObject<OS_dispatch_semaphore> *_initializeSemaphore;
  id /* block */ _initializeBlock;
}

@property (readonly, nonatomic) BOOL canUseOpenGL;
@property (nonatomic) BOOL isGLForPipEnabled;
@property (nonatomic) struct FBGLAppStateMonitorPipCallbacks { undefined * x0; undefined * x1; } pipCallbacks;

/* class methods */
+ (id)sharedMonitor;

/* instance methods */
- (id)initWithApplication:(id)application;
- (void)_handleBackgroundNotification:(id)notification;
- (void)_handleForegroundNotification:(id)notification;
@end

#endif /* FBGLAppStateMonitor_h */
