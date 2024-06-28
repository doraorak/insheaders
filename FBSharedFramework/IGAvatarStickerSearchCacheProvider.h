//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAvatarStickerSearchCacheProvider_h
#define IGAvatarStickerSearchCacheProvider_h
@import Foundation;

#include "IGSearchServerResultsStore.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGAvatarStickerSearchCacheProvider : NSObject<NSObject> {
  /* instance variables */
  IGSearchServerResultsStore *_searchResultStore;
}

@property (nonatomic) unsigned long long searchSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSearchResultStore:(id)store;
- (id)cachedItemsForSearchText:(id)text;
- (id)cachedItemsAllowedForDelayWithSearchText:(id)text;
- (id)cachedItemsForSearchText:(id)text serverResultsExist:(BOOL)exist;
- (id)onDeviceSuggestionsItemsForSearchText:(id)text;
- (BOOL)isDelayEnabled;
- (long long)typeaheadClientCacheSourceType;
@end

#endif /* IGAvatarStickerSearchCacheProvider_h */
