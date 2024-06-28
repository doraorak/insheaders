//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLRUCache_h
#define IGLRUCache_h
@import Foundation;

@class NSMutableDictionary, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface IGLRUCache : NSObject {
  /* instance variables */
  id /* block */ _completion;
  long long _totalCost;
  NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (readonly, nonatomic) NSMutableDictionary *objects;
@property (readonly, nonatomic) NSMutableOrderedSet *queue;
@property (nonatomic) long long totalCostLimit;

/* instance methods */
- (id)initWithTotalCostLimit:(long long)limit onEviction:(id /* block */)eviction;
- (id)initWithTotalCostLimit:(long long)limit;
- (id)dictionaryValue;
- (id)objectForKey:(id)key;
- (void)setObject:(id)object forKey:(id)key cost:(long long)cost;
- (void)removeObjectForKey:(id)key;
- (id)removeAllObjects;
@end

#endif /* IGLRUCache_h */