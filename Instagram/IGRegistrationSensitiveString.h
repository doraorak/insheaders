//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationSensitiveString_h
#define IGRegistrationSensitiveString_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface IGRegistrationSensitiveString : NSObject<NSCopying> {
  /* instance variables */
  NSString *_sensitiveString;
}

/* instance methods */
- (id)initWithString:(id)string;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGRegistrationSensitiveString_h */