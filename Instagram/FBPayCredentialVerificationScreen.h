//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayCredentialVerificationScreen_h
#define FBPayCredentialVerificationScreen_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray, NSAttributedString, NSString;

@interface FBPayCredentialVerificationScreen : NSObject<NSObject> {
  /* instance variables */
  NSString *_screenDescription;
  NSString *_editFieldTitle;
}

@property (readonly, copy, nonatomic) NSAttributedString *terms;
@property (readonly, copy, nonatomic) NSString *actionButtonText;
@property (readonly, copy, nonatomic) NSArray *errorMessages;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTitle:(id)title subtitle:(id)subtitle screenDescription:(id)description terms:(id)terms editFieldTitle:(id)title actionButtonText:(id)text errorMessage:(id)message;
@end

#endif /* FBPayCredentialVerificationScreen_h */