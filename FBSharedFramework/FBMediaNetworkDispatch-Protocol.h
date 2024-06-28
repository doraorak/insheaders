//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMediaNetworkDispatch_Protocol_h
#define FBMediaNetworkDispatch_Protocol_h
@import Foundation;

@protocol FBMediaNetworkDispatch <NSObject>
/* instance methods */
- (id)sendPostRequestWithURL:(id)url contentSource:(id)source offset:(unsigned long long)offset streamAnnouncer:(id)announcer dataCenter:(id)center isDuplicate:(BOOL)duplicate config:(id)config offProcessKey:(id)key delegate:(id)delegate callbackPerformer:(id)performer;
- (id)sendGetRequestWithURL:(id)url config:(id)config actorID:(id)id extraStringHeaders:(id)headers delegate:(id)delegate callbackPerformer:(id)performer;
- (id)sendSegmentStartRequestWithURL:(id)url config:(id)config delegate:(id)delegate callbackPerformer:(id)performer;
- (id)sendSegmentEndRequestWithURL:(id)url streamId:(id)id config:(id)config delegate:(id)delegate callbackPerformer:(id)performer;
- (id)sendSegmentEndRequestUsingGraphAPIWithStreamId:(id)id actorID:(id)id delegate:(id)delegate callbackPerformer:(id)performer;
- (id)sendSegmentCancelRequestWithURL:(id)url streamId:(id)id config:(id)config delegate:(id)delegate callbackPerformer:(id)performer;
- (id)sendGraphRequestWithPath:(id)path externalURL:(id)url config:(id)config delegate:(id)delegate callbackPerformer:(id)performer;
@end

#endif /* FBMediaNetworkDispatch_Protocol_h */