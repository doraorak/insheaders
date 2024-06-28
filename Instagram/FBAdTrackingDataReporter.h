//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAdTrackingDataReporter_h
#define FBAdTrackingDataReporter_h
@import Foundation;

#include "FBAdTrackingDataReporterConfig.h"
#include "FBAnalyticsLogging-Protocol.h"
#include "FBInvalidating-Protocol.h"
#include "FBKeyValueDataStore-Protocol.h"
#include "FBReachabilityListener-Protocol.h"

@class FBReachabilityAnnouncer, NSString;
@protocol MetaPrivacyManifestHelping, OS_dispatch_queue;

@interface FBAdTrackingDataReporter : NSObject<FBInvalidating, FBReachabilityListener> {
  /* instance variables */
  NSObject<FBKeyValueDataStore> *_preferencesDataStore;
  FBReachabilityAnnouncer *_reachabilityAnnouncer;
  BOOL _valid;
  NSObject<OS_dispatch_queue> *_queue;
  id _applicationActiveObserver;
  id _adTrackingStatusObserver;
  NSObject<FBAnalyticsLogging> *_logger;
  NSObject<MetaPrivacyManifestHelping> *_helper;
  FBAdTrackingDataReporterConfig *_config;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPreferencesDataStore:(id)store logger:(id)logger helper:(id)helper config:(id)config;
- (void)invalidate;
- (void)reachabilityStateChangedTo:(unsigned long long)to from:(unsigned long long)from;
@end

#endif /* FBAdTrackingDataReporter_h */
