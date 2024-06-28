//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNetworkRequestCancellationManager_h
#define IGNetworkRequestCancellationManager_h
@import Foundation;

#include "IGExecutionOperationManaging-Protocol.h"
#include "IGNavigationEventListener-Protocol.h"
#include "IGResourceSchedulerCancellationConfig.h"
#include "IGSchedulerAsyncExecutor.h"

@class NSMutableArray, NSString;

@interface IGNetworkRequestCancellationManager : NSObject<IGNavigationEventListener> {
  /* instance variables */
  IGResourceSchedulerCancellationConfig *_cancellationConfig;
  IGSchedulerAsyncExecutor *_executor;
  NSObject<IGExecutionOperationManaging> *_executionSet;
  NSMutableArray *_operationsQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCancellationConfig:(id)config executionSet:(id)set operationsQueue:(id)queue andExecutor:(id)executor;
- (void)_cancelExecutingRequest:(id)request viewDidDisappear:(BOOL)disappear;
- (void)_cancelPendingRequest:(id)request viewDidDisappear:(BOOL)disappear;
- (id)_predicateCancellingPendingRequestsInModule:(id)module;
- (id)_predicateCancellingExecutingRequestsInModule:(id)module;
- (BOOL)_shouldOperationProceed:(id)proceed module:(id)module cancelOnscreenRequest:(BOOL)request cancelOffscreenRequest:(BOOL)request cancelIfFoundInMultipleModules:(BOOL)modules;
- (void)viewControllerDidAppear:(id)appear withEventData:(id)data;
- (void)viewControllerWillAppear:(id)appear;
- (void)viewControllerWillDisappear:(id)disappear;
- (void)viewControllerDidDisappear:(id)disappear withEventData:(id)data;
- (void)viewControllerDidDeallocWithAnalyticsModule:(id)module;
- (void)viewControllerDidUpdate:(id)update updateExtras:(id)extras;
@end

#endif /* IGNetworkRequestCancellationManager_h */
