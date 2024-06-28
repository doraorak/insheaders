//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayExpressCheckoutTransactionInfo_h
#define FBPayExpressCheckoutTransactionInfo_h
@import Foundation;

#include "FBPayExpressCheckoutEventHandlingErrors.h"
#include "FBPayExpressCheckoutFulfillmentContext.h"
#include "FBPayExpressCheckoutShippingOptions.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface FBPayExpressCheckoutTransactionInfo : NSObject<NSCoding, NSCopying> {
  /* instance variables */
  NSArray *_lineItems;
  FBPayExpressCheckoutFulfillmentContext *_fulfillmentContext;
  NSArray *_appliedDiscounts;
  NSArray *_appliedIncentives;
}

@property (readonly, nonatomic) NSString *orderId;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSArray *priceInfo;
@property (readonly, nonatomic) FBPayExpressCheckoutShippingOptions *shippingOptions;
@property (retain, nonatomic) FBPayExpressCheckoutEventHandlingErrors *errors;

/* instance methods */
- (id)initWithOrderId:(id)id currencyCode:(id)code countryCode:(id)code priceInfo:(id)info lineItems:(id)items shippingOptions:(id)options fulfillmentContext:(id)context appliedIncentives:(id)incentives appliedDiscounts:(id)discounts errors:(id)errors;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* FBPayExpressCheckoutTransactionInfo_h */