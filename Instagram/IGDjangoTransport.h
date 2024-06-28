//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDjangoTransport_h
#define IGDjangoTransport_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "NSObject-Protocol.h"

@class IGRealtimeMqttClient, NSString;
@protocol IGKragleTransportDelegate, IGRTCDjangoTransportLoggingDelegateAnnouncer;

@interface IGDjangoTransport : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGAPIClient> *_networker;
  NSObject<IGRTCDjangoTransportLoggingDelegateAnnouncer> *_announcer;
  IGRealtimeMqttClient *_mqttClient;
  NSObject<IGUserLauncherSetProviding> *_launcherSet;
  NSString *_waterfallId;
}

@property (weak, nonatomic) NSObject<IGKragleTransportDelegate> *transportDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNetworker:(id)networker launcherSet:(id)set mqttClient:(id)client;
- (void)setWaterfallId:(id)id;
- (void)handleMwsMessage:(id)message;
- (void)sendSignalingMessageRequest:(id)request callback:(id /* block */)callback;
@end

#endif /* IGDjangoTransport_h */