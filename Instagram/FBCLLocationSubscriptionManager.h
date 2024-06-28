//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCLLocationSubscriptionManager_h
#define FBCLLocationSubscriptionManager_h
@import Foundation;

#include "FBBackgroundStateManaging-Protocol.h"
#include "FBCLLocationManager.h"
#include "NSObject-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, {atomic<long>="__a_"{__cxx_atomic_impl<long, std::__cxx_atomic_base_impl<long>>="__a_value"Aq}};

@interface FBCLLocationSubscriptionManager : NSObject<NSObject> {
  /* instance variables */
  FBCLLocationManager *_locationManager;
  NSObject<FBBackgroundStateManaging> *_applicationStateManager;
  NSMutableArray *_subscriptions;
  NSMutableArray *_significantLocationChangeSubscriptions;
  struct atomic<long> { struct __cxx_atomic_impl<long, std::__cxx_atomic_base_impl<long>> { atomic  __a_value; long long x0; } __a_; } _subscriptionCountAllowingBackgroundUpdates;
  double _bestDesiredAccuracy;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)initWithLocationManager:(id)manager applicationStateManager:(id)manager queue:(id)queue;
- (void)handleLocation:(id)location;
- (void)handleError:(id)error;
- (void)suspendInaccurateLocationFixes;
- (BOOL)shouldAllowBackgroundLocationUpdates;
- (void)subscriptionDidPause:(id)pause;
- (id)internalQueue;
@end

#endif /* FBCLLocationSubscriptionManager_h */
