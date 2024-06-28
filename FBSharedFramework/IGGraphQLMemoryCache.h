//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGraphQLMemoryCache_h
#define IGGraphQLMemoryCache_h
@import Foundation;

#include "IGLRUCache.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGGraphQLMemoryCache : NSObject<NSObject>

@property (readonly, nonatomic) IGLRUCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)setCachedResponseForRequest:(id)request response:(id)response;
- (id)getCachedResponseForRequest:(id)request hitCompletionHandler:(id /* block */)handler missCompletionHandler:(id /* block */)handler;
- (void)removeCachedResponseForRequest:(id)request;
@end

#endif /* IGGraphQLMemoryCache_h */