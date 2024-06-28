//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPerformanceComposableLogger_h
#define IGPerformanceComposableLogger_h
@import Foundation;

#include "IGAppStateListenerManaging-Protocol.h"
#include "IGPerformanceComponent.h"
#include "IGPerformanceLoggable-Protocol.h"
#include "NSObject-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol IGPerformanceLoggerDelegate;

@interface IGPerformanceComposableLogger : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGPerformanceLoggable> *_logger;
  NSMutableDictionary *_attachedComponents;
  NSMutableDictionary *_activeComponents;
  NSMutableDictionary *_componentActiveCounts;
  IGPerformanceComponent *_designatedStartComponent;
  NSObject<IGAppStateListenerManaging> *_appStateAnnouncer;
  struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _mutex;
}

@property (weak, nonatomic) NSObject<IGPerformanceLoggerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMarkerID:(int)id;
- (id)initWithMarkerID:(int)id designatedStartComponent:(id)component;
- (id)initWithLogger:(id)logger appStateAnnouncer:(id)announcer designatedStartComponent:(id)component;
- (void)performanceComponentDidStart:(id)start;
- (void)performanceComponentDidSucceed:(id)succeed;
- (void)performanceComponentDidCancel:(id)cancel;
- (void)performanceComponent:(id)component failWithError:(id)error;
- (void)performanceComponent:(id)component failWithReason:(id)reason;
- (void)performanceComponentDidStart:(id)start addAnnotationKey:(id)key string:(id)string;
- (void)performanceComponentDidStart:(id)start addAnnotationKey:(id)key boolean:(BOOL)boolean;
- (void)performanceComponentDidStart:(id)start addAnnotationKey:(id)key number:(id)number;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)addAnnotationKey:(id)key stringValue:(id)value;
- (void)addAnnotationKey:(id)key boolValue:(BOOL)value;
- (void)addAnnotationKey:(id)key numberValue:(id)value;
- (void)addAnnotationsFromDictionary:(id)dictionary;
- (void)addDefaultAnnotationKey:(id)key stringValue:(id)value;
- (void)addDefaultAnnotationKey:(id)key boolValue:(BOOL)value;
- (void)addDefaultAnnotationKey:(id)key numberValue:(id)value;
- (BOOL)isActive;
- (BOOL)isActiveAndSampled;
- (BOOL)isActiveComponent:(id)component;
@end

#endif /* IGPerformanceComposableLogger_h */
