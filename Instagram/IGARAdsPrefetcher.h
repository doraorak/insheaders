//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGARAdsPrefetcher_h
#define IGARAdsPrefetcher_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGUserLauncherSet-Protocol.h"

@class FBGraphQLService, IGARDeliveryFacade, IGAREffectFlmConsentManager, IGAREffectRemoveController, IGAREffectSaveController, IGAssetModelStorage, IGCameraLogger, IGGraphQLService, NSMutableSet, NSString, PNPandoGraphQLService;
@protocol FBARFilterDownloading, IGGraphQLCache;

@interface IGARAdsPrefetcher : NSObject {
  /* instance variables */
  NSObject<IGUserLauncherSet> *_launcherSet;
  PNPandoGraphQLService *_pandoGraphQLService;
  FBGraphQLService *_graphQLService;
  NSString *_pk;
  IGGraphQLService *_igGraphQLService;
  NSObject<IGGraphQLCache> *_graphQLDiskCache;
  NSObject<IGAPIClient> *_networker;
  IGAREffectSaveController *_saveController;
  IGAREffectRemoveController *_removeController;
  IGAREffectFlmConsentManager *_flmConsentManager;
  IGAssetModelStorage *_assetModelStorage;
  IGCameraLogger *_cameraLogger;
  NSObject<FBARFilterDownloading> *_filterDownloader;
  IGARDeliveryFacade *_arDeliveryFacade;
  NSMutableSet *_jobs;
}

/* instance methods */
- (id)initWithPandoGraphQLService:(id)qlservice graphQLService:(id)qlservice launcherSet:(id)set pk:(id)pk igGraphQLService:(id)qlservice graphQLDiskCache:(id)cache networker:(id)networker saveController:(id)controller removeController:(id)controller flmConsentManager:(id)manager assetModelStorage:(id)storage cameraLogger:(id)logger filterDownloader:(id)downloader arDeliveryFacade:(id)facade;
- (void)queueDeepLinkUri:(id)uri username:(id)username mediaId:(id)id;
@end

#endif /* IGARAdsPrefetcher_h */
