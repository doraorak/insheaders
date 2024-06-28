//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef GPBBoolObjectDictionary_h
#define GPBBoolObjectDictionary_h
@import Foundation;

#include "GPBDictionaryInternalsProtocol-Protocol.h"
#include "GPBMessage.h"
#include "NSCopying-Protocol.h"

@interface GPBBoolObjectDictionary : NSObject<GPBDictionaryInternalsProtocol, NSCopying> {
  /* instance variables */
  GPBMessage *_autocreator;
  id _values[2];
}

@property (readonly, nonatomic) unsigned long long count;

/* instance methods */
- (id)init;
- (id)initWithObjects:(const id *)objects forKeys:(const BOOL *)keys count:(unsigned long long)count;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithCapacity:(unsigned long long)capacity;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)objectForKey:(BOOL)key;
- (void)setGPBGenericValue:(union  *)value forGPBGenericValueKey:(union  *)key;
- (void)enumerateForTextFormat:(id /* block */)format;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)block;
- (BOOL)isInitialized;
- (id)deepCopyWithZone:(struct _NSZone *)zone;
- (unsigned long long)computeSerializedSizeAsField:(id)field;
- (void)writeToCodedOutputStream:(id)stream asField:(id)field;
- (void)addEntriesFromDictionary:(id)dictionary;
- (void)setObject:(id)object forKey:(BOOL)key;
- (void)removeObjectForKey:(BOOL)key;
- (void)removeAll;
@end

#endif /* GPBBoolObjectDictionary_h */
