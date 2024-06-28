//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef METAInAppPurchaseTransactionUpdate_h
#define METAInAppPurchaseTransactionUpdate_h
@import Foundation;

#include "FBValueObject.h"
#include "METAInAppPurchaseVerificationResponse.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSError, NSString;

@interface METAInAppPurchaseTransactionUpdate : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *externalProductID;
@property (readonly, copy, nonatomic) NSString *externalTransactionID;
@property (readonly, copy, nonatomic) NSError *storeKitError;
@property (readonly, copy, nonatomic) METAInAppPurchaseVerificationResponse *verificationResponse;
@property (readonly, copy, nonatomic) NSError *verificationError;
@property (readonly, copy, nonatomic) NSString *payeeId;
@property (readonly, copy, nonatomic) NSString *digitalContentOrderId;

/* instance methods */
- (id)initWithType:(unsigned long long)type externalProductID:(id)id externalTransactionID:(id)id storeKitError:(id)error verificationResponse:(id)response verificationError:(id)error payeeId:(id)id digitalContentOrderId:(id)id;
@end

#endif /* METAInAppPurchaseTransactionUpdate_h */
