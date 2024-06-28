//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationPhoneNumberValidationResult_h
#define IGRegistrationPhoneNumberValidationResult_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSString;

@interface IGRegistrationPhoneNumberValidationResult : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_loginableWithOneTapAccount_validLoginNonce;
  NSString *_loginableWithFBAccount_fbPhoneNumber;
  NSString *_suggestedPhoneNumber;
}

/* class methods */
+ (id)loginableWithFBAccountWithFbPhoneNumber:(id)number;
+ (id)loginableWithOneTapAccountWithValidLoginNonce:(id)nonce;
+ (id)okToProceed;
+ (id)suggestedPhoneNumber:(id)number;

/* instance methods */
@end

#endif /* IGRegistrationPhoneNumberValidationResult_h */
