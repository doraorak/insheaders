//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchNullStateStore_h
#define IGSearchNullStateStore_h
@import Foundation;

#include "IGKeywordsBootstrapStore.h"
#include "IGObjectDiskStorage.h"
#include "IGSearchNullStateFetcher.h"
#include "IGUserLauncherSet-Protocol.h"
#include "NSObject-Protocol.h"

@class NSArray, NSDate, NSMutableDictionary, NSString;
@protocol IGSearchNullStateStoreDelegate;

@interface IGSearchNullStateStore : NSObject<NSObject> {
  /* instance variables */
  NSDate *_lastSyncTime;
  BOOL _needsUpdate;
  IGSearchNullStateFetcher *_searchNullStateFetcher;
  long long _popularKeywordNullStateStyle;
  long long _searchType;
  IGKeywordsBootstrapStore *_popularKeywordsBootstrapStore;
  IGObjectDiskStorage *_diskStorage;
  BOOL _popularKeywordOnEmptySerpEnabled;
  long long _emptySerpSuggestionsStyle;
  NSObject<IGUserLauncherSet> *_launcherSet;
  NSMutableDictionary *_chainingRequestTokensByUser;
  BOOL _nullstateFetchClientTtlEnabled;
  long long _nullstateFetchClientTtlInHours;
  NSObject<IGSearchNullStateStoreDelegate> *_searchNullStateStoreDelegate;
  NSArray *_placeholderModels;
}

@property (readonly, copy, nonatomic) NSArray *suggestions;
@property (readonly, copy, nonatomic) NSArray *suggestedUsers;
@property (readonly, copy, nonatomic) NSArray *sections;
@property (nonatomic) long long chainingExpansionCount;
@property (readonly, copy, nonatomic) NSString *rankToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUser:(id)user userStore:(id)store networker:(id)networker launcherSet:(id)set keywordsBootstrapStore:(id)store searchType:(long long)type diskManager:(id)manager;
- (void)removeSuggestionAtIndex:(long long)index;
- (void)updateSection:(id)section withNewSection:(id)section;
- (void)clearCache;
- (void)fetchAccountsRecsHelperForUser:(id)user withSession:(id)session success:(id /* block */)success failure:(id /* block */)failure;
- (void)cancelAccountsRecsFetchTokenForUser:(id)user;
- (void)didFinishFetch:(id)fetch;
@end

#endif /* IGSearchNullStateStore_h */
