//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTopicStore_h
#define IGTopicStore_h
@import Foundation;

#include "IGObjectStore.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGTopicStore : NSObject<NSObject> {
  /* instance variables */
  IGObjectStore *_objectStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFeatureSets:(id)sets;
- (id)constructInstanceWithPK:(id)pk staleTree:(id)tree;
- (BOOL)updateInstance:(id)instance withDictionary:(id)dictionary;
@end

#endif /* IGTopicStore_h */
