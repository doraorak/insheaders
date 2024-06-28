//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallDefaultMwsRingDismissHandler_h
#define IGVideoCallDefaultMwsRingDismissHandler_h
@import Foundation;

#include "IGCallRemoteMessageHandler.h"
#include "IGCallRemoteMessageHandlerDelegate-Protocol.h"

@class IGUserSession, NSString;

@interface IGVideoCallDefaultMwsRingDismissHandler : NSObject<IGCallRemoteMessageHandlerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGCallRemoteMessageHandler *_remoteMessageHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)messageHandler:(id)handler didRingForSessionId:(id)id serverInfoData:(id)data transactionId:(id)id withMessage:(id)message conferenceType:(long long)type;
- (void)messageHandlerDidDismiss:(id)dismiss reason:(id)reason sessionId:(id)id serverInfoData:(id)data;
- (void)messageHandler:(id)handler didStateTransitionForParticipant:(id)participant fromState:(long long)state toState:(long long)state capabilities:(id)capabilities;
@end

#endif /* IGVideoCallDefaultMwsRingDismissHandler_h */
