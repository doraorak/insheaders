//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef GPBAutocreatedArray_h
#define GPBAutocreatedArray_h
@import Foundation;

#include "NSMutableArray.h"
#include "GPBMessage.h"

@class NSMutableArray;

@interface GPBAutocreatedArray : NSMutableArray {
  /* instance variables */
  GPBMessage *_autocreator;
  NSMutableArray *_array;
}

/* instance methods */
- (void)dealloc;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)index;
- (void)insertObject:(id)object atIndex:(unsigned long long)index;
- (void)removeObject:(id)object;
- (void)removeObjectAtIndex:(unsigned long long)index;
- (void)addObject:(id)object;
- (void)removeLastObject;
- (void)replaceObjectAtIndex:(unsigned long long)index withObject:(id)object;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (unsigned long long)countByEnumeratingWithState:(struct  *)state objects:(id *)objects count:(unsigned long long)count;
- (void)enumerateObjectsUsingBlock:(id /* block */)block;
- (void)enumerateObjectsWithOptions:(unsigned long long)options usingBlock:(id /* block */)block;
@end

#endif /* GPBAutocreatedArray_h */
