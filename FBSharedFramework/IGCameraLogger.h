//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraLogger_h
#define IGCameraLogger_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGCameraLoggerContext.h"
#include "IGSessionChainProvider-Protocol.h"

@interface IGCameraLogger : NSObject {
  /* instance variables */
  NSObject<IGSessionChainProvider> *_sessionChainingManager;
  id /* block */ _startCameraSessionBlock;
  id _lock;
  BOOL _hasStartedFormatCaptureSession;
  BOOL _hasStartedPrecaptureSession;
  long long _mostRecentPrecaptureDestination;
  long long _currentCameraSwitcherMode;
}

@property (readonly) IGCameraLoggerContext *context;
@property (readonly, nonatomic) NSObject<IGAnalyticsEventLoggingProtocol> *analyticsLogger;

/* instance methods */
- (id)initWithAnalyticsLogger:(id)logger sessionChainingManager:(id)manager startCameraSessionBlock:(id /* block */)block;
- (void)_resetContext;
- (id)currentSessionID;
- (id)structuredLogger;
- (id)navChain;
- (void)logCameraUIToolImpression:(long long)impression surface:(long long)surface module:(id)module;
- (void)logCameraUIToolApply:(long long)apply surface:(long long)surface module:(id)module;
- (void)logCameraUIToolRemove:(long long)remove surface:(long long)surface module:(id)module;
- (void)setEntryPoint:(long long)point;
- (void)setCameraPosition:(long long)position;
@end

#endif /* IGCameraLogger_h */