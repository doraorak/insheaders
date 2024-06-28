//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SCPSelfieCaptureFlowControllerState_h
#define SCPSelfieCaptureFlowControllerState_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "SCPSelfieCapturedData.h"

@interface SCPSelfieCaptureFlowControllerState : NSObject<NSCopying> {
  /* instance variables */
  unsigned long long _subtype;
  SCPSelfieCapturedData *_confirmation_capturedData;
}

/* class methods */
+ (id)initialized;
+ (id)capture;
+ (id)confirmationWithCapturedData:(id)data;
+ (id)onboarding;
+ (id)permissionGranting;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)matchInitialized:(id /* block */)initialized onboarding:(id /* block */)onboarding permissionGranting:(id /* block */)granting capture:(id /* block */)capture confirmation:(id /* block */)confirmation;
@end

#endif /* SCPSelfieCaptureFlowControllerState_h */
