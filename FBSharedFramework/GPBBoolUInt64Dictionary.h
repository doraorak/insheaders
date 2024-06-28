//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef GPBBoolUInt64Dictionary_h
#define GPBBoolUInt64Dictionary_h
@import Foundation;

#include "GPBDictionaryInternalsProtocol-Protocol.h"
#include "GPBMessage.h"
#include "NSCopying-Protocol.h"

@interface GPBBoolUInt64Dictionary : NSObject<GPBDictionaryInternalsProtocol, NSCopying> {
  /* instance variables */
  GPBMessage *_autocreator;
  unsigned long long _values[2];
  BOOL _valueSet[2];
}

@property (readonly, nonatomic) unsigned long long count;

/* instance methods */
- (id)init;
- (id)initWithUInt64s:(const unsigned long long *)uint64s forKeys:(const BOOL *)keys count:(unsigned long long)count;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithCapacity:(unsigned long long)capacity;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (BOOL)getUInt64:(unsigned long long *)uint64 forKey:(BOOL)key;
- (void)setGPBGenericValue:(union  *)value forGPBGenericValueKey:(union  *)key;
- (void)enumerateForTextFormat:(id /* block */)format;
- (void)enumerateKeysAndUInt64sUsingBlock:(id /* block */)block;
- (unsigned long long)computeSerializedSizeAsField:(id)field;
- (void)writeToCodedOutputStream:(id)stream asField:(id)field;
- (void)addEntriesFromDictionary:(id)dictionary;
- (void)setUInt64:(unsigned long long)uint64 forKey:(BOOL)key;
- (void)removeUInt64ForKey:(BOOL)key;
- (void)removeAll;
@end

#endif /* GPBBoolUInt64Dictionary_h */
