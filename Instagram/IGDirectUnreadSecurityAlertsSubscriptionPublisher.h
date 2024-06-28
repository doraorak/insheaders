//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectUnreadSecurityAlertsSubscriptionPublisher_h
#define IGDirectUnreadSecurityAlertsSubscriptionPublisher_h
@import Foundation;

#include "FBCancelable-Protocol.h"
#include "MDCDataSubscriptionPublishing-Protocol.h"

@class IGDirectMsysMessagingMailbox, MDCDataSubscriptionPublishingListenerAnnouncer, NSArray, NSString;

@interface IGDirectUnreadSecurityAlertsSubscriptionPublisher : NSObject<MDCDataSubscriptionPublishing> {
  /* instance variables */
  IGDirectMsysMessagingMailbox *_mailboxProvider;
  NSObject<FBCancelable> *_cancelHandle;
  MDCDataSubscriptionPublishingListenerAnnouncer *_announcer;
  NSArray *_latestUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMailboxProvider:(id)provider;
- (void)startListeningForUpdatesWithListener:(id)listener;
- (void)stopListeningForUpdatesWithListener:(id)listener;
- (id)publisherInputsForDebugging;
@end

#endif /* IGDirectUnreadSecurityAlertsSubscriptionPublisher_h */
