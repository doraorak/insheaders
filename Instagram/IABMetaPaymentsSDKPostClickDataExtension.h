//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IABMetaPaymentsSDKPostClickDataExtension_h
#define IABMetaPaymentsSDKPostClickDataExtension_h
@import Foundation;

#include "FBValueObject.h"
#include "MetaPaymentsSDKCheckoutSetupPayload.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface IABMetaPaymentsSDKPostClickDataExtension : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) MetaPaymentsSDKCheckoutSetupPayload *checkoutSetupPayload;

/* instance methods */
- (id)initWithCheckoutSetupPayload:(id)payload;
@end

#endif /* IABMetaPaymentsSDKPostClickDataExtension_h */
