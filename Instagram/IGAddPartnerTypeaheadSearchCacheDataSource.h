//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAddPartnerTypeaheadSearchCacheDataSource_h
#define IGAddPartnerTypeaheadSearchCacheDataSource_h
@import Foundation;

#include "IGBrandedContentLocalDataSource.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGAddPartnerTypeaheadSearchCacheDataSource : NSObject<NSObject> {
  /* instance variables */
  IGBrandedContentLocalDataSource *_localBrandedContentDataSource;
}

@property (nonatomic) unsigned long long searchSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (id)cachedItemsForSearchText:(id)text;
- (id)cachedItemsForSearchText:(id)text serverResultsExist:(BOOL)exist;
- (id)cachedItemsAllowedForDelayWithSearchText:(id)text;
- (id)onDeviceSuggestionsItemsForSearchText:(id)text;
- (long long)typeaheadClientCacheSourceType;
- (BOOL)isDelayEnabled;
@end

#endif /* IGAddPartnerTypeaheadSearchCacheDataSource_h */
