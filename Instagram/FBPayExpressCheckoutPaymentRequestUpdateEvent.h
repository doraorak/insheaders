//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayExpressCheckoutPaymentRequestUpdateEvent_h
#define FBPayExpressCheckoutPaymentRequestUpdateEvent_h
@import Foundation;

#include "FBPayExpressCheckoutShippingOption.h"
#include "FBPayPaymentMethod.h"
#include "FBPaymentsShippingAddress.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface FBPayExpressCheckoutPaymentRequestUpdateEvent : NSObject<NSCopying> {
  /* instance variables */
  NSString *_fulfillmentOptionId;
  NSString *_pickupRadiusZipCode;
  NSArray *_appliedDiscounts;
  NSArray *_appliedIncentives;
  NSString *_merchantLoyalty;
}

@property (copy, nonatomic) FBPayPaymentMethod *paymentMethod;
@property (copy, nonatomic) FBPaymentsShippingAddress *shippingAddress;
@property (copy, nonatomic) FBPayExpressCheckoutShippingOption *shippingOption;
@property (copy, nonatomic) NSDictionary *additionalFields;
@property (copy, nonatomic) NSString *emailId;
@property (copy, nonatomic) NSString *phoneId;

/* instance methods */
- (id)initWithShippingAddress:(id)address shippingOption:(id)option fulfillmentOptionId:(id)id pickupRadiusZipCode:(id)code appliedDiscounts:(id)discounts appliedIncentives:(id)incentives merchantLoyalty:(id)loyalty paymentMethod:(id)method additionalFields:(id)fields;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FBPayExpressCheckoutPaymentRequestUpdateEvent_h */