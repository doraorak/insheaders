//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKPrepackagedBundleStore_h
#define BKPrepackagedBundleStore_h
@import Foundation;

#include "BKPrepackagedBundleLoader.h"

@protocol BKPrepackagedPayloadFetcher;

@interface BKPrepackagedBundleStore : NSObject {
  /* instance variables */
  BKPrepackagedBundleLoader *_bundleLoader;
  NSObject<BKPrepackagedPayloadFetcher> *_payloadFetcher;
}

/* instance methods */
- (id)initWithResponseQueue:(id)queue;
- (id)initWithPayloadFetcher:(id)fetcher;
- (id)fetchPayloadForBundle:(id)bundle objectSet:(id)set completion:(id /* block */)completion failure:(id /* block */)failure;
- (id)bundleForAppID:(id)id;
- (unsigned long long)bundleTypeForAppID:(id)id;
@end

#endif /* BKPrepackagedBundleStore_h */