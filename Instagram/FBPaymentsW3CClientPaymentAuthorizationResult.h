//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPaymentsW3CClientPaymentAuthorizationResult_h
#define FBPaymentsW3CClientPaymentAuthorizationResult_h
@import Foundation;

#include "FBValueObject.h"
#include "FBPaymentsW3CClientPaymentDataError.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FBPaymentsW3CClientPaymentAuthorizationResult : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) long long authorizationState;
@property (readonly, copy, nonatomic) FBPaymentsW3CClientPaymentDataError *error;
@property (readonly, nonatomic) BOOL retryable;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, copy, nonatomic) NSString *orderId;

/* instance methods */
- (id)initWithAuthorizationState:(long long)state error:(id)error retryable:(BOOL)retryable timestamp:(unsigned long long)timestamp orderId:(id)id;
@end

#endif /* FBPaymentsW3CClientPaymentAuthorizationResult_h */
