//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBusinessDiversityInfoCache_h
#define IGBusinessDiversityInfoCache_h
@import Foundation;

#include "IGShoppingObjectsCache.h"

@interface IGBusinessDiversityInfoCache : NSObject {
  /* instance variables */
  unsigned long long _cacheTTL;
  IGShoppingObjectsCache *_internalCache;
}

/* instance methods */
- (id)initWithTTL:(unsigned long long)ttl;
- (id)objectForKeyedSubscript:(id)subscript;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
@end

#endif /* IGBusinessDiversityInfoCache_h */
