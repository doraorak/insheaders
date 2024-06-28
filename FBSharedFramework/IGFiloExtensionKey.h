//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFiloExtensionKey_h
#define IGFiloExtensionKey_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface IGFiloExtensionKey : NSObject<NSCopying> {
  /* instance variables */
  SEL _selector;
  const char * _name;
}

/* instance methods */
- (id)initWithSelector:(SEL)selector;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* IGFiloExtensionKey_h */
