//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIVideoVersion_h
#define IGAPIVideoVersion_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPIVideoVersion : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithBandwidthKbps:(id)kbps height:(id)height graphQLID:(id)qlid type:(id)type url:(id)url width:(id)width;
@end

#endif /* IGAPIVideoVersion_h */
