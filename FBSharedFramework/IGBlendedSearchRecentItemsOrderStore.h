//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBlendedSearchRecentItemsOrderStore_h
#define IGBlendedSearchRecentItemsOrderStore_h
@import Foundation;

#include "IGAutoCompleteUsersStore.h"
#include "IGFriendStatusReceivedListener-Protocol.h"
#include "IGObjectDiskStorage.h"
#include "IGRecentSearchStore.h"
#include "IGScopeEnding-Protocol.h"

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSString;

@interface IGBlendedSearchRecentItemsOrderStore : NSObject<IGFriendStatusReceivedListener, IGScopeEnding> {
  /* instance variables */
  IGAutoCompleteUsersStore *_autocompleteUsersStore;
  IGRecentSearchStore *_recentPlacesStore;
  IGRecentSearchStore *_recentHashtagsStore;
  IGRecentSearchStore *_recentKeywordStore;
  IGRecentSearchStore *_recentKeywordEchoStore;
  IGRecentSearchStore *_recentAudiosStore;
  NSArray *_sectionControllers;
  BOOL _needsToBeArchived;
  IGObjectDiskStorage *_storageBlendedSearch;
  NSMutableArray *_recentAudioSearches;
  IGObjectDiskStorage *_storageAudioSearch;
  NSMutableOrderedSet *_mutableRecentItems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAutocompleteUsersStore:(id)store recentPlacesStore:(id)store recentHashtagsStore:(id)store recentKeywordStore:(id)store recentKeywordEchoStore:(id)store recentAudiosStore:(id)store diskManager:(id)manager friendStatusReceivedAnnouncer:(id)announcer;
- (void)_didEnterBackground:(id)background;
- (void)friendStatusReceiverForUser:(id)user;
- (void)bulkFriendStatusesReceivedForUsers:(id)users;
- (id)recentItems;
- (void)removeUser:(id)user;
- (void)scopeWillEnd;
@end

#endif /* IGBlendedSearchRecentItemsOrderStore_h */
