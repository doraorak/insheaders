//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayComponentPaymentMethodSelectionConfiguration_h
#define FBPayComponentPaymentMethodSelectionConfiguration_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface FBPayComponentPaymentMethodSelectionConfiguration : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) BOOL shouldCollectFullBillingAddress;
@property (readonly, nonatomic) BOOL shouldOrderNewOptionsFirst;
@property (readonly, nonatomic) BOOL shouldDeprioritizeCreditCards;
@property (readonly, nonatomic) BOOL shouldEnableOSAutofill;
@property (readonly, nonatomic) BOOL shouldUseCardArtStyling;

/* instance methods */
- (id)initWithShouldCollectFullBillingAddress:(BOOL)address shouldOrderNewOptionsFirst:(BOOL)first shouldDeprioritizeCreditCards:(BOOL)cards shouldEnableOSAutofill:(BOOL)osautofill shouldUseCardArtStyling:(BOOL)styling;
@end

#endif /* FBPayComponentPaymentMethodSelectionConfiguration_h */
