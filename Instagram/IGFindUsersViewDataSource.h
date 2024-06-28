//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFindUsersViewDataSource_h
#define IGFindUsersViewDataSource_h
@import Foundation;

#include "IGFeedStatusViewDataSource-Protocol.h"
#include "IGFindUsersViewDataSourceDelegate-Protocol.h"

@class IGBulkMediaRequestManager, IGUserSession, NSArray, NSString;
@protocol IGUserListCacheable;

@interface IGFindUsersViewDataSource : NSObject<IGFeedStatusViewDataSource> {
  /* instance variables */
  BOOL _eagerlyFetchesProfilePictures;
  BOOL _eagerlyFetchesThumbnails;
  NSObject<IGUserListCacheable> *_userListCache;
}

@property (retain, nonatomic) IGBulkMediaRequestManager *requestManager;
@property BOOL loading;
@property (retain, nonatomic) NSArray *featuredUserInfoList;
@property (nonatomic) BOOL moreAvailable;
@property (retain, nonatomic) NSString *maxId;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (weak, nonatomic) NSObject<IGFindUsersViewDataSourceDelegate> *delegate;
@property (nonatomic) long long status;
@property (nonatomic) long long authorizationError;
@property (copy, nonatomic) NSString *errorMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session userListCache:(id)cache;
- (void)fetchListWithRequest:(id)request;
- (void)fetchMoreWithRequest:(id)request;
- (id)parseListResponse:(id)response withItemKey:(id)key;
- (void)fetchList;
- (void)fetchMore;
- (unsigned long long)itemCount;
- (BOOL)loadedOnce;
- (long long)feedStatusViewFeedStatus;
- (BOOL)feedStatusViewIsFeedLoadedOnce;
- (unsigned long long)feedStatusViewFeedItemsCount;
- (long long)feedStatusViewAuthorizationError;
- (id)feedStatusViewEmptyFeedModel;
- (id)feedStatusViewErrorMessage;
- (id)feedStatusViewAuthorizationErrorMessage;
- (id)feedStatusViewAuthorizationErrorMessageDetail;
- (id)feedStatusViewErrorSubtitle;
- (BOOL)isLoading;
@end

#endif /* IGFindUsersViewDataSource_h */