//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchTypeaheadPerformanceLoggerManager_h
#define IGSearchTypeaheadPerformanceLoggerManager_h
@import Foundation;

#include "IGSearchTypeaheadPerformanceLogger.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGSearchTypeaheadPerformanceLoggerManager : NSObject<NSObject> {
  /* instance variables */
  IGSearchTypeaheadPerformanceLogger *_searchPerformanceLogger;
}

@property (retain, nonatomic) NSString *searchSessionId;
@property (retain, nonatomic) NSString *serpSessionId;
@property (retain, nonatomic) NSString *tabType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSearchTypeString:(id)string;
- (void)searchResultsDisplayedWithSearchQuery:(id)query results:(id)results rankToken:(id)token typeAheadResultsState:(long long)state typeaheadIsLoading:(BOOL)loading;
- (void)markSearchNavigationExitWithIsSearchSerp:(BOOL)serp isLoading:(BOOL)loading;
- (void)markSearchRequestFailedWithSearchQuery:(id)query;
- (void)markSearchRequestCompleteWithNumFetchedResults:(long long)results searchQuery:(id)query;
- (void)markEndOfQuerySearchResultsNotDisplayedWithNumFetchedResults:(long long)results rankToken:(id)token searchQuery:(id)query;
- (void)markSearchQueryDidChange:(id)change searchSessionId:(id)id;
- (void)markSearchRequestStartWithSearchQuery:(id)query;
- (void)markSearchRequestThrottleWithSearchQuery:(id)query;
- (void)markSearchSerpChangeToTab:(id)tab searchQuery:(id)query;
- (void)searchResultsDisplayedWithSearchQuery:(id)query rankToken:(id)token hcmType:(id)type hasMedia:(BOOL)media;
- (void)markSearchSerpPaginationStartWithSearchQuery:(id)query;
@end

#endif /* IGSearchTypeaheadPerformanceLoggerManager_h */