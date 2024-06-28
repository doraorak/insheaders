//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDeviceBatteryInfo_h
#define IGDeviceBatteryInfo_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface IGDeviceBatteryInfo : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) double level;
@property (readonly, nonatomic) long long state;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithLevel:(double)level state:(long long)state;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDeviceBatteryInfo_h */