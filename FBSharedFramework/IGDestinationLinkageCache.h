//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDestinationLinkageCache_h
#define IGDestinationLinkageCache_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@interface IGDestinationLinkageCache : FBValueObject<NSCopying, NSCoding, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *destinationType;
@property (readonly, copy, nonatomic) NSString *recommendedDestinationType;
@property (readonly, copy, nonatomic) NSDate *fetchDate;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithDestinationType:(id)type recommendedDestinationType:(id)type fetchDate:(id)date;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDestinationLinkageCache_h */
