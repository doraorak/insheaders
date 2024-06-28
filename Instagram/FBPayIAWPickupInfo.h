//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayIAWPickupInfo_h
#define FBPayIAWPickupInfo_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FBPayIAWPickupInfo : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *pickupRadiusZipCode;
@property (readonly, copy, nonatomic) NSString *pickupName;
@property (readonly, copy, nonatomic) NSString *pickupEmail;
@property (readonly, copy, nonatomic) NSString *pickupPhone;
@property (readonly, copy, nonatomic) NSString *pickupNotes;

/* class methods */
+ (id)valueWithJSONDictionary:(id)jsondictionary error:(id *)error;

/* instance methods */
- (id)initWithPickupRadiusZipCode:(id)code pickupName:(id)name pickupEmail:(id)email pickupPhone:(id)phone pickupNotes:(id)notes;
@end

#endif /* FBPayIAWPickupInfo_h */
