//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGuideAddPlaceSearchDataSource_h
#define IGGuideAddPlaceSearchDataSource_h
@import Foundation;

#include "IGSearchNetworkDataProviderDelegate-Protocol.h"

@class CLLocation, IGSearchNetworkDataSource, IGUserSession, NSArray, NSString;
@protocol IGGuideAddItemSearchDataSourceDelegate, IGGuideAddPlaceSearchResultSectionControllerDelegate;

@interface IGGuideAddPlaceSearchDataSource : NSObject<IGSearchNetworkDataProviderDelegate> {
  /* instance variables */
  NSString *_analyticsModule;
  CLLocation *_overrideLocation;
  IGSearchNetworkDataSource *_networkDataSource;
  NSString *_rankToken;
  NSArray *_displayedSearchResults;
  IGUserSession *_userSession;
}

@property (weak, nonatomic) NSObject<IGGuideAddPlaceSearchResultSectionControllerDelegate> *addPlaceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGGuideAddItemSearchDataSourceDelegate> *delegate;
@property (retain, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSString *searchPlaceholder;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module overrideLocation:(id)location;
- (BOOL)isLoading;
- (void)requestAuthorizationAndFetchEmptyState;
- (id)searchResultViewModels;
- (id)sectionControllerForSearchResultViewModel:(id)model;
- (void)networkDataSource:(id)source didBeginFetchForSearchText:(id)text;
- (void)networkDataSource:(id)source didFinishFetchForSearchText:(id)text resultsResponse:(id)response isFromPagination:(BOOL)pagination clearClientCache:(BOOL)cache disableLogging:(BOOL)logging;
- (void)networkDataSource:(id)source cachedResultsForSearchText:(id)text resultsResponse:(id)response serverResultsLoaded:(BOOL)loaded;
- (void)networkDataSource:(id)source didFinishFetchForSearchTextAfterSearchQueryChanged:(id)changed results:(id)results rankToken:(id)token;
- (void)networkDataSource:(id)source didFailForSearchText:(id)text;
- (void)networkDataSourceDidThrottleNetworkRequest:(id)request searchText:(id)text;
- (void)_onLocationAuthorized;
@end

#endif /* IGGuideAddPlaceSearchDataSource_h */