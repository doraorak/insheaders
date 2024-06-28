//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRealtimeIrisSyncStatusSubscriptionPublisher_h
#define IGDirectRealtimeIrisSyncStatusSubscriptionPublisher_h
@import Foundation;

#include "MDCDataSubscriptionPublishing-Protocol.h"
#include "MDCDataSubscriptionPublishingListener-Protocol.h"

@class IGDirectMutationManager, IGDirectRealtimeIrisSyncStatus, NSString;

@interface IGDirectRealtimeIrisSyncStatusSubscriptionPublisher : NSObject<MDCDataSubscriptionPublishing> {
  /* instance variables */
  IGDirectMutationManager *_mutationManager;
  NSObject<MDCDataSubscriptionPublishingListener> *_listener;
  IGDirectRealtimeIrisSyncStatus *_currentIrisSyncStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)startListeningForUpdatesWithListener:(id)listener;
- (void)stopListeningForUpdatesWithListener:(id)listener;
- (id)publisherInputsForDebugging;
- (void)irisSyncStatusTrackerChangedStatus:(id)status;
@end

#endif /* IGDirectRealtimeIrisSyncStatusSubscriptionPublisher_h */
