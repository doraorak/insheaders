//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef GPBInt64Array_h
#define GPBInt64Array_h
@import Foundation;

#include "GPBMessage.h"
#include "NSCopying-Protocol.h"

@interface GPBInt64Array : NSObject<NSCopying> {
  /* instance variables */
  GPBMessage *_autocreator;
  long long * _values;
  unsigned long long _capacity;
}

@property (readonly, nonatomic) unsigned long long count;

/* class methods */
+ (id)array;
+ (id)arrayWithValue:(long long)value;
+ (id)arrayWithValueArray:(id)array;
+ (id)arrayWithCapacity:(unsigned long long)capacity;

/* instance methods */
- (id)init;
- (id)initWithValueArray:(id)array;
- (id)initWithValues:(const long long *)values count:(unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)capacity;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (void)enumerateValuesWithBlock:(id /* block */)block;
- (void)enumerateValuesWithOptions:(unsigned long long)options usingBlock:(id /* block */)block;
- (long long)valueAtIndex:(unsigned long long)index;
- (void)internalResizeToCapacity:(unsigned long long)capacity;
- (void)addValue:(long long)value;
- (void)addValues:(const long long *)values count:(unsigned long long)count;
- (void)insertValue:(long long)value atIndex:(unsigned long long)index;
- (void)replaceValueAtIndex:(unsigned long long)index withValue:(long long)value;
- (void)addValuesFromArray:(id)array;
- (void)removeValueAtIndex:(unsigned long long)index;
- (void)removeAll;
- (void)exchangeValueAtIndex:(unsigned long long)index withValueAtIndex:(unsigned long long)index;
@end

#endif /* GPBInt64Array_h */
