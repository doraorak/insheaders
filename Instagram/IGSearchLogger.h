//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchLogger_h
#define IGSearchLogger_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGSearchAnalyticsLogger, IGUserSession, NSString;

@interface IGSearchLogger : NSObject<NSObject> {
  /* instance variables */
  IGSearchAnalyticsLogger *_analyticsLogger;
  IGUserSession *_userSession;
  NSString *_analyticsModule;
  NSString *_searchType;
  NSString *_priorModule;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSearchAnalyticsLogger:(id)logger userSession:(id)session analyticsModule:(id)module searchType:(id)type priorModule:(id)module;
- (void)logSearchClickWithItem:(id)item selectPosition:(long long)position resultList:(id)list searchText:(id)text clickType:(id)type echoClickType:(id)type rankToken:(id)token resultsFullyLoaded:(BOOL)loaded;
- (void)logEchoClickWithSearchText:(id)text echoClickType:(id)type sourceType:(id)type rankToken:(id)token;
- (void)logSerpMediaResultsDisplayedWithSearchText:(id)text serpSource:(id)source rankToken:(id)token isMixedSerpContent:(BOOL)content;
- (void)logSerpClickWithItem:(id)item selectPosition:(long long)position resultList:(id)list searchText:(id)text clickType:(id)type rankToken:(id)token fromEmptySerp:(BOOL)serp isMixedContentSerp:(BOOL)serp;
- (void)logSerpButtonClickWithItem:(id)item selectPosition:(long long)position resultList:(id)list searchText:(id)text clickType:(id)type rankToken:(id)token fromEmptySerp:(BOOL)serp isMixedContentSerp:(BOOL)serp;
- (void)logSerpHCMClickWithSearchText:(id)text rankToken:(id)token selectedType:(id)type selectedId:(id)id shoppingSessionId:(id)id typecode:(id)typecode;
- (void)logSearchClickOnAvatarWithItem:(id)item selectPosition:(long long)position searchText:(id)text rankToken:(id)token;
- (void)logKeywordRecommendationItem:(id)item;
- (void)logSearchResultsDisplayedWithSearchText:(id)text resultList:(id)list searchTime:(id)time rankToken:(id)token;
- (id)navigationExtrasForSearchResult:(id)result searchText:(id)text searchSession:(id)session resultList:(id)list rankToken:(id)token;
- (id)navigationExtrasForNearbyPlacesWithSearchText:(id)text searchSession:(id)session resultList:(id)list rankToken:(id)token;
- (void)logNearbyPlacesTapWithSearchText:(id)text rankToken:(id)token;
- (void)logSeeMoreClickWithQuery:(id)query rankToken:(id)token;
- (void)logSearchHCMAudioTapWithAudioAsset:(id)asset tapToken:(id)token;
- (void)logSearchBoostDisclosureImpressionWithSearchQuery:(id)query;
- (void)logSearchBoostDisclosureClickWithSearchQuery:(id)query;
- (void)logSearchUpsellWithSearchText:(id)text selectedID:(id)id selectPosition:(long long)position selectedType:(id)type clickType:(id)type;
- (id)shoppingSessionId;
- (id)serpSessionId;
- (id)priorSerpSessionId;
- (id)priorQuery;
- (id)followAttributionEntryTrigger;
@end

#endif /* IGSearchLogger_h */
