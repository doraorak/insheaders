//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCoWatchReelsFetcher_h
#define IGCoWatchReelsFetcher_h
@import Foundation;

#include "IGFeedNetworkSourceDelegate-Protocol.h"

@class IGFeedNetworkSource, IGUserSession, NSString;
@protocol IGCoWatchReelsFetcherDelegate;

@interface IGCoWatchReelsFetcher : NSObject<IGFeedNetworkSourceDelegate> {
  /* instance variables */
  IGFeedNetworkSource *_networkSource;
  IGUserSession *_userSession;
}

@property (weak, nonatomic) NSObject<IGCoWatchReelsFetcherDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session networkSource:(id)source;
- (id)initWithUserSession:(id)session useReelsTogetherEndPoint:(BOOL)point initialMediaId:(id)id threadId:(id)id;
- (void)fetch;
- (void)feedNetworkSource:(id)source didReceiveFeedResponse:(id)response forRequestConfig:(id)config;
- (void)feedNetworkSource:(id)source didFinishLoadingWithConfig:(id)config success:(BOOL)success error:(id)error httpResponse:(id)response;
- (void)feedNetworkSource:(id)source didChangeToObjects:(id)objects;
- (void)feedNetworkSource:(id)source didStartLoadingWithConfig:(id)config;
- (void)feedNetworkSource:(id)source didCancelRequestForRequestConfig:(id)config;
@end

#endif /* IGCoWatchReelsFetcher_h */