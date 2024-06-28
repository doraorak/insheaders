//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGThreadedLocationManager_h
#define IGThreadedLocationManager_h
@import Foundation;

#include "CLLocationManagerDelegate-Protocol.h"

@class CLLocation, CLLocationManager, NSDate, NSNumber, NSString, NSThread;
@protocol IGThreadedLocationManagerDelegate, OS_dispatch_queue;

@interface IGThreadedLocationManager : NSObject<CLLocationManagerDelegate> {
  /* instance variables */
  NSThread *_locationManagerThread;
  CLLocationManager *_locationManager;
  NSObject<OS_dispatch_queue> *_cachedPropertiesMutexQueue;
  NSNumber *_cachedAuthorizationStatus;
  NSNumber *_cachedAccuracyAuthorization;
  CLLocation *_cachedLocation;
  NSDate *_cachedLocationDate;
  double _timeBaseInfoRatio;
  BOOL _previousLocationTimedOut;
  NSObject<OS_dispatch_queue> *_adaptiveLocationQueue;
  BOOL _adaptiveLocationTimeoutHasInit;
  BOOL _locationUpdatesDisabled;
  BOOL _locationUpdatesActive;
  BOOL _adaptiveLocationTimeoutEnabled;
  double _synchronousTimeout;
}

@property (readonly, weak, nonatomic) NSObject<IGThreadedLocationManagerDelegate> *delegate;
@property (readonly, copy, nonatomic) CLLocation *location;
@property (readonly, nonatomic) long long accuracyAuthorization;
@property (readonly, nonatomic) int authorizationStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)locationServicesEnabled;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)_threadLoop;
- (void)runBlockAsync:(id /* block */)async;
- (BOOL)_runBlockSync:(id /* block */)sync;
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;
- (void)locationManagerDidChangeAuthorization:(id)authorization;
- (void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;
- (void)locationManager:(id)manager didFailWithError:(id)error;
- (void)enableLocationUpdates;
- (void)disableLocationUpdates;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocationWithAllowsBackgroundUpdates:(BOOL)updates;
- (void)requestWhenInUseAuthorization;
@end

#endif /* IGThreadedLocationManager_h */
