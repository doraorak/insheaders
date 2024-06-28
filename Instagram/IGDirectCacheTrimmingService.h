//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectCacheTrimmingService_h
#define IGDirectCacheTrimmingService_h
@import Foundation;

#include "IGConcurrentSessionHandling-Protocol.h"
#include "IGScopeEnding-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class IGDirectCache, IGDirectLockedThreadsManager, IGDirectMutationManager, IGUser, IGUserDefaults, NSString;
@protocol IGBackgroundTaskScheduling;

@interface IGDirectCacheTrimmingService : NSObject<IGScopeEnding> {
  /* instance variables */
  IGDirectCache *_directCache;
  IGDirectMutationManager *_mutationManager;
  IGUser *_currentUser;
  NSObject<IGUserLauncherSetProviding> *_featureSets;
  IGUserDefaults *_userDefaults;
  NSObject<IGConcurrentSessionHandling> *_concurrentSessionHandler;
  NSObject<IGBackgroundTaskScheduling> *_backgroundTaskScheduler;
  IGDirectLockedThreadsManager *_lockedThreadsManager;
  long long _maximumThreadCount;
  unsigned long long _threadsTrimmingBackgroundTask;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDirectCache:(id)cache mutationManager:(id)manager currentUser:(id)user featureSets:(id)sets userDefaults:(id)defaults concurrentSessionHandler:(id)handler backgroundTaskScheduler:(id)scheduler lockedThreadsManager:(id)manager;
- (void)scopeWillEnd;
- (void)_onUserSessionEndingOrAppBackground;
@end

#endif /* IGDirectCacheTrimmingService_h */