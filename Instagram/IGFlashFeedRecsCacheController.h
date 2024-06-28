//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFlashFeedRecsCacheController_h
#define IGFlashFeedRecsCacheController_h
@import Foundation;

#include "IGDeliveryRugpullConfig.h"
#include "IGFlashFeedCacheLoadLogger.h"
#include "IGFlashFeedCacheLoader.h"
#include "IGFlashFeedPendingCacheUpdatesQueue.h"
#include "IGFlashFeedStartupStateTracker.h"
#include "IGMainFeedFeedItemCache.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "NSObject-Protocol.h"

@class IGObjectCacheConsolidator, IGUserDefaults, NSString;
@protocol IGFlashFeedCacheControllerDelegate, IGFlashFeedMediaSeenStateProviding, IGFlashFeedRecsCacheControllerConfiguration, IGMainFeedResponseStorePreProcessing;

@interface IGFlashFeedRecsCacheController : NSObject<NSObject> {
  /* instance variables */
  NSString *_userPk;
  NSObject<IGFlashFeedMediaSeenStateProviding> *_seenStateProvider;
  IGObjectCacheConsolidator *_objectCacheConsolidator;
  NSObject<IGUserLauncherSetProviding> *_featureSets;
  IGFlashFeedCacheLoadLogger *_cacheLoadLogger;
  IGFlashFeedCacheLoader *_loader;
  IGUserDefaults *_userDefaults;
  IGFlashFeedPendingCacheUpdatesQueue *_missedUpdates;
  IGFlashFeedStartupStateTracker *_startupStateTracker;
  IGDeliveryRugpullConfig *_deliveryConfig;
  NSObject<IGFlashFeedRecsCacheControllerConfiguration> *_feedRecsCacheControllerConfig;
  NSObject<IGMainFeedResponseStorePreProcessing> *_preProcessor;
}

@property (retain, nonatomic) IGMainFeedFeedItemCache *cache;
@property (weak, nonatomic) NSObject<IGFlashFeedCacheControllerDelegate> *delegate;
@property (readonly, nonatomic) long long itemCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserPk:(id)pk seenStateProvider:(id)provider objectCacheConsolidator:(id)consolidator featureSets:(id)sets cacheLoadLogger:(id)logger loader:(id)loader userDefaults:(id)defaults startupStateTracker:(id)tracker deliveryConfig:(id)config feedRecsCacheControllerConfig:(id)config preProcessor:(id)processor;
- (id)itemsForPrivacyRecheckUpToMaximumCount:(long long)count excludingItems:(id)items;
- (id)allItems;
@end

#endif /* IGFlashFeedRecsCacheController_h */