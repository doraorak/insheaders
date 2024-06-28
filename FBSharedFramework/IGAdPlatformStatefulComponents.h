//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdPlatformStatefulComponents_h
#define IGAdPlatformStatefulComponents_h
@import Foundation;

#include "IGAdBrandSafetyEnforcer.h"
#include "IGAdFetcherManager.h"
#include "IGAdInsertionMediaViewTracker.h"
#include "IGAdPlatformEventCenter.h"
#include "IGAdPool.h"
#include "IGAdPoolPersistenceCoordinator.h"
#include "IGAdSlotsTracker.h"

@interface IGAdPlatformStatefulComponents : NSObject

@property (readonly, nonatomic) IGAdPool *adPool;
@property (readonly, nonatomic) IGAdPoolPersistenceCoordinator *adPoolCache;
@property (readonly, nonatomic) IGAdInsertionMediaViewTracker *mediaTrackers;
@property (readonly, nonatomic) IGAdPlatformEventCenter *eventCenter;
@property (readonly, nonatomic) IGAdFetcherManager *adFetcherManager;
@property (readonly, nonatomic) IGAdSlotsTracker *adSlotsTracker;
@property (readonly, nonatomic) IGAdBrandSafetyEnforcer *brandSafetyEnforcer;

/* instance methods */
- (id)initWithAdPool:(id)pool adPoolCache:(id)cache mediaTrackers:(id)trackers eventCenter:(id)center adFetcherManager:(id)manager adSlotsTracker:(id)tracker brandSafetyEnforcer:(id)enforcer;
@end

#endif /* IGAdPlatformStatefulComponents_h */
