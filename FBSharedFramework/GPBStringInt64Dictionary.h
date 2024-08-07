//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef GPBStringInt64Dictionary_h
#define GPBStringInt64Dictionary_h
@import Foundation;

#include "GPBDictionaryInternalsProtocol-Protocol.h"
#include "GPBMessage.h"
#include "NSCopying-Protocol.h"

@class NSMutableDictionary;

@interface GPBStringInt64Dictionary : NSObject<GPBDictionaryInternalsProtocol, NSCopying> {
  /* instance variables */
  GPBMessage *_autocreator;
  NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) unsigned long long count;

/* instance methods */
- (id)init;
- (id)initWithInt64s:(const long long *)int64s forKeys:(id *)keys count:(unsigned long long)count;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithCapacity:(unsigned long long)capacity;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (void)enumerateKeysAndInt64sUsingBlock:(id /* block */)block;
- (unsigned long long)computeSerializedSizeAsField:(id)field;
- (void)writeToCodedOutputStream:(id)stream asField:(id)field;
- (void)setGPBGenericValue:(union  *)value forGPBGenericValueKey:(union  *)key;
- (void)enumerateForTextFormat:(id /* block */)format;
- (BOOL)getInt64:(long long *)int64 forKey:(id)key;
- (void)addEntriesFromDictionary:(id)dictionary;
- (void)setInt64:(long long)int64 forKey:(id)key;
- (void)removeInt64ForKey:(id)key;
- (void)removeAll;
@end

#endif /* GPBStringInt64Dictionary_h */
