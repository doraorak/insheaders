//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedNetworkFetcherCallbacks_h
#define IGFeedNetworkFetcherCallbacks_h
@import Foundation;

#include "IGFeedNetworkRequestDelegate-Protocol.h"

@class NSString;

@interface IGFeedNetworkFetcherCallbacks : NSObject<IGFeedNetworkRequestDelegate>

@property (readonly, nonatomic) id /* block */ shouldAllowLoadMoreRequest;
@property (readonly, nonatomic) id /* block */ startedPreparingRequest;
@property (readonly, nonatomic) id /* block */ startedLoading;
@property (readonly, nonatomic) id /* block */ receivedCachedResponse;
@property (readonly, nonatomic) id /* block */ receivedShellResponse;
@property (readonly, nonatomic) id /* block */ parsedResponse;
@property (readonly, nonatomic) id /* block */ receivedResponse;
@property (readonly, nonatomic) id /* block */ requestFailed;
@property (readonly, nonatomic) id /* block */ requestSucceeded;
@property (readonly, nonatomic) id /* block */ requestCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithShouldAllowLoadMoreRequest:(id /* block */)request startedPreparingRequest:(id /* block */)request startedLoading:(id /* block */)loading receivedCachedResponse:(id /* block */)response receivedShellResponse:(id /* block */)response parsedResponse:(id /* block */)response receivedResponse:(id /* block */)response requestFailed:(id /* block */)failed requestSucceeded:(id /* block */)succeeded requestCancelled:(id /* block */)cancelled;
- (void)feedNetworkRequestBuilderFromBuilder:(id)builder config:(id)config;
@end

#endif /* IGFeedNetworkFetcherCallbacks_h */