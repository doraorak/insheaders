//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMutationExternalSystemEventHandler_h
#define IGDirectMutationExternalSystemEventHandler_h
@import Foundation;

#include "IGDirectCache.h"
#include "IGDirectCacheListener-Protocol.h"
#include "IGDirectInboxService.h"
#include "IGDirectMutationBackgroundTaskScheduler.h"
#include "IGDirectMutationDataSnapshotHandler.h"
#include "IGDirectMutationRequestInitiator.h"
#include "IGScopedListener-Protocol.h"

@class NSNotificationCenter, NSString;
@protocol IGDirectMutationRealtimeDeltaHandling, IGDirectRealtimeServiceAnnouncer;

@interface IGDirectMutationExternalSystemEventHandler : NSObject<IGDirectCacheListener, IGScopedListener> {
  /* instance variables */
  NSNotificationCenter *_notificationCenter;
  IGDirectCache *_directCache;
  NSObject<IGDirectRealtimeServiceAnnouncer> *_directRealtimeServiceAnnouncer;
  IGDirectMutationRequestInitiator *_requestInitiator;
  IGDirectMutationBackgroundTaskScheduler *_backgroundTaskScheduler;
  NSObject<IGDirectMutationRealtimeDeltaHandling> *_deltaSyncHandler;
  IGDirectInboxService *_inboxService;
  IGDirectMutationDataSnapshotHandler *_snapshotHandler;
  NSString *_userPk;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNotificationCenter:(id)center directCache:(id)cache realtimeServiceAnnouncer:(id)announcer requestInitiator:(id)initiator backgroundTaskScheduler:(id)scheduler deltaSyncHandler:(id)handler inboxService:(id)service snapshotHandler:(id)handler userPk:(id)pk;
- (void)directCacheDidUpdateThreads:(id)threads;
- (void)directCacheDidRemoveThreadsWithIds:(id)ids;
- (void)directCacheDidUpdateThread:(id)thread withAppliedUpdates:(id)updates;
- (void)directCacheDidUpdateInboxMetadata;
- (void)realtimeServiceDidReceiveDelta:(id)delta;
- (void)realtimeServiceDidApplyDelta:(id)delta;
- (void)directInboxServiceFetchSucceededWithFetchInput:(id)input fetchOutput:(id)output chunkIndex:(unsigned long long)index;
- (void)directInboxServiceFetchFailedWithFetchInput:(id)input httpStatusCode:(long long)code error:(id)error willAutoRetry:(BOOL)retry;
- (void)_applicationDidEnterForeground:(id)foreground;
- (void)_applicationDidEnterBackground:(id)background;
@end

#endif /* IGDirectMutationExternalSystemEventHandler_h */
