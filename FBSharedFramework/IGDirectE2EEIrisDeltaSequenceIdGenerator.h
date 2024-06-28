//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectE2EEIrisDeltaSequenceIdGenerator_h
#define IGDirectE2EEIrisDeltaSequenceIdGenerator_h
@import Foundation;

#include "IGDirectE2EEDiskStore.h"
#include "IGDirectRealtimeIrisDeltaListener-Protocol.h"

@class NSMutableArray, NSNumber, NSString;

@interface IGDirectE2EEIrisDeltaSequenceIdGenerator : NSObject<IGDirectRealtimeIrisDeltaListener> {
  /* instance variables */
  NSNumber *_lastSequenceId;
  BOOL _storeLoaded;
  NSMutableArray *_getNextUnusedDelayedTillStoreLoaded;
  IGDirectE2EEDiskStore *_directE2EEDiskStore;
  BOOL _e2eeLoadStarted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDirectE2EEDiskStore:(id)store;
- (void)irisDeltaHandlerDidReceiveDelta:(id)delta;
- (void)irisDeltaHandlerDidApplyDelta:(id)delta;
- (void)irisDeltaHandlerDroppedDeltaSilently:(id)silently;
- (void)irisSubscriptionHandlerWillConnectAtSequenceId:(id)id reason:(id)reason;
- (void)irisSubscriptionHandlerDidConnectAtSequenceId:(id)id latestServerSequenceId:(id)id;
- (void)irisSubscriptionHandlerRequiresResnapshot;
@end

#endif /* IGDirectE2EEIrisDeltaSequenceIdGenerator_h */
