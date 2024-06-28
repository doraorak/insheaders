//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBrandedContentAllowlistedPartnersNullStateDataSource_h
#define IGBrandedContentAllowlistedPartnersNullStateDataSource_h
@import Foundation;

#include "IGEditSearchResultDelegate-Protocol.h"
#include "IGSearchNullStateDataProvider-Protocol.h"
#include "IGSearchNullStateSuggestionsFetcher-Protocol.h"
#include "IGSearchSuggestedUsersDelegate-Protocol.h"

@class IGAutocompleteBrandedContentStore, IGUserSession, NSString;
@protocol IGBrandedContentAllowlistedPartnersNullStateDataSourceDelegate;

@interface IGBrandedContentAllowlistedPartnersNullStateDataSource : NSObject<IGSearchNullStateDataProvider> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_analyticsModule;
  NSObject<IGSearchNullStateSuggestionsFetcher> *_suggestionsFetcher;
  IGAutocompleteBrandedContentStore *_brandedContentStore;
}

@property (weak, nonatomic) NSObject<IGBrandedContentAllowlistedPartnersNullStateDataSourceDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGEditSearchResultDelegate> *editSearchResultsDelegate;
@property (weak, nonatomic) NSObject<IGSearchSuggestedUsersDelegate> *searchSuggestedUsersDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module;
- (id)nullStateModels;
- (id)suggestionsFetcher;
- (void)clearNullStateCache;
- (void)_didTapSeeAllButton;
@end

#endif /* IGBrandedContentAllowlistedPartnersNullStateDataSource_h */
