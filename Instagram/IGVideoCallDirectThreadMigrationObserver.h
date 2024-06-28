//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallDirectThreadMigrationObserver_h
#define IGVideoCallDirectThreadMigrationObserver_h
@import Foundation;

#include "IGDirectCacheListener-Protocol.h"

@class IGDirectCache, IGVideoCallKey, NSString;
@protocol IGVideoCallDirectThreadMigrationObserverDelegate;

@interface IGVideoCallDirectThreadMigrationObserver : NSObject<IGDirectCacheListener> {
  /* instance variables */
  NSObject<IGVideoCallDirectThreadMigrationObserverDelegate> *_delgate;
  IGDirectCache *_directCache;
  IGVideoCallKey *_videoCallKey;
  NSString *_threadId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCache:(id)cache;
- (void)stopObserving;
- (void)directCacheDidRemoveThreadsWithIds:(id)ids;
- (void)directCacheDidUpdateThread:(id)thread withAppliedUpdates:(id)updates;
- (void)directCacheDidUpdateThreads:(id)threads;
- (void)directCacheDidUpdateInboxMetadata;
@end

#endif /* IGVideoCallDirectThreadMigrationObserver_h */
