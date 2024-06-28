//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef GPBUInt64EnumDictionary_h
#define GPBUInt64EnumDictionary_h
@import Foundation;

#include "GPBDictionaryInternalsProtocol-Protocol.h"
#include "GPBMessage.h"
#include "NSCopying-Protocol.h"

@class NSMutableDictionary;

@interface GPBUInt64EnumDictionary : NSObject<GPBDictionaryInternalsProtocol, NSCopying> {
  /* instance variables */
  GPBMessage *_autocreator;
  NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) undefined * validationFunc;

/* instance methods */
- (id)init;
- (id)initWithValidationFunction:(undefined *)function;
- (id)initWithValidationFunction:(undefined *)function rawValues:(const int *)values forKeys:(const unsigned long long *)keys count:(unsigned long long)count;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithValidationFunction:(undefined *)function capacity:(unsigned long long)capacity;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (void)enumerateKeysAndRawValuesUsingBlock:(id /* block */)block;
- (unsigned long long)computeSerializedSizeAsField:(id)field;
- (void)writeToCodedOutputStream:(id)stream asField:(id)field;
- (id)serializedDataForUnknownValue:(int)value forKey:(union  *)key keyDataType:(unsigned char)type;
- (void)setGPBGenericValue:(union  *)value forGPBGenericValueKey:(union  *)key;
- (void)enumerateForTextFormat:(id /* block */)format;
- (BOOL)getEnum:(int *)enum forKey:(unsigned long long)key;
- (BOOL)getRawValue:(int *)value forKey:(unsigned long long)key;
- (void)enumerateKeysAndEnumsUsingBlock:(id /* block */)block;
- (void)addRawEntriesFromDictionary:(id)dictionary;
- (void)setRawValue:(int)value forKey:(unsigned long long)key;
- (void)removeEnumForKey:(unsigned long long)key;
- (void)removeAll;
- (void)setEnum:(int)enum forKey:(unsigned long long)key;
@end

#endif /* GPBUInt64EnumDictionary_h */
