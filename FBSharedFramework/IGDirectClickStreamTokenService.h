//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectClickStreamTokenService_h
#define IGDirectClickStreamTokenService_h
@import Foundation;

#include "IGDirectClickStreamTokenDataStore.h"
#include "IGDirectRecipientClickStreamTokenTrie.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGDirectClickStreamTokenService : NSObject<NSObject> {
  /* instance variables */
  IGDirectRecipientClickStreamTokenTrie *_clickStreamTokenTrie;
  IGDirectClickStreamTokenDataStore *_fetcher;
  BOOL _isRefreshingClickStreamTokens;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDataStore:(id)store;
- (void)clickStreamTokenStore:(id)store didRestoreClickStreamTokens:(id)tokens;
- (void)clickStreamTokenStore:(id)store didFetchClickStreamTokens:(id)tokens;
- (void)clickStreamTokenStore:(id)store didFailToFetchClickStreamTokens:(id)tokens;
- (void)clickStreamTokenStoreDidFinishLoadingWithNoUpdates:(id)updates;
@end

#endif /* IGDirectClickStreamTokenService_h */
