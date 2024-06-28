//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallCallInfoHttpPublisher_h
#define IGVideoCallCallInfoHttpPublisher_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGVideoCallGroupExpansionStateInternal.h"
#include "MDCDataSubscriptionPublishing-Protocol.h"
#include "MDCDataSubscriptionPublishingListener-Protocol.h"

@class NSString;

@interface IGVideoCallCallInfoHttpPublisher : NSObject<MDCDataSubscriptionPublishing> {
  /* instance variables */
  NSObject<IGAPIClient> *_networker;
  IGVideoCallGroupExpansionStateInternal *_state;
  NSObject<MDCDataSubscriptionPublishingListener> *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNetworker:(id)networker;
- (void)startListeningForUpdatesWithListener:(id)listener;
- (void)stopListeningForUpdatesWithListener:(id)listener;
- (id)publisherInputsForDebugging;
@end

#endif /* IGVideoCallCallInfoHttpPublisher_h */