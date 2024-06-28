//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBValueObject_h
#define FBValueObject_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "NSCoding-Protocol.h"

@class NSMutableDictionary;

@interface FBValueObject : FBIvarBasedEqualityObject<NSCoding>

@property (retain) NSMutableDictionary *dynamicPropertyStorage;

/* class methods */
+ (BOOL)resolveInstanceMethod:(SEL)method;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* FBValueObject_h */