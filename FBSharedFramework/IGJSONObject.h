//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGJSONObject_h
#define IGJSONObject_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDictionary;

@interface IGJSONObject : NSObject<NSCopying> {
  /* instance variables */
  NSDictionary *_dict;
}

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copy;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)allKeys;
- (unsigned long long)count;
- (id)stringForKey:(id)key;
- (id)objectForKey:(id)key;
- (id)arrayForKey:(id)key;
- (id)objectForKeyedSubscript:(id)subscript;
@end

#endif /* IGJSONObject_h */
