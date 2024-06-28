//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ACSStorageManager_Protocol_h
#define ACSStorageManager_Protocol_h
@import Foundation;

@protocol ACSStorageManager <NSObject>
/* instance methods */
- (id)getCachedTokenWithServerConfigId:(id)id;
- (void)storeCachedToken:(id)token;
- (void)storeCachedTokens:(id)tokens;
- (void)deleteCachedToken:(id)token;
- (id)getServerConfigWithId:(id)id;
- (id)getServerConfigs;
- (void)storeServerConfig:(id)config;
- (void)removeServerConfigWithId:(id)id;
- (long long)estimatedNumberOfCachedTokens;
@end

#endif /* ACSStorageManager_Protocol_h */
