//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoveryMapSearchNullStateDataSource_h
#define IGDiscoveryMapSearchNullStateDataSource_h
@import Foundation;

#include "IGEditSearchResultDelegate-Protocol.h"
#include "IGGenericSearchCustomParametersProvider-Protocol.h"
#include "IGSearchNetworkDataProvider-Protocol.h"
#include "IGSearchNetworkDataProviderDelegate-Protocol.h"
#include "IGSearchNullStateDataProvider-Protocol.h"
#include "IGSearchNullStateSuggestionsFetcher-Protocol.h"
#include "IGSearchSuggestedUsersDelegate-Protocol.h"

@class IGUserSession, NSArray, NSString;
@protocol IGDiscoveryMapDataSourceCoordinatesProvider, IGEditSearchResultsProvider;

@interface IGDiscoveryMapSearchNullStateDataSource : NSObject<IGSearchNullStateDataProvider, IGSearchNullStateSuggestionsFetcher, IGGenericSearchCustomParametersProvider, IGSearchNetworkDataProviderDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_analyticsModule;
  NSObject<IGEditSearchResultsProvider> *_editSearchResultsProvider;
  NSObject<IGDiscoveryMapDataSourceCoordinatesProvider> *_coordinateProvider;
  id /* block */ _successHandler;
  id /* block */ _failureHandler;
  NSObject<IGSearchNetworkDataProvider> *_searchNetworkDataProvider;
  NSArray *_categories;
  BOOL _didLoad;
}

@property (weak, nonatomic) NSObject<IGEditSearchResultDelegate> *editSearchResultsDelegate;
@property (weak, nonatomic) NSObject<IGSearchSuggestedUsersDelegate> *searchSuggestedUsersDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module editSearchResultsProvider:(id)provider coordinateProvider:(id)provider;
- (id)nullStateModels;
- (id)suggestionsFetcher;
- (void)clearNullStateCache;
- (void)_onDidTapSeeAllButton;
- (void)fetchNullStateSuggestionsWithUserSession:(id)session successHandler:(id /* block */)handler failureHandler:(id /* block */)handler;
- (BOOL)canFetchNextPage;
- (id)genericSearchCustomParameters;
- (void)networkDataSource:(id)source didBeginFetchForSearchText:(id)text;
- (void)networkDataSource:(id)source didFinishFetchForSearchText:(id)text resultsResponse:(id)response isFromPagination:(BOOL)pagination clearClientCache:(BOOL)cache disableLogging:(BOOL)logging;
- (void)networkDataSource:(id)source cachedResultsForSearchText:(id)text resultsResponse:(id)response serverResultsLoaded:(BOOL)loaded;
- (void)networkDataSource:(id)source didFailForSearchText:(id)text;
- (void)networkDataSource:(id)source didFinishFetchForSearchTextAfterSearchQueryChanged:(id)changed results:(id)results rankToken:(id)token;
- (void)networkDataSourceDidThrottleNetworkRequest:(id)request searchText:(id)text;
@end

#endif /* IGDiscoveryMapSearchNullStateDataSource_h */
