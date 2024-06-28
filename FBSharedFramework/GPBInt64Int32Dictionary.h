//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef GPBInt64Int32Dictionary_h
#define GPBInt64Int32Dictionary_h
@import Foundation;

#include "GPBDictionaryInternalsProtocol-Protocol.h"
#include "GPBMessage.h"
#include "NSCopying-Protocol.h"

@class NSMutableDictionary;

@interface GPBInt64Int32Dictionary : NSObject<GPBDictionaryInternalsProtocol, NSCopying> {
  /* instance variables */
  GPBMessage *_autocreator;
  NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) unsigned long long count;

/* instance methods */
- (id)init;
- (id)initWithInt32s:(const int *)int32s forKeys:(const long long *)keys count:(unsigned long long)count;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithCapacity:(unsigned long long)capacity;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (void)enumerateKeysAndInt32sUsingBlock:(id /* block */)block;
- (unsigned long long)computeSerializedSizeAsField:(id)field;
- (void)writeToCodedOutputStream:(id)stream asField:(id)field;
- (void)setGPBGenericValue:(union  *)value forGPBGenericValueKey:(union  *)key;
- (void)enumerateForTextFormat:(id /* block */)format;
- (BOOL)getInt32:(int *)int32 forKey:(long long)key;
- (void)addEntriesFromDictionary:(id)dictionary;
- (void)setInt32:(int)int32 forKey:(long long)key;
- (void)removeInt32ForKey:(long long)key;
- (void)removeAll;
@end

#endif /* GPBInt64Int32Dictionary_h */
