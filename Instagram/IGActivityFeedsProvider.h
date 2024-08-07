//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActivityFeedsProvider_h
#define IGActivityFeedsProvider_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGNetworkSourceProviding-Protocol.h"
#include "IGNewsInboxStoryParser.h"
#include "IGUserLauncherSet-Protocol.h"

@class NSString;
@protocol IGNetworkSourceContainerProvider;

@interface IGActivityFeedsProvider : NSObject<IGNetworkSourceProviding> {
  /* instance variables */
  NSObject<IGAPIClient> *_networker;
  IGNewsInboxStoryParser *_inboxParser;
  NSObject<IGUserLauncherSet> *_launcherSet;
  NSString *_userPK;
}

@property (weak, nonatomic) NSObject<IGNetworkSourceContainerProvider> *containerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)resolveIdentifierForObject:(id)object;
- (id)resolveCacheIdentifierForObject:(id)object;
- (id)cacheStore;
- (BOOL)useProxyNetworker;
- (void)configurateContainerBuilder:(id)builder proxyNetworker:(id)networker identifier:(id)identifier object:(id)object;
- (id)continuousFetchConfigs;
- (void)shouldPerformContiniousFetchLookaheadRequest:(id)request cacheInfo:(id)info entryPoint:(long long)point shouldFetchBlock:(id /* block */)block;
@end

#endif /* IGActivityFeedsProvider_h */
