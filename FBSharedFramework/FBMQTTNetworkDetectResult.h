//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMQTTNetworkDetectResult_h
#define FBMQTTNetworkDetectResult_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSError;

@interface FBMQTTNetworkDetectResult : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) long long pingResult;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) double latencyInMS;
@property (readonly, nonatomic) double timestamp;

/* instance methods */
- (id)initWithPingResult:(long long)result error:(id)error latencyInMS:(double)ms timestamp:(double)timestamp;
@end

#endif /* FBMQTTNetworkDetectResult_h */
