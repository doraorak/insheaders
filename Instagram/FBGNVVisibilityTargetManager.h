//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBGNVVisibilityTargetManager_h
#define FBGNVVisibilityTargetManager_h
@import Foundation;

#include "FBGNVVisibilityTargetConfigProvider-Protocol.h"

@class NSMutableDictionary, NSString;

@interface FBGNVVisibilityTargetManager : NSObject {
  /* instance variables */
  NSMutableDictionary *_caches;
  NSString *_latestUsedCacheKey;
}

@property (retain, nonatomic) NSObject<FBGNVVisibilityTargetConfigProvider> *defaultConfig;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (void)resizeCacheSizeIfNeeded:(unsigned long long)needed;
- (id)visibilityTargetForProvider:(id)provider moduleCacheKey:(id)key;
- (void)removeVisibilityTargetForProvider:(id)provider moduleCacheKey:(id)key;
- (void)applicationDidEnterBackground:(id)background;
- (void)applicationDidBecomeActive:(id)active;
@end

#endif /* FBGNVVisibilityTargetManager_h */
