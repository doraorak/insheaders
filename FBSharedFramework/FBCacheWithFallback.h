//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCacheWithFallback_h
#define FBCacheWithFallback_h
@import Foundation;

#include "FBCache.h"

@class NSCache;

@interface FBCacheWithFallback : NSObject {
  /* instance variables */
  NSCache *_nsCache;
  FBCache *_fbCache;
  BOOL _useFallback;
}

/* instance methods */
- (id)initWithCapacity:(unsigned long long)capacity totalCostLimit:(unsigned long long)limit maximumCost:(unsigned long long)cost cacheName:(id)name useFallback:(BOOL)fallback;
- (void)setObject:(id)object forKey:(id)key;
- (id)objectForKey:(id)key;
- (void)removeObjectForKey:(id)key;
@end

#endif /* FBCacheWithFallback_h */