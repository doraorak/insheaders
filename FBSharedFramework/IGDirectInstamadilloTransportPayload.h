//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInstamadilloTransportPayload_h
#define IGDirectInstamadilloTransportPayload_h
@import Foundation;

#include "GPBMessage.h"
#include "IGDirectInstamadilloAddMessagePayload.h"
#include "IGDirectInstamadilloDeleteMessagePayload.h"
#include "IGDirectInstamadilloFranking.h"
#include "IGDirectInstamadilloSupplementMessagePayload.h"

@interface IGDirectInstamadilloTransportPayload : GPBMessage

@property (readonly, @dynamic, nonatomic) int transportPayloadOneOfCase;
@property (retain, @dynamic, nonatomic) IGDirectInstamadilloAddMessagePayload *add;
@property (retain, @dynamic, nonatomic) IGDirectInstamadilloDeleteMessagePayload *delete_p;
@property (retain, @dynamic, nonatomic) IGDirectInstamadilloSupplementMessagePayload *supplement;
@property (retain, @dynamic, nonatomic) IGDirectInstamadilloFranking *franking;
@property (@dynamic, nonatomic) BOOL hasFranking;
@property (@dynamic, nonatomic) BOOL openEb;
@property (@dynamic, nonatomic) BOOL hasOpenEb;
@property (@dynamic, nonatomic) BOOL isE2EeAttributed;
@property (@dynamic, nonatomic) BOOL hasIsE2EeAttributed;

/* class methods */
+ (id)descriptor;
@end

#endif /* IGDirectInstamadilloTransportPayload_h */
