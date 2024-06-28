//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef JKDictionaryEnumerator_h
#define JKDictionaryEnumerator_h
@import Foundation;

#include "NSEnumerator.h"

@interface JKDictionaryEnumerator : NSEnumerator {
  /* instance variables */
  id collection;
  unsigned int nextObject;
}

/* instance methods */
- (id)initWithJKDictionary:(id)jkdictionary;
- (void)dealloc;
- (id)allObjects;
- (id)nextObject;
@end

#endif /* JKDictionaryEnumerator_h */