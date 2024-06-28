//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKPrepackagedBundleLoader_h
#define BKPrepackagedBundleLoader_h
@import Foundation;

@class NSMutableDictionary;

@interface BKPrepackagedBundleLoader : NSObject {
  /* instance variables */
  undefined * _localeProvider;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _mutex;
  NSMutableDictionary *_bundleCache;
}

/* instance methods */
- (id)initWithLocaleProvider:(undefined *)provider;
- (id)init;
- (id)bundleForAppID:(id)id;
- (id)parseJSONBundleMetadata:(id)metadata appID:(id)id;
@end

#endif /* BKPrepackagedBundleLoader_h */