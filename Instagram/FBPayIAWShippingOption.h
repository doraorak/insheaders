//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayIAWShippingOption_h
#define FBPayIAWShippingOption_h
@import Foundation;

#include "FBValueObject.h"
#include "FBPayIAWPaymentCurrencyAmount.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FBPayIAWShippingOption : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *id;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *secondaryLabel;
@property (readonly, copy, nonatomic) FBPayIAWPaymentCurrencyAmount *amount;
@property (readonly, nonatomic) BOOL selected;

/* class methods */
+ (id)valueWithJSONDictionary:(id)jsondictionary error:(id *)error;

/* instance methods */
- (id)initWithId:(id)id label:(id)label secondaryLabel:(id)label amount:(id)amount selected:(BOOL)selected;
@end

#endif /* FBPayIAWShippingOption_h */