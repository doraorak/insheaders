//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallNotificationContext_h
#define IGVideoCallNotificationContext_h
@import Foundation;

#include "IGVideoCallLoggingContext.h"

@class NSString;

@interface IGVideoCallNotificationContext : NSObject

@property (readonly, nonatomic) NSString *channel;
@property (readonly, nonatomic) IGVideoCallLoggingContext *loggingContext;
@property (readonly, nonatomic) BOOL appStateForegrounded;
@property (readonly, nonatomic) BOOL mqttConnected;

/* instance methods */
- (id)initWithChannel:(id)channel loggingContext:(id)context appStateForegrounded:(BOOL)foregrounded mqttConnected:(BOOL)connected;
@end

#endif /* IGVideoCallNotificationContext_h */
