//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPaymentsW3CClientPaymentDataError_h
#define FBPaymentsW3CClientPaymentDataError_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FBPaymentsW3CClientPaymentDataError : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, nonatomic) long long reason;
@property (readonly, copy, nonatomic) NSString *field;

/* instance methods */
- (id)initWithMessage:(id)message reason:(long long)reason field:(id)field;
@end

#endif /* FBPaymentsW3CClientPaymentDataError_h */
