//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef OCMGraphConfiguration_h
#define OCMGraphConfiguration_h
@import Foundation;

@class NSMutableDictionary;

@interface OCMGraphConfiguration : NSObject {
  /* instance variables */
  NSMutableDictionary *_providersByKey;
}

/* instance methods */
- (id)init;
- (void)addValue:(id)value forKey:(id)key;
- (void)addWeakValue:(id)value forKey:(id)key;
- (void)addProvider:(id /* block */)provider forKey:(id)key;
- (id)allKeys;
- (id /* block */)providerForKey:(id)key;
- (id /* block */)resolveProviderForKey:(id)key configurationContext:(id)context shouldMemoize:(BOOL *)memoize;
@end

#endif /* OCMGraphConfiguration_h */
