//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserScopedObjects_IGCoPresenceRealtimePublisher_h
#define IGUserScopedObjects_IGCoPresenceRealtimePublisher_h
@import Foundation;

#include "IGCoPresenceE2EQPLLogger.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class IGRealtimeMqttClient;
@protocol IGCoPresenceDebugger;

@interface IGUserScopedObjects (IGCoPresenceRealtimePublisher)
/* instance methods */
- (id)coPresenceRealtimePublisher;
@end

#endif /* IGUserScopedObjects_IGCoPresenceRealtimePublisher_h */
