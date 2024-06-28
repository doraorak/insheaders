//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSuggestedFindUsersViewDataSource_h
#define IGSuggestedFindUsersViewDataSource_h
@import Foundation;

#include "IGFindUsersViewDataSource.h"

@class IGUserSession, NSString;

@interface IGSuggestedFindUsersViewDataSource : IGFindUsersViewDataSource {
  /* instance variables */
  unsigned long long _requestType;
  BOOL _displayStory;
  BOOL _friendCenterHoldout;
  BOOL _shouldPaginate;
  NSString *_entryFeedItemType;
}

@property (readonly, copy, nonatomic) NSString *module;
@property (readonly, nonatomic) IGUserSession *userSession;

/* instance methods */
- (id)initWithDisplayStories:(BOOL)stories userSession:(id)session userListCache:(id)cache module:(id)module requestType:(unsigned long long)type shouldPaginate:(BOOL)paginate entryFeedItemType:(id)type;
- (id)parseListResponse:(id)response withItemKey:(id)key;
- (void)fetchList;
- (void)fetchMore;
- (unsigned long long)requestType;
@end

#endif /* IGSuggestedFindUsersViewDataSource_h */