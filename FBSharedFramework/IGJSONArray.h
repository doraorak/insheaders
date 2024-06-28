//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGJSONArray_h
#define IGJSONArray_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray;

@interface IGJSONArray : NSObject<NSCopying> {
  /* instance variables */
  NSArray *_array;
}

/* class methods */
+ (id)array;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copy;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)index;
- (id)objectAtIndexedSubscript:(unsigned long long)subscript;
@end

#endif /* IGJSONArray_h */