//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGObjectStore_h
#define IGObjectStore_h
@import Foundation;

@class NSMapTable;
@protocol IGAPIStorableObjectTreeMerging, IGObjectDictionaryStoring, IGObjectStoreDelegate, OS_dispatch_queue;

@interface IGObjectStore : NSObject {
  /* instance variables */
  NSMapTable *_objects;
  NSMapTable *_objectFutures;
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_queue> *_futureQueue;
  NSObject<IGAPIStorableObjectTreeMerging> *_treeMerging;
  NSObject<IGObjectDictionaryStoring> *_objectDictionaryStore;
}

@property (weak, nonatomic) NSObject<IGObjectStoreDelegate> *delegate;

/* instance methods */
- (id)initWithObjectDictionaryStore:(id)store treeMerging:(id)merging;
- (void)dealloc;
- (id)storedObjectWithPK:(id)pk;
- (id)objectWithPK:(id)pk;
- (id)objectWithPk:(id)pk stalePandoTree:(id)tree;
- (id)objectWithDict:(id)dict;
- (id)objectWithTree:(id)tree error:(id *)error;
- (id)objectWithStaleTree:(id)tree error:(id *)error;
- (id)allObjects;
- (void)clear;
@end

#endif /* IGObjectStore_h */
