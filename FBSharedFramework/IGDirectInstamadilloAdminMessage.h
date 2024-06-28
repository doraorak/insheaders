//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInstamadilloAdminMessage_h
#define IGDirectInstamadilloAdminMessage_h
@import Foundation;

#include "GPBMessage.h"
#include "IGDirectInstamadilloDeviceAdminMessage.h"

@interface IGDirectInstamadilloAdminMessage : GPBMessage

@property (readonly, @dynamic, nonatomic) int adminMessageSubtypeOneOfCase;
@property (retain, @dynamic, nonatomic) IGDirectInstamadilloDeviceAdminMessage *deviceAdminMessage;

/* class methods */
+ (id)descriptor;
@end

#endif /* IGDirectInstamadilloAdminMessage_h */