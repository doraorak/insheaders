//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGObjectDictionaryStore_h
#define IGObjectDictionaryStore_h
@import Foundation;

#include "IGKeyPathsComparisonLogger.h"
#include "NSObject-Protocol.h"

@class NSMapTable, NSString;

@interface IGObjectDictionaryStore : NSObject<NSObject> {
  /* instance variables */
  NSMapTable *_storableObjectsToReducedDictionaries;
  IGKeyPathsComparisonLogger *_logger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)updateDictionaryForInstance:(id)instance withDictionary:(id)dictionary;
@end

#endif /* IGObjectDictionaryStore_h */
