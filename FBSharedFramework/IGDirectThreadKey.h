//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadKey_h
#define IGDirectThreadKey_h
@import Foundation;

#include "IGDirectThreadKeyInternal.h"
#include "NSCopying-Protocol.h"

@interface IGDirectThreadKey : NSObject<NSCopying> {
  /* instance variables */
  IGDirectThreadKeyInternal *_internalThreadKey;
}

/* class methods */
+ (id)djangoThreadWithIdentifier:(id)identifier;
+ (id)msysThreadWithIdentifier:(id)identifier;
+ (id)cutoverThreadWithIdentifier:(id)identifier;
+ (id)djangoMsysMixedThreadWithIdentifier:(id)identifier;

/* instance methods */
- (id)initWithInternalThreadKey:(id)key;
- (void)matchDjangoThread:(id /* block */)thread msysThread:(id /* block */)thread cutoverThread:(id /* block */)thread djangoMsysMixedThread:(id /* block */)thread;
- (BOOL)mapToBoolWithDjangoThread:(id /* block */)thread msysThread:(id /* block */)thread cutoverThread:(id /* block */)thread djangoMsysMixedThread:(id /* block */)thread;
- (id)mapToStringWithDjangoThread:(id /* block */)thread msysThread:(id /* block */)thread cutoverThread:(id /* block */)thread djangoMsysMixedThread:(id /* block */)thread;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* IGDirectThreadKey_h */