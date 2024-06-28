//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchNullStateDataSource_h
#define IGSearchNullStateDataSource_h
@import Foundation;

#include "IGEditSearchResultDelegate-Protocol.h"
#include "IGSearchContactImportUpsellManager.h"
#include "IGSearchNullStateDataProvider-Protocol.h"
#include "IGSearchNullStateSuggestionsFetcher-Protocol.h"
#include "IGSearchSuggestedUsersDelegate-Protocol.h"

@class IGContactsUserStore, IGUserSession, NSString;
@protocol IGEditSearchResultsProvider;

@interface IGSearchNullStateDataSource : NSObject<IGSearchNullStateDataProvider> {
  /* instance variables */
  IGUserSession *_userSession;
  unsigned long long _searchType;
  NSString *_analyticsModule;
  NSObject<IGSearchNullStateSuggestionsFetcher> *_suggestionsFetcher;
  NSObject<IGEditSearchResultsProvider> *_editSearchResultsProvider;
  IGContactsUserStore *_contactsUserStore;
  IGSearchContactImportUpsellManager *_contactImportUpsellManager;
  long long _recentSearchItemsShownCount;
  BOOL _enableAccountSearchHistoryInNullstate;
  BOOL _didShuffleCloudModels;
}

@property (weak, nonatomic) NSObject<IGEditSearchResultDelegate> *editSearchResultsDelegate;
@property (weak, nonatomic) NSObject<IGSearchSuggestedUsersDelegate> *searchSuggestedUsersDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session searchType:(unsigned long long)type analyticsModule:(id)module suggestionsFetcher:(id)fetcher editSearchResultsProvider:(id)provider;
- (id)nullStateModels;
- (id)suggestionsFetcher;
- (void)clearNullStateCache;
- (void)_onDidTapLabelEditButton;
- (void)_onDidClickSeeAllSuggestedUsersButton;
@end

#endif /* IGSearchNullStateDataSource_h */