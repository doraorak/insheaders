//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContextualFeedServiceDefaultProvider_h
#define IGContextualFeedServiceDefaultProvider_h
@import Foundation;

#include "IGContextualFeedService-Protocol.h"
#include "IGFeedNetworkSource.h"
#include "IGFeedNetworkSourceDelegate-Protocol.h"
#include "IGFeedStatusViewDataSource-Protocol.h"
#include "IGSessionTracker.h"

@class NSArray, NSMutableArray, NSString;
@protocol IGContextualFeedServiceDelegate;

@interface IGContextualFeedServiceDefaultProvider : NSObject<IGFeedNetworkSourceDelegate, IGContextualFeedService, IGFeedStatusViewDataSource> {
  /* instance variables */
  IGFeedNetworkSource *_feedNetworkSource;
  NSArray *_rightBarButtonItems;
  IGSessionTracker *_sessionTracker;
  NSMutableArray *_sponsoredAdItems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGContextualFeedServiceDelegate> *delegate;

/* instance methods */
- (id)initWithFeedNetworkSource:(id)source rightBarButtonItems:(id)items sessionTracker:(id)tracker;
- (BOOL)fetchData;
- (unsigned long long)itemCount;
- (BOOL)fetchMoreItems;
- (BOOL)isFullyLoaded;
- (BOOL)isFetchingMore;
- (BOOL)moreAvailable;
- (id)allItemsVisibleAfter:(id)after;
- (id)posts;
- (id)sessionTracker;
- (long long)authorizationError;
- (id)errorMessage;
- (void)removePivot:(id)pivot;
- (void)fetchMediaMetadata:(id)metadata;
- (id)rightBarButtonItemsWithViewController:(id)controller;
- (void)feedNetworkSource:(id)source didStartLoadingWithConfig:(id)config;
- (void)feedNetworkSource:(id)source didReceiveFeedResponse:(id)response forRequestConfig:(id)config;
- (void)feedNetworkSource:(id)source didFinishLoadingWithConfig:(id)config success:(BOOL)success error:(id)error httpResponse:(id)response;
- (void)feedNetworkSource:(id)source didChangeToObjects:(id)objects;
- (void)feedNetworkSource:(id)source didCancelRequestForRequestConfig:(id)config;
- (long long)feedStatusViewFeedStatus;
- (BOOL)feedStatusViewIsFeedLoadedOnce;
- (unsigned long long)feedStatusViewFeedItemsCount;
- (id)feedStatusViewEmptyFeedModel;
- (id)feedStatusViewErrorMessage;
- (id)feedStatusViewErrorSubtitle;
- (long long)feedStatusViewAuthorizationError;
- (id)feedStatusViewAuthorizationErrorMessage;
- (id)feedStatusViewAuthorizationErrorMessageDetail;
- (void)insertSponsoredAdItem:(id)item atIndex:(long long)index;
- (void)clearAllSponsoredItems;
- (BOOL)hasFetchedWithGraphQL;
@end

#endif /* IGContextualFeedServiceDefaultProvider_h */
