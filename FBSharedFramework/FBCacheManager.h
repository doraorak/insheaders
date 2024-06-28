//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCacheManager_h
#define FBCacheManager_h
@import Foundation;

@class NSHashTable, NSMapTable;

@interface FBCacheManager : NSObject {
  /* instance variables */
  NSHashTable *_caches;
  NSMapTable *_cacheMap;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _mutex;
  BOOL _enabled;
}

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)cache:(id)cache changedNameFromName:(id)name;
- (void)_receivedMemoryLimitStateChangeNotification:(id)notification;
- (void)_receivedMemoryPressureStateChangeNotification:(id)notification;
- (void)receivedEnterBackgroundNotification;
@end

#endif /* FBCacheManager_h */