//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIQuietTimeWindowResponse_h
#define IGAPIQuietTimeWindowResponse_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPIQuietTimeWindowResponse : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithDays:(id)days endTime:(id)time label:(id)label startTime:(id)time;
@end

#endif /* IGAPIQuietTimeWindowResponse_h */
