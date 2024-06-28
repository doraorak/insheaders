//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchClientSideCachingConfiguration_h
#define IGSearchClientSideCachingConfiguration_h
@import Foundation;

@interface IGSearchClientSideCachingConfiguration : NSObject {
  /* instance variables */
  BOOL _queryCachingEnabled;
  BOOL _enableNullStateCaching;
  BOOL _enableSingleCharacterQueryCaching;
  unsigned long long _clientSideMatchingMaxResultCount;
  unsigned long long _bootstrapCacheMaxResultCount;
}

/* instance methods */
- (id)initWithQueryCachingEnabled:(BOOL)enabled enableNullStateCaching:(BOOL)caching bootstrapCacheMaxResultCount:(unsigned long long)count clientSideMatchingMaxResultCount:(unsigned long long)count;
@end

#endif /* IGSearchClientSideCachingConfiguration_h */