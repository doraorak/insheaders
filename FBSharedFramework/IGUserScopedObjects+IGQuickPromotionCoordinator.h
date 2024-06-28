//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserScopedObjects_IGQuickPromotionCoordinator_h
#define IGUserScopedObjects_IGQuickPromotionCoordinator_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGMultipleAccountHandling-Protocol.h"
#include "IGQPConfigurationProfile.h"
#include "IGQPDataStore.h"
#include "IGQPFetcherExperimentHelper.h"
#include "IGQPLoggingContext.h"
#include "IGQPTriggerID.h"
#include "IGScopedListener-Protocol.h"
#include "IGUserDefaults.h"
#include "IGUserLauncherSet-Protocol.h"
#include "QPCounterCatalog.h"
#include "QPOnDemandFetcherDelegate.h"

@class IGQPDataFetcher, NSDate, NSDictionary, NSMutableDictionary, NSString;
@protocol IGQPWebViewDismissedAnnouncer;

@interface IGUserScopedObjects (IGQuickPromotionCoordinator)
/* instance methods */
- (id)quickPromotionCoordinator;
@end

#endif /* IGUserScopedObjects_IGQuickPromotionCoordinator_h */
