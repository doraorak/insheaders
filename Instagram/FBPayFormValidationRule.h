//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayFormValidationRule_h
#define FBPayFormValidationRule_h
@import Foundation;

@class NSString;

@interface FBPayFormValidationRule : NSObject {
  /* instance variables */
  NSString *_errorMessage;
  long long _typeAttribute;
  NSString *_value;
}

/* instance methods */
- (id)initWithErrorMessage:(id)message typeAttribute:(long long)attribute value:(id)value;
@end

#endif /* FBPayFormValidationRule_h */
