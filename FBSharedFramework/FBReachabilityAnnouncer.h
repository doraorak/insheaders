//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBReachabilityAnnouncer_h
#define FBReachabilityAnnouncer_h
@import Foundation;

#include "FBReachabilityListenerAnnouncer.h"
#include "FBReachabilityQualityMonitor.h"
#include "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol FBReachabilityMonitor, OS_dispatch_queue, {SharedMutexImpl<false, void, std::atomic, folly::SharedMutexPolicyDefault>="state_"{atomic<unsigned int>="__a_"{__cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>>="__a_value"AI}}};

@interface FBReachabilityAnnouncer : NSObject<NSObject> {
  /* instance variables */
  unsigned long long _previousReachabilityState;
  unsigned long long _backgroundedReachabilityState;
  unsigned long long _previousDownloadBandwidthState;
  unsigned long long _backgroundedDownloadBandwidthState;
  unsigned long long _currentUploadBandwidthState;
  unsigned long long _previousUploadBandwidthState;
  unsigned long long _backgroundedUploadBandwidthState;
  unsigned long long _previousLatencyState;
  unsigned long long _backgroundedLatencyState;
  NSObject<FBReachabilityMonitor> *_ipv4ReachabilityMonitor;
  NSObject<FBReachabilityMonitor> *_ipv6ReachabilityMonitor;
  NSObject<FBReachabilityMonitor> *_networkPathMonitor;
  FBReachabilityQualityMonitor *_qualityMonitor;
  FBReachabilityListenerAnnouncer *_codeGenForegroundAnnouncer;
  FBReachabilityListenerAnnouncer *_codeGenBackgroundAnnouncer;
  NSArray *_cached_net_info_ifs;
  NSDictionary *_cached_net_info;
  BOOL _backgrounded;
  BOOL _issueReachabilityUpdateOnForeground;
  BOOL _issueDownloadBandwidthUpdateOnForeground;
  BOOL _issueUploadBandwidthUpdateOnForeground;
  BOOL _issueLatencyUpdateOnForeground;
  NSObject<OS_dispatch_queue> *_targetQueue;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _reachabilityLock;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _qualityLock;
  struct SharedMutexImpl<false, void, std::atomic, folly::SharedMutexPolicyDefault> { struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { atomic  __a_value; unsigned int x0; } __a_; } state_; } _netInfoLock;
  BOOL _networkPathMonitorEnabled;
}

@property (readonly, nonatomic) unsigned long long currentReachabilityState;
@property (readonly, nonatomic) double currentDownloadBandwidthEstimate;
@property (readonly, nonatomic) unsigned long long currentDownloadBandwidthState;
@property (readonly, nonatomic) double currentLatencyEstimate;
@property (readonly, nonatomic) unsigned long long currentLatencyState;
@property (readonly, nonatomic) NSString *networkName;
@property (readonly, nonatomic) BOOL connectedToVPN;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)initWithCodeGenForegroundAnnouncer:(id)announcer codeGenBackgroundAnnouncer:(id)announcer targetQueue:(id)queue ipv4ReachabilityMonitorFactory:(id /* block */)factory ipv6ReachabilityMonitorFactory:(id /* block */)factory networkPathMonitorFactory:(id /* block */)factory qualityMonitorFactory:(id /* block */)factory notificationCenter:(id)center;
- (void)didBecomeActive;
- (void)didBecomeActiveHandler;
- (void)didEnterBackground;
- (void)didEnterBackgroundHandler;
- (void)addListener:(id)listener;
- (void)addListenerHandler:(id)handler receiveBackgroundUpdates:(BOOL)updates;
- (void)removeListener:(id)listener;
- (void)reachabilityStateChanged;
- (void)downloadBandwidthEstimateChanged:(double)changed isFallback:(BOOL)fallback;
- (void)uploadBandwidthEstimateChanged:(double)changed isFallback:(BOOL)fallback;
- (void)latencyEstimateChanged:(double)changed isFallback:(BOOL)fallback;
@end

#endif /* FBReachabilityAnnouncer_h */
