//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialAdsSharedPool_h
#define IGSundialAdsSharedPool_h
@import Foundation;

@class NSLock, NSMutableArray, NSMutableDictionary;

@interface IGSundialAdsSharedPool : NSObject {
  /* instance variables */
  NSMutableArray *_cachedSponsoredItems;
  NSMutableDictionary *_topAdMap;
  NSLock *_adLock;
}

/* instance methods */
- (id)initWithUserScopedObjects:(id)objects;
@end

#endif /* IGSundialAdsSharedPool_h */