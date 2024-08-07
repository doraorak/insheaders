//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserListNetworkDataSourceFriendListResponseParser_h
#define IGUserListNetworkDataSourceFriendListResponseParser_h
@import Foundation;

#include "IGObjectStores.h"

@protocol FriendListResponseFragment;

@interface IGUserListNetworkDataSourceFriendListResponseParser : NSObject {
  /* instance variables */
  NSObject<FriendListResponseFragment> *_friendListResponseFragment;
  IGObjectStores *_objectStores;
  BOOL _parallizeTypeModelConversion;
}

/* instance methods */
- (id)initWithFragment:(id)fragment objectStores:(id)stores parallizeTypeModelConversion:(BOOL)conversion;
- (id)allUsers;
- (id)moreUsers;
- (id)pendingAdmins;
- (id)userListGroups;
- (BOOL)shouldLimitListOfFollowers;
- (BOOL)shouldShowSeeMore;
- (BOOL)moreUsersAvailable;
- (id)maxID;
- (id)suggestions;
- (id)totalUsersCount;
- (id)anonymousUserCount;
- (id)disclaimerText;
- (id)postImpressionCount;
- (id)followRequestItem;
- (id)truncateUserListAtIndex;
- (long long)totalHashtagCount;
- (id)hashtagPreviewModel;
- (id)mediaInfo;
- (id)globalStoryBlocklistCount;
- (BOOL)globalStoryBlocklistSampleHasValue;
- (id)globalStoryBlocklistSampleUsers;
- (BOOL)mediaForUsersHasValue;
- (id)mediaForUsers;
- (BOOL)userHasHiddenGroups;
@end

#endif /* IGUserListNetworkDataSourceFriendListResponseParser_h */
