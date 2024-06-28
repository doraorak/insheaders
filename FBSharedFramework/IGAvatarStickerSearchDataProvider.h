//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAvatarStickerSearchDataProvider_h
#define IGAvatarStickerSearchDataProvider_h
@import Foundation;

#include "IGAvatarStickerSearchCacheProvider.h"
#include "IGSearchTypeaheadDataSource.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGAvatarStickerSearchDataProviderDelegate;

@interface IGAvatarStickerSearchDataProvider : NSObject<NSObject> {
  /* instance variables */
  NSString *_queryText;
  IGAvatarStickerSearchCacheProvider *_cacheDataSource;
  IGSearchTypeaheadDataSource *_typeaheadDataSource;
}

@property (weak, nonatomic) NSObject<IGAvatarStickerSearchDataProviderDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session surface:(id)surface entryPoint:(long long)point stickerPackType:(long long)type threadParticipantIds:(id)ids isEligibleForSocialStickers:(BOOL)stickers;
- (void)invalidateCache;
- (void)searchTypeaheadDataProviderDidUpdateItems:(id)items;
- (void)searchTypeaheadDataProvider:(id)provider didFailToLoadSearchQuery:(id)query;
- (void)searchTypeaheadDataProvider:(id)provider didFinishFetchWithSearchQuery:(id)query numItems:(long long)items;
- (id)currentSearchTextForSearchTypeaheadDataProvider:(id)provider;
- (void)searchTypeaheadDataProviderDidFinishLoading:(id)loading disableLogging:(BOOL)logging;
- (void)searchTypeaheadDataProvider:(id)provider didFinishFetchAfterSearchQueryChanged:(id)changed rankToken:(id)token numFetchedResults:(long long)results;
- (id)searchSessionIDForSearchTypeaheadDataProvider:(id)provider;
- (void)searchTypeaheadDataProvider:(id)provider didBeginFetchWithSearchQuery:(id)query;
- (void)searchTypeaheadDataProvider:(id)provider didThrottleWithSearchQuery:(id)query;
@end

#endif /* IGAvatarStickerSearchDataProvider_h */
