//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGExploreTopicDataController_h
#define IGExploreTopicDataController_h
@import Foundation;

#include "IGExploreNetworkFetchState.h"
#include "IGExploreNetworker.h"
#include "IGExploreSurfaceNotLoadingLogger.h"
#include "IGExploreTopicCacheController.h"
#include "IGUserLauncherSet-Protocol.h"
#include "NSObject-Protocol.h"

@class IGDiscoveryGridDataStore, IGDiscoveryGridDataValidationBehavior, IGDiscoverySupergridConfiguration, IGDiscoveryTopicModel, IGNetworkSourceContainer, NSString;
@protocol IGExploreTopicDataControllerDelegate;

@interface IGExploreTopicDataController : NSObject<NSObject> {
  /* instance variables */
  IGExploreNetworker *_networker;
  IGDiscoveryGridDataValidationBehavior *_validationBehavior;
  IGExploreSurfaceNotLoadingLogger *_exploreSurfaceNotLoadingLogger;
  IGExploreTopicCacheController *_cacheController;
  IGDiscoverySupergridConfiguration *_supergridConfiguration;
  NSObject<IGUserLauncherSet> *_launcherSet;
  BOOL _hasLoadedFeedOnce;
  IGNetworkSourceContainer *_networkerContainer;
}

@property (readonly, nonatomic) IGDiscoveryTopicModel *topic;
@property (retain, nonatomic) IGDiscoveryGridDataStore *dataStore;
@property (readonly, nonatomic) IGExploreNetworkFetchState *fetchState;
@property (weak, nonatomic) NSObject<IGExploreTopicDataControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTopic:(id)topic exploreFeedsProvider:(id)provider validationBehavior:(id)behavior networkResponse:(id)response launcherSet:(id)set;
- (void)exploreNetworker:(id)networker didCompleteRequestWithResponse:(id)response fromCache:(BOOL)cache serverTier:(id)tier config:(id)config;
- (void)exploreNetworker:(id)networker didCompleteHydrationResponse:(id)response fromCache:(BOOL)cache config:(id)config;
- (void)exploreNetworker:(id)networker didFailTopicsRequestWithError:(id)error;
- (BOOL)exploreNetworkerShouldFetchNonPersonalizedSurface;
- (BOOL)exploreTopicPrefetchCacheControllerShouldFetchNonPersonalizedSurface;
@end

#endif /* IGExploreTopicDataController_h */
