//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGHashtagContextualFeedService_h
#define IGHashtagContextualFeedService_h
@import Foundation;

#include "IGContextualFeedService-Protocol.h"
#include "IGFeedStatusViewDataSource-Protocol.h"
#include "IGHashtagNetworker.h"
#include "IGHashtagNetworkerDelegate-Protocol.h"

@class IGHashtagFeedDataStore, IGHashtagModel, IGSessionTracker, NSString;
@protocol IGContextualFeedServiceDelegate;

@interface IGHashtagContextualFeedService : NSObject<IGHashtagNetworkerDelegate, IGContextualFeedService, IGFeedStatusViewDataSource> {
  /* instance variables */
  IGHashtagNetworker *_hashtagNetworker;
  IGSessionTracker *_sessionTracker;
  IGHashtagModel *_hashtagModel;
  NSString *_targetMediaId;
}

@property (readonly, nonatomic) IGHashtagFeedDataStore *dataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGContextualFeedServiceDelegate> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session sessionTracker:(id)tracker hashtagModel:(id)model dataStore:(id)store targetMediaId:(id)id;
- (BOOL)fetchData;
- (BOOL)fetchMoreItems;
- (BOOL)isFullyLoaded;
- (BOOL)isFetchingMore;
- (BOOL)hasFetchedWithGraphQL;
- (id)allItemsVisibleAfter:(id)after;
- (id)posts;
- (id)sessionTracker;
- (long long)authorizationError;
- (id)errorMessage;
- (id)rightBarButtonItemsWithViewController:(id)controller;
- (unsigned long long)itemCount;
- (BOOL)moreAvailable;
- (long long)feedStatusViewFeedStatus;
- (BOOL)feedStatusViewIsFeedLoadedOnce;
- (unsigned long long)feedStatusViewFeedItemsCount;
- (id)feedStatusViewEmptyFeedModel;
- (id)feedStatusViewErrorMessage;
- (long long)feedStatusViewAuthorizationError;
- (id)feedStatusViewAuthorizationErrorMessage;
- (id)feedStatusViewAuthorizationErrorMessageDetail;
- (id)feedStatusViewErrorSubtitle;
- (void)removePivot:(id)pivot;
- (void)fetchMediaMetadata:(id)metadata;
- (void)insertSponsoredAdItem:(id)item atIndex:(long long)index;
- (void)clearAllSponsoredItems;
- (void)hashtagNetworker:(id)networker didStartLoadingWithConfig:(id)config networkRequestType:(long long)type;
- (void)hashtagNetworker:(id)networker didCompleteInfoRequest:(id)request config:(id)config;
- (void)hashtagNetworker:(id)networker didCompleteMainFeedRequest:(id)request config:(id)config;
- (void)hashtagNetworker:(id)networker didFailDataRequest:(id)request networkRequestType:(long long)type config:(id)config;
@end

#endif /* IGHashtagContextualFeedService_h */