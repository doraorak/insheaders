//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPaymentsW3CClientPaymentRequest_h
#define FBPaymentsW3CClientPaymentRequest_h
@import Foundation;

#include "FBValueObject.h"
#include "FBPaymentsW3CClientAddress.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface FBPaymentsW3CClientPaymentRequest : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *id;
@property (readonly, nonatomic) long long mode;
@property (readonly, copy, nonatomic) NSArray *paymentItems;
@property (readonly, copy, nonatomic) NSDictionary *details;
@property (readonly, copy, nonatomic) FBPaymentsW3CClientAddress *shippingAddress;
@property (readonly, copy, nonatomic) FBPaymentsW3CClientAddress *billingAddress;
@property (readonly, copy, nonatomic) NSArray *shippingOptions;
@property (readonly, copy, nonatomic) NSString *shippingOptionId;
@property (readonly, copy, nonatomic) NSArray *fulfillmentOptions;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, copy, nonatomic) NSDictionary *shippingAddressErrors;

/* instance methods */
- (id)initWithId:(id)id mode:(long long)mode paymentItems:(id)items details:(id)details shippingAddress:(id)address billingAddress:(id)address shippingOptions:(id)options shippingOptionId:(id)id fulfillmentOptions:(id)options timestamp:(unsigned long long)timestamp shippingAddressErrors:(id)errors;
@end

#endif /* FBPaymentsW3CClientPaymentRequest_h */
