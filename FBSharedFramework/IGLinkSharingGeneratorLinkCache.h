//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLinkSharingGeneratorLinkCache_h
#define IGLinkSharingGeneratorLinkCache_h
@import Foundation;

@class NSMutableDictionary;

@interface IGLinkSharingGeneratorLinkCache : NSObject {
  /* instance variables */
  NSMutableDictionary *_linkSharingURLCache;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _cacheMutex;
}

/* instance methods */
- (id)init;
- (id)linkSharingCacheObjectForMediaId:(id)id;
- (void)setLinkSharingCacheObject:(id)object forMediaId:(id)id;
@end

#endif /* IGLinkSharingGeneratorLinkCache_h */
