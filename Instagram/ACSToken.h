//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ACSToken_h
#define ACSToken_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSData, NSDate, NSString;

@interface ACSToken : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSData *nonce;
@property (readonly, copy, nonatomic) NSData *unblindedSignature;
@property (readonly, copy, nonatomic) NSString *serverConfigId;
@property (readonly, copy, nonatomic) NSDate *tokenExpirationDate;

/* instance methods */
- (id)initWithNonce:(id)nonce unblindedSignature:(id)signature serverConfigId:(id)id tokenExpirationDate:(id)date;
@end

#endif /* ACSToken_h */
