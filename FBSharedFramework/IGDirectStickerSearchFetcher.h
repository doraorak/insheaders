//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectStickerSearchFetcher_h
#define IGDirectStickerSearchFetcher_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGDirectInteropFeatureGating-Protocol.h"
#include "IGDirectStickerStoringService.h"
#include "IGGiphyDataStoreUpdating-Protocol.h"
#include "IGObjectStores.h"
#include "IGStickerSearchResponse.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class NSDictionary, NSString;

@interface IGDirectStickerSearchFetcher : NSObject {
  /* instance variables */
  NSString *_userPk;
  NSObject<IGAPIClient> *_networker;
  NSObject<IGDirectInteropFeatureGating> *_interopFeatureGating;
  NSObject<IGGiphyDataStoreUpdating> *_giphyDataStoreUpdater;
  IGDirectStickerStoringService *_stickerStoringService;
  IGObjectStores *_objectStores;
  IGStickerSearchResponse *_response;
  NSDictionary *_avatarSearchInfo;
  NSObject<IGUserLauncherSetProviding> *_launcherSetProvider;
}

/* instance methods */
- (id)initWithNetworker:(id)networker interopFeatureGating:(id)gating giphyDataStoreUpdater:(id)updater stickerStoringService:(id)service objectStores:(id)stores launcherSetProvider:(id)provider userPk:(id)pk;
@end

#endif /* IGDirectStickerSearchFetcher_h */
