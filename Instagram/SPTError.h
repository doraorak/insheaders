//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SPTError_h
#define SPTError_h
@import Foundation;

#include "NSError.h"

@interface SPTError : NSError
/* class methods */
+ (id)errorWithCode:(unsigned long long)code;
+ (id)errorWithCode:(unsigned long long)code description:(id)description;
+ (id)errorWithCode:(unsigned long long)code underlyingError:(id)error;
+ (id)errorWithCode:(unsigned long long)code userInfo:(id)info;
@end

#endif /* SPTError_h */