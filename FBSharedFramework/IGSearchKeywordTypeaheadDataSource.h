//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchKeywordTypeaheadDataSource_h
#define IGSearchKeywordTypeaheadDataSource_h
@import Foundation;

#include "IGSearchCacheDelayManager.h"
#include "IGSearchLoadingStateModelsProvider-Protocol.h"
#include "IGSearchNetworkDataProvider-Protocol.h"
#include "IGSearchNetworkDataProviderDelegate-Protocol.h"
#include "IGSearchResultsResponse.h"
#include "IGSearchTypeaheadSearchResultViewModelProvider-Protocol.h"
#include "IGUserSession.h"

@class NSString;
@protocol IGSearchKeywordTypeaheadCacheProvider, IGSearchKeywordTypeaheadDataProviderDelegate;

@interface IGSearchKeywordTypeaheadDataSource : NSObject<IGSearchNetworkDataProviderDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGSearchNetworkDataProvider> *_networkDataSource;
  NSObject<IGSearchKeywordTypeaheadCacheProvider> *_cacheProvider;
  NSObject<IGSearchTypeaheadSearchResultViewModelProvider> *_searchResultViewModelProvider;
  NSObject<IGSearchLoadingStateModelsProvider> *_loadingStateProvider;
  NSString *_analyticsModule;
  NSString *_loadedAndCanShowBoldingSearchText;
  BOOL _shouldShowKeywordShimmerCells;
  IGSearchResultsResponse *_searchResultsResponse;
  IGSearchCacheDelayManager *_cacheDelayManager;
  long long _cacheDelayMinCharCount;
  double _delayTime;
  long long _typeaheadBalanceVariant;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long searchResultState;
@property (readonly, copy, nonatomic) NSString *rankToken;
@property (weak, nonatomic) NSObject<IGSearchKeywordTypeaheadDataProviderDelegate> *delegate;
@property (nonatomic) struct CGSize { double x0; double x1; } containerSize;

/* instance methods */
- (id)initWithUserSession:(id)session networkDataSource:(id)source cacheProvider:(id)provider searchResultViewModelProvider:(id)provider loadingStateProvider:(id)provider analyticsModule:(id)module;
- (id)models;
- (void)loadResultsForSearchText:(id)text;
- (void)clearResults;
- (BOOL)isMetaAIHeuristicEnabled:(id)enabled;
- (BOOL)isMetaAIPromptEchoDisabled;
- (void)networkDataSource:(id)source didBeginFetchForSearchText:(id)text;
- (void)networkDataSource:(id)source didFinishFetchForSearchText:(id)text resultsResponse:(id)response isFromPagination:(BOOL)pagination clearClientCache:(BOOL)cache disableLogging:(BOOL)logging;
- (void)networkDataSource:(id)source didFinishFetchForSearchTextAfterSearchQueryChanged:(id)changed results:(id)results rankToken:(id)token;
- (void)networkDataSource:(id)source cachedResultsForSearchText:(id)text resultsResponse:(id)response serverResultsLoaded:(BOOL)loaded;
- (void)networkDataSource:(id)source didFailForSearchText:(id)text;
- (void)networkDataSourceDidThrottleNetworkRequest:(id)request searchText:(id)text;
- (void)searchCacheDelayManager:(id)manager didFinishDelayForQuery:(id)query;
@end

#endif /* IGSearchKeywordTypeaheadDataSource_h */