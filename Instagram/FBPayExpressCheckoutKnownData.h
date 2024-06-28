//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayExpressCheckoutKnownData_h
#define FBPayExpressCheckoutKnownData_h
@import Foundation;

#include "FBPaymentsContactInfoEmailDataModel.h"
#include "FBPaymentsContactInfoPhoneNumberDataModel.h"
#include "FBPaymentsShippingAddress.h"

@class NSString;

@interface FBPayExpressCheckoutKnownData : NSObject

@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, copy, nonatomic) FBPaymentsContactInfoEmailDataModel *emailAddress;
@property (readonly, copy, nonatomic) FBPaymentsContactInfoPhoneNumberDataModel *phoneNumber;
@property (readonly, copy, nonatomic) FBPaymentsShippingAddress *shippingAddress;
@property (readonly, nonatomic) long long dataSource;

/* instance methods */
- (id)initWithSource:(long long)source name:(id)name email:(id)email phone:(id)phone address:(id)address;
@end

#endif /* FBPayExpressCheckoutKnownData_h */