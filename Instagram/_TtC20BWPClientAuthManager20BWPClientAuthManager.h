//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC20BWPClientAuthManager20BWPClientAuthManager_h
#define _TtC20BWPClientAuthManager20BWPClientAuthManager_h
@import Foundation;

@interface _TtC20BWPClientAuthManager20BWPClientAuthManager : NSObject { // (Swift)
  /* instance variables */
   extraData;
   gqlServiceToken;
   logger;
   service;
   window;
   webAuthSession;
}

/* instance methods */
- (id)init:(id)init window:(id)window logger:(id)logger extraData:(id)data;
- (id)init:(id)init logger:(id)logger extraData:(id)data;
- (void)loadSessionWith:(id)with completionHandler:(id /* block */)handler;
- (void)exchangeTokenFrom:(id)from completionHandler:(id /* block */)handler;
- (void)getLoginURLWithCompletionHandler:(id /* block */)handler;
- (void)refreshTokenWithCompletionHandler:(id /* block */)handler;
- (void)refreshTokenWithExtraLoggingParams:(id)params completionHandler:(id /* block */)handler;
- (void)setAccessTokenInBWPStorageCacheManagerWithAccessToken:(id)token expiryTime:(long long)time;
- (id)getAccessTokenFromBWPStorageCacheManager;
- (BOOL)isCacheEmpty;
- (BOOL)isCachedTokenExpired:(long long)expired;
- (long long)getExpiryTimeWithBufferInSecs:(long long)secs;
- (id)init;
@end

#endif /* _TtC20BWPClientAuthManager20BWPClientAuthManager_h */
