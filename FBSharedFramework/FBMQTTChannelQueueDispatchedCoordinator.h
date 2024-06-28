//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMQTTChannelQueueDispatchedCoordinator_h
#define FBMQTTChannelQueueDispatchedCoordinator_h
@import Foundation;

#include "FBMQTTChannelCoordinating-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface FBMQTTChannelQueueDispatchedCoordinator : NSObject<FBMQTTChannelCoordinating> {
  /* instance variables */
  NSObject<FBMQTTChannelCoordinating> *_coordinator;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCoordinator:(id)coordinator queue:(id)queue;
- (long long)networkStatus;
- (id)mqttSessionIdForAnalytics;
- (unsigned long long)clientCapabilities;
- (id)clientConfig;
- (id)config;
- (id)connectionConfig;
- (id)endpointCapabilities;
- (id)debugInfo;
- (void)configureWithClientConfig:(id)config customConnectionConfiguration:(id)configuration clientCapabilities:(unsigned long long)capabilities endpointCapabilities:(unsigned long long)capabilities appSpecificInfo:(id)info showOnLineOnForegroundBlock:(id /* block */)block credentialsAvailableBlock:(id /* block */)block credentialsFetcherBlock:(id /* block */)block userAgentFormatterBlock:(id /* block */)block analyticsLogger:(id)logger;
- (void)start;
- (void)stop;
- (void)updateRegionPreference:(id)preference;
- (void)setAssetIDs:(id)ids;
- (void)resetConnectionConfig:(id)config;
- (void)credentialsDidBecomeAvailable;
- (void)sendMQTTKeepAlive;
- (void)setInBackground:(BOOL)background clientRequestId:(id)id;
- (void)setInBackground:(BOOL)background clientRequestId:(id)id shouldPublishState:(BOOL)state;
- (long long)state;
- (BOOL)isConnected;
- (BOOL)isReachable;
- (BOOL)isStarted;
- (void)addListener:(id)listener;
- (void)addListeners:(id)listeners;
- (void)removeListener:(id)listener;
- (void)removeListeners:(id)listeners;
- (void)addPublisher:(id)publisher;
- (void)removePublisher:(id)publisher;
@end

#endif /* FBMQTTChannelQueueDispatchedCoordinator_h */