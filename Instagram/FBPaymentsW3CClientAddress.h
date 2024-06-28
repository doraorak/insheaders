//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPaymentsW3CClientAddress_h
#define FBPaymentsW3CClientAddress_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface FBPaymentsW3CClientAddress : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *shippingAddressId;
@property (readonly, copy, nonatomic) NSArray *addressLine;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy, nonatomic) NSString *city;
@property (readonly, copy, nonatomic) NSString *dependentLocality;
@property (readonly, copy, nonatomic) NSString *organization;
@property (readonly, copy, nonatomic) NSString *phone;
@property (readonly, copy, nonatomic) NSString *postalCode;
@property (readonly, copy, nonatomic) NSString *recipient;
@property (readonly, copy, nonatomic) NSString *region;
@property (readonly, copy, nonatomic) NSString *regionCode;
@property (readonly, copy, nonatomic) NSString *sortingCode;

/* class methods */
+ (id)valueWithJSONDictionary:(id)jsondictionary error:(id *)error;

/* instance methods */
- (id)initWithShippingAddressId:(id)id addressLine:(id)line country:(id)country city:(id)city dependentLocality:(id)locality organization:(id)organization phone:(id)phone postalCode:(id)code recipient:(id)recipient region:(id)region regionCode:(id)code sortingCode:(id)code;
@end

#endif /* FBPaymentsW3CClientAddress_h */