//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayComponentDataMutatingRequest_h
#define FBPayComponentDataMutatingRequest_h
@import Foundation;

#include "FBValueObject.h"
#include "FBPayComponentDataMutatingEmailRequest.h"
#include "FBPayComponentDataMutatingPayerNameRequest.h"
#include "FBPayComponentDataMutatingPaymentMethodRequest.h"
#include "FBPayComponentDataMutatingPhoneRequest.h"
#include "FBPayComponentDataMutatingShippingAddressRequest.h"
#include "FBPayExpressCheckoutOneTimeCheckoutModel.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface FBPayComponentDataMutatingRequest : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) FBPayComponentDataMutatingPaymentMethodRequest *paymentMethodMutatingRequest;
@property (readonly, copy, nonatomic) FBPayComponentDataMutatingShippingAddressRequest *shippingAddressMutatingRequest;
@property (readonly, copy, nonatomic) FBPayComponentDataMutatingPayerNameRequest *payerNameMutatingRequest;
@property (readonly, copy, nonatomic) FBPayComponentDataMutatingEmailRequest *emailMutatingRequest;
@property (readonly, copy, nonatomic) FBPayComponentDataMutatingPhoneRequest *phoneMutatingRequest;
@property (readonly, copy, nonatomic) FBPayExpressCheckoutOneTimeCheckoutModel *oneTimeCheckoutModel;

/* instance methods */
- (id)initWithPaymentMethodMutatingRequest:(id)request shippingAddressMutatingRequest:(id)request payerNameMutatingRequest:(id)request emailMutatingRequest:(id)request phoneMutatingRequest:(id)request oneTimeCheckoutModel:(id)model;
@end

#endif /* FBPayComponentDataMutatingRequest_h */