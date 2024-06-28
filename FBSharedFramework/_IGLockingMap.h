//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _IGLockingMap_h
#define _IGLockingMap_h
@import Foundation;

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface _IGLockingMap : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSMutableDictionary *_map;
}

/* instance methods */
- (id)init;
- (void)setStorable:(id)storable forKey:(id)key;
- (void)setStorables:(id)storables forKey:(id)key;
- (void)setFetcher:(id)fetcher forKey:(id)key;
- (void)setFetchers:(id)fetchers forKey:(id)key;
- (id)storableForKey:(id)key;
- (id)storablesForKey:(id)key;
- (id)fetcherForKey:(id)key;
- (id)fetchersForKey:(id)key;
- (id)mapCopy;
- (long long)count;
@end

#endif /* _IGLockingMap_h */
