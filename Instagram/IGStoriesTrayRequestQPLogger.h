//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoriesTrayRequestQPLogger_h
#define IGStoriesTrayRequestQPLogger_h
@import Foundation;

#include "IGHomeSurfaceQPLoggerInstancesManager.h"
#include "IGHomeSurfaceQPLoggerPersistentFailureTracker.h"
#include "NSObject-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface IGStoriesTrayRequestQPLogger : NSObject<NSObject> {
  /* instance variables */
  int _markerId;
  BOOL _shouldIncludeRequestId;
  IGHomeSurfaceQPLoggerInstancesManager *_instancesManager;
  IGHomeSurfaceQPLoggerPersistentFailureTracker *_persistentFailureTracker;
  NSMutableDictionary *_requestIdsByDeliveryLoggingKey;
  BOOL _isQplJoinEnabled;
  BOOL _didRenderInTray;
  BOOL _didRenderInViewer;
  BOOL _streamingEnabled;
  BOOL _isFinalChunkParsed;
  NSDictionary *_latestRateLimitByEndpoint;
  NSString *_currentFetchReason;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithShouldIncludeRequestId:(BOOL)id instancesManager:(id)manager persistentFailureTracker:(id)tracker isQplJoinEnabled:(BOOL)enabled;
- (void)instancesManagerDidRemoveExpiredInstance:(id)instance;
@end

#endif /* IGStoriesTrayRequestQPLogger_h */