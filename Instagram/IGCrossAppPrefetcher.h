//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCrossAppPrefetcher_h
#define IGCrossAppPrefetcher_h
@import Foundation;

#include "IGFeedRequestTracking-Protocol.h"
#include "IGMainFeedNetworkSource.h"
#include "IGMainFeedNetworkSourceSessionDeps.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class NSString;

@interface IGCrossAppPrefetcher : NSObject<IGFeedRequestTracking> {
  /* instance variables */
  NSString *_userPk;
  NSObject<IGUserLauncherSetProviding> *_launcherSet;
  IGMainFeedNetworkSourceSessionDeps *_mainFeedSessionDeps;
  IGMainFeedNetworkSource *_networkSource;
  NSString *_nextMaxId;
  NSString *_sessionId;
  BOOL _fetchTailEnabled;
  unsigned long long _task;
  BOOL _oneAndDoneEnabled;
  BOOL _fetchedAlready;
}

/* instance methods */
- (id)initWithUserPk:(id)pk launcherSet:(id)set mainFeedSessionDeps:(id)deps fetchTailEnabled:(BOOL)enabled oneAndDoneEnabled:(BOOL)enabled;
- (void)fetchBarcelonaHeadLoadForCrossAppCacheWithInjectedMediaIds:(id)ids analyticsModule:(id)module;
- (void)trackRequestStateChangedToState:(id)state;
@end

#endif /* IGCrossAppPrefetcher_h */
