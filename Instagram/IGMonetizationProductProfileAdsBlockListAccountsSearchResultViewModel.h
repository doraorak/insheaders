//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationProductProfileAdsBlockListAccountsSearchResultViewModel_h
#define IGMonetizationProductProfileAdsBlockListAccountsSearchResultViewModel_h
@import Foundation;

#include "IGEditSearchResultDelegate-Protocol.h"
#include "IGMonetizationProductAdControlsBlockListDataSource.h"
#include "IGSearchNullStateDataProvider-Protocol.h"
#include "IGSearchSuggestedUsersDelegate-Protocol.h"
#include "IGSearchTypeaheadSearchResultViewModelProvider-Protocol.h"

@class IGUserSession, NSString;

@interface IGMonetizationProductProfileAdsBlockListAccountsSearchResultViewModel : NSObject<IGSearchTypeaheadSearchResultViewModelProvider, IGSearchNullStateDataProvider> {
  /* instance variables */
  IGUserSession *_userSession;
  IGMonetizationProductAdControlsBlockListDataSource *_dataSource;
  NSString *_analyticsModule;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGEditSearchResultDelegate> *editSearchResultsDelegate;
@property (weak, nonatomic) NSObject<IGSearchSuggestedUsersDelegate> *searchSuggestedUsersDelegate;

/* instance methods */
- (id)initWithUserSession:(id)session dataSource:(id)source analyticsModule:(id)module;
- (id)viewModelWithDataModel:(id)model sourceType:(unsigned long long)type userSession:(id)session analyticsModule:(id)module searchText:(id)text;
- (id)nullStateModels;
- (id)suggestionsFetcher;
- (void)clearNullStateCache;
@end

#endif /* IGMonetizationProductProfileAdsBlockListAccountsSearchResultViewModel_h */
