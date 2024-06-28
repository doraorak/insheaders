//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGIOSSimulatorBGTaskScheduler_h
#define IGIOSSimulatorBGTaskScheduler_h
@import Foundation;

#include "NSObject-Protocol.h"

@class BGTaskScheduler, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IGIOSSimulatorBGTaskScheduler : NSObject<NSObject> {
  /* instance variables */
  BGTaskScheduler *_taskScheduler;
  NSMutableDictionary *_pendingTaskRequests;
  NSMutableDictionary *_pendingTasksTimers;
  id /* block */ _launchHandler;
  NSObject<OS_dispatch_queue> *_callbackQueue;
  NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)registerForTasksWithIdentifiers:(id)identifiers usingQueue:(id)queue launchHandler:(id /* block */)handler;
- (BOOL)submitTaskRequest:(id)request error:(id *)error;
- (void)cancelAllTaskRequests;
- (void)onDeprecatedBGFetchCall;
- (void)launchTask:(id)task;
@end

#endif /* IGIOSSimulatorBGTaskScheduler_h */
