//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDjangoGiphyDataSource_h
#define IGDjangoGiphyDataSource_h
@import Foundation;

#include "IGDirectStickerSearchFetcher.h"
#include "IGGiphyDataStoreUpdating-Protocol.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGDjangoGiphyDataSource : NSObject<NSObject> {
  /* instance variables */
  IGDirectStickerSearchFetcher *_stickerFetcher;
  unsigned long long _itemTypes;
  unsigned long long _requestSurface;
  NSObject<IGGiphyDataStoreUpdating> *_giphyDataStoreUpdater;
  long long _productType;
  BOOL _isInstamadilloCutover;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNetworker:(id)networker interopFeatureGating:(id)gating giphyDataStoreUpdater:(id)updater stickerStoringService:(id)service objectStores:(id)stores launcherSetProvider:(id)provider userPk:(id)pk productType:(long long)type itemTypes:(unsigned long long)types requestSurface:(unsigned long long)surface isInstamadilloCutover:(BOOL)cutover;
- (id)fetchTrendingWithSessionId:(id)id mediaId:(id)id completion:(id /* block */)completion;
- (id)fetchTrendingWithSessionId:(id)id mediaId:(id)id forceFetchFromNetworkAndCache:(BOOL)cache completion:(id /* block */)completion;
- (id)searchWithTerm:(id)term sessionId:(id)id completion:(id /* block */)completion;
- (id)searchWithTerm:(id)term sessionId:(id)id forceFetchFromNetworkAndCache:(BOOL)cache completion:(id /* block */)completion;
- (BOOL)_shouldQueryGiphyDirectly;
@end

#endif /* IGDjangoGiphyDataSource_h */
