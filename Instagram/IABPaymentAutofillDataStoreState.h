//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IABPaymentAutofillDataStoreState_h
#define IABPaymentAutofillDataStoreState_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface IABPaymentAutofillDataStoreState : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) BOOL paymentAutofillAlreadyAcceptedForOriginHost;
@property (readonly, nonatomic) BOOL paymentAutofillAlreadyPromptedForOriginHost;
@property (readonly, nonatomic) BOOL hasPaymentAutofillData;
@property (readonly, nonatomic) BOOL hasUserOptedOut;
@property (readonly, nonatomic) BOOL hasUserOptIn;
@property (readonly, nonatomic) BOOL hasReachedMaxDeclinesInSession;
@property (readonly, nonatomic) BOOL isUserEligibleForReOptIn;

/* instance methods */
- (id)initWithPaymentAutofillAlreadyAcceptedForOriginHost:(BOOL)host paymentAutofillAlreadyPromptedForOriginHost:(BOOL)host hasPaymentAutofillData:(BOOL)data hasUserOptedOut:(BOOL)out hasUserOptIn:(BOOL)in hasReachedMaxDeclinesInSession:(BOOL)session isUserEligibleForReOptIn:(BOOL)in;
@end

#endif /* IABPaymentAutofillDataStoreState_h */
