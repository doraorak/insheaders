//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC43IGDirectPendingInboxCountersSubscriptionKit49IGDirectPendingInboxCountersSubscriptionPublisher_h
#define _TtC43IGDirectPendingInboxCountersSubscriptionKit49IGDirectPendingInboxCountersSubscriptionPublisher_h
@import Foundation;

#include "IGDirectCachePendingInboxListener-Protocol.h"
#include "IGDirectMutationManagerListener-Protocol.h"
#include "MDCDataSubscriptionPublishing-Protocol.h"

@interface _TtC43IGDirectPendingInboxCountersSubscriptionKit49IGDirectPendingInboxCountersSubscriptionPublisher : NSObject<MDCDataSubscriptionPublishing, IGDirectCachePendingInboxListener, IGDirectMutationManagerListener> { // (Swift)
  /* instance variables */
   directCache;
   networkingService;
   mutationManager;
   listener;
   requestToken;
   allUnreadRequestsCount;
   parameters;
}

/* instance methods */
- (void)startListeningForUpdatesWithListener:(id)listener;
- (void)stopListeningForUpdatesWithListener:(id)listener;
- (id)publisherInputsForDebugging;
- (void)directCacheDidUpdatePendingRequests:(id)requests;
- (void)directCacheDidUpdatePendingInboxBadgeCounters:(id)counters;
- (void)mutationRequestWasAcknowledged:(id)acknowledged;
- (void)mutationRequestDidSucceed:(id)succeed successResponseDict:(id)dict;
- (void)mutationRequestFailedAndIsIneligibleForAutoRetry:(id)retry withError:(id)error manualRetryPermitted:(BOOL)permitted;
- (id)init;
@end

#endif /* _TtC43IGDirectPendingInboxCountersSubscriptionKit49IGDirectPendingInboxCountersSubscriptionPublisher_h */