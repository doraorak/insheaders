//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MetaPaymentsSDKCheckoutSetupPayload_h
#define MetaPaymentsSDKCheckoutSetupPayload_h
@import Foundation;

#include "FBValueObject.h"
#include "MetaPaymentsSDKAvailability.h"
#include "MetaPaymentsSDKPaymentConfig.h"
#include "MetaPaymentsSDKReceiverInfo.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface MetaPaymentsSDKCheckoutSetupPayload : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) MetaPaymentsSDKPaymentConfig *paymentConfig;
@property (readonly, copy, nonatomic) MetaPaymentsSDKAvailability *availability;
@property (readonly, copy, nonatomic) MetaPaymentsSDKReceiverInfo *receiverInfo;

/* instance methods */
- (id)initWithPaymentConfig:(id)config availability:(id)availability receiverInfo:(id)info;
@end

#endif /* MetaPaymentsSDKCheckoutSetupPayload_h */
