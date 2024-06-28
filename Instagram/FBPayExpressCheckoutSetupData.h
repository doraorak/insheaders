//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayExpressCheckoutSetupData_h
#define FBPayExpressCheckoutSetupData_h
@import Foundation;

#include "FBPayExpressCheckoutPaymentDetails.h"
#include "FBPayExpressCheckoutProductConfiguration.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FBPayExpressCheckoutSetupData : NSObject<NSCoding, NSCopying> {
  /* instance variables */
  FBPayExpressCheckoutPaymentDetails *_paymentDetails;
  FBPayExpressCheckoutProductConfiguration *_productConfiguration;
}

@property (readonly, nonatomic) NSString *orderId;

/* instance methods */
- (id)initWithOrderId:(id)id paymentDetails:(id)details productConfiguration:(id)configuration;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FBPayExpressCheckoutSetupData_h */
