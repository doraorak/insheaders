//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationProductProfileAdsBlockListAccountsSearchCacheDataSource_h
#define IGMonetizationProductProfileAdsBlockListAccountsSearchCacheDataSource_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@interface IGMonetizationProductProfileAdsBlockListAccountsSearchCacheDataSource : NSObject<NSObject>

@property (nonatomic) unsigned long long searchSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)cachedItemsForSearchText:(id)text;
- (id)cachedItemsForSearchText:(id)text serverResultsExist:(BOOL)exist;
- (id)cachedItemsAllowedForDelayWithSearchText:(id)text;
- (long long)typeaheadClientCacheSourceType;
- (id)onDeviceSuggestionsItemsForSearchText:(id)text;
- (BOOL)isDelayEnabled;
@end

#endif /* IGMonetizationProductProfileAdsBlockListAccountsSearchCacheDataSource_h */
