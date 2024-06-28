//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef GHODictionary_h
#define GHODictionary_h
@import Foundation;

#include "NSFastEnumeration-Protocol.h"

@class NSMutableArray, NSMutableDictionary;

@interface GHODictionary : NSObject<NSFastEnumeration>

@property (retain) NSMutableArray *array;
@property (retain) NSMutableDictionary *dictionary;

/* class methods */
+ (id)dictionary;
+ (id)dictionaryWithDictionary:(id)dictionary;
+ (id)dictionaryWithCapacity:(unsigned long long)capacity;
+ (id)d:(id)d;

/* instance methods */
- (id)init;
- (id)initWithCapacity:(unsigned long long)capacity;
- (id)initWithDictionary:(id)dictionary;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)copy;
- (id)objectForKey:(id)key;
- (void)setObject:(id)object forKey:(id)key;
- (void)removeObjectForKey:(id)key;
- (id)toDictionary;
- (void)sortUsingSelector:(SEL)selector;
- (id)keyEnumerator;
- (id)reverseKeyEnumerator;
- (void)insertObject:(id)object forKey:(id)key atIndex:(unsigned long long)index;
- (id)keyAtIndex:(unsigned long long)index;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
- (id)objectForKeyedSubscript:(id)subscript;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id * x1; unsigned long long * x2; unsigned long long x3[5] } *)state objects:(id *)objects count:(unsigned long long)count;
- (void)sortKeysUsingSelector:(SEL)selector deepSort:(BOOL)sort;
- (id)allKeys;
- (void)addEntriesFromOrderedDictionary:(id)dictionary;
- (void)addEntriesFromDictionary:(id)dictionary;
- (void)addObject:(id)object forKey:(id)key;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)map:(id /* block */)map;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)block;
@end

#endif /* GHODictionary_h */