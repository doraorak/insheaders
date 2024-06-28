//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialFeedTrendsOnlyGraphQLFetcher_h
#define IGSundialFeedTrendsOnlyGraphQLFetcher_h
@import Foundation;

#include "IGFeedNetworkFetcherError.h"
#include "IGFeedNetworkSourceCoreSessionDeps.h"
#include "IGFeedRequestConfig-Protocol.h"
#include "IGMediaStore.h"
#include "NSObject-Protocol.h"
#include "PNPandoGraphQLService.h"

@class NSDate, NSString;
@protocol IGFeedNetworkFetcherDelegate, IGFeedNetworkGraphQLFetchedDataDelegate;

@interface IGSundialFeedTrendsOnlyGraphQLFetcher : NSObject<NSObject> {
  /* instance variables */
  PNPandoGraphQLService *_pandoGraphQLService;
  IGMediaStore *_mediaStore;
  IGFeedNetworkSourceCoreSessionDeps *_coreSessionDeps;
  NSString *_timeSinceLastHeadLoadFetchKey;
}

@property (weak, nonatomic) NSObject<IGFeedNetworkFetcherDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGFeedNetworkGraphQLFetchedDataDelegate> *dataDelegate;
@property (readonly, nonatomic) NSString *fetchPath;
@property (readonly) NSObject<IGFeedRequestConfig> *currentRequestConfig;
@property (copy) NSString *nextMaxID;
@property (readonly, nonatomic) NSDate *lastHeadLoadFetchDate;
@property (readonly, nonatomic) IGFeedNetworkFetcherError *lastFetchError;
@property (readonly, nonatomic) BOOL hasFetchedWithGraphQL;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) BOOL isLoading;
@property (readonly, nonatomic) BOOL canLoadMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)logRESTFieldsMissingOnGraphQLQuery:(id)qlquery;

/* instance methods */
- (id)initWithPandoGraphQLService:(id)qlservice mediaStore:(id)store dataDelegate:(id)delegate nextMaxID:(id)id coreSessionDeps:(id)deps delegate:(id)delegate;
- (BOOL)fetchDataWithConfig:(id)config requestDelegate:(id)delegate qplJoinURLType:(unsigned long long)urltype;
- (void)updateStreamingQueuePriority_experimental;
- (void)_handleSuccessWithParsedResponse:(id)response config:(id)config;
- (void)_handleFailureOnMainThreadWithError:(id)error config:(id)config;
- (void)_handleFailureWithError:(id)error config:(id)config;
- (void)_setLastHeadLoadFetchDate:(id)date;
- (void)_loadLastHeadLoadFetchDate;
- (void)_updateNextMaxIDIfNeededForResponse:(id)response requestConfig:(id)config;
@end

#endif /* IGSundialFeedTrendsOnlyGraphQLFetcher_h */