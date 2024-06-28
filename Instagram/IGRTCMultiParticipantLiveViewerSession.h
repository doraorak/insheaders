//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRTCMultiParticipantLiveViewerSession_h
#define IGRTCMultiParticipantLiveViewerSession_h
@import Foundation;

#include "IGCallRemoteMessageHandler.h"
#include "IGCallRemoteMessageHandlerDelegate-Protocol.h"

@class NSString;
@protocol IGMwsRealtimeSubscriptionToken;

@interface IGRTCMultiParticipantLiveViewerSession : NSObject<IGCallRemoteMessageHandlerDelegate> {
  /* instance variables */
  NSObject<IGMwsRealtimeSubscriptionToken> *_subscriptionToken;
  IGCallRemoteMessageHandler *_rsysRemoteCallMessageHandler;
  NSObject<IGMwsRealtimeSubscriptionToken> *_rsysSubscriptionToken;
  id /* block */ _inviteBlock;
  id /* block */ _revokeInviteBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMwsRealtimeTopicHandlingService:(id)service inviteBlock:(id /* block */)block revokeInviteBlock:(id /* block */)block;
- (id)initWithMwsRealtimeTopicHandlingService:(id)service broadcastId:(id)id inviteBlock:(id /* block */)block revokeInviteBlock:(id /* block */)block;
- (void)dealloc;
- (void)messageHandler:(id)handler didRingForSessionId:(id)id serverInfoData:(id)data transactionId:(id)id withMessage:(id)message conferenceType:(long long)type;
- (void)messageHandler:(id)handler didStateTransitionForParticipant:(id)participant fromState:(long long)state toState:(long long)state capabilities:(id)capabilities;
- (void)messageHandlerDidDismiss:(id)dismiss reason:(id)reason sessionId:(id)id serverInfoData:(id)data;
@end

#endif /* IGRTCMultiParticipantLiveViewerSession_h */