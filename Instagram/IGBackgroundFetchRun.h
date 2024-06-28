//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBackgroundFetchRun_h
#define IGBackgroundFetchRun_h
@import Foundation;

#include "IGBGTask.h"
#include "IGBackgroundFetchConfig.h"
#include "IGBackgroundFetchTasksRequestsProvider-Protocol.h"
#include "IGScheduler-Protocol.h"

@class NSString;
@protocol IGAppJobsRunner, IGBackgroundFetchRunDelegate;

@interface IGBackgroundFetchRun : NSObject {
  /* instance variables */
  NSObject<IGBackgroundFetchRunDelegate> *_delegate;
  IGBGTask *_bgTask;
  NSString *_identifier;
  NSObject<IGAppJobsRunner> *_appJobsRunner;
  NSObject<IGBackgroundFetchTasksRequestsProvider> *_tasksRequestsProvider;
  NSObject<IGScheduler> *_scheduler;
  BOOL _didFinishAppJobRun;
  long long _tasksRescheduleState;
  id /* block */ _bgTaskCompletionHandler;
  IGBackgroundFetchConfig *_config;
}

@property (readonly, nonatomic) long long state;

/* instance methods */
- (void)start;
@end

#endif /* IGBackgroundFetchRun_h */
