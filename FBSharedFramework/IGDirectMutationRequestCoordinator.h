//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMutationRequestCoordinator_h
#define IGDirectMutationRequestCoordinator_h
@import Foundation;

#include "IGDirectMessageSentSpeedLogger.h"
#include "IGDirectMutationRequestCoordinationCache.h"
#include "IGDirectMutationRequestStateStore.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface IGDirectMutationRequestCoordinator : NSObject<NSObject> {
  /* instance variables */
  IGDirectMutationRequestCoordinationCache *_processorCache;
  IGDirectMutationRequestStateStore *_requestStateStore;
  id /* block */ _timeProvider;
  id /* block */ _autoRetryConfigProvider;
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<IGUserLauncherSetProviding> *_featureSets;
  IGDirectMessageSentSpeedLogger *_messageSentSpeedLogger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRequestProcessorOrchestrationCache:(id)cache requestStateStore:(id)store autoRetryConfigProvider:(id /* block */)provider timeProvider:(id /* block */)provider queue:(id)queue featureSets:(id)sets messageSentSpeedLogger:(id)logger;
- (void)handleExecutionResult:(id)result forMutationId:(id)id;
- (void)updateAdditionalData:(id)data forMutationId:(id)id;
- (void)mutationRequestStoreDidEnqueueMutation:(id)mutation withInitialExecutionState:(id)state;
- (void)mutationRequestStoreDidUpdateMutation:(id)mutation fromExecutionState:(id)state toExecutionState:(id)state;
- (void)mutationRequestStoreDidDropMutationWithId:(id)id withReason:(id)reason;
@end

#endif /* IGDirectMutationRequestCoordinator_h */
