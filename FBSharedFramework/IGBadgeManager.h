//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBadgeManager_h
#define IGBadgeManager_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGActivityToastData.h"
#include "IGBadgeImpressionManager.h"
#include "IGBadgeManaging-Protocol.h"
#include "IGBadgingLogger.h"
#include "IGBadgingLoggerV2.h"
#include "IGDirectBadgeService.h"
#include "IGFXCALManager.h"
#include "IGMultipleAccountHandling-Protocol.h"
#include "IGNotificationsFeedDataStoreBadgeManagerListener-Protocol.h"
#include "IGThreadSafeDictionary.h"
#include "IGThreadSafeMutableSet.h"
#include "IGUserDefaults.h"
#include "IGUserLauncherSet-Protocol.h"
#include "IGWarmStartListener-Protocol.h"
#include "_TtC12BCNDatastore24BCNDatastoreDraftsHelper.h"
#include "_TtP12BCNDatastore32BCNDatastoreDraftsHelperDelegate_-Protocol.h"
#include "_TtP40IGNotificationsFeedDataStoreBadgeManager40IGNotificationsFeedDataStoreBadgeManager_-Protocol.h"

@class NSDate, NSNumber, NSString;
@protocol IGActivityToastAnnouncer, IGBadgeAnnouncer, IGUser<IGIdentifying;

@interface IGBadgeManager : NSObject<IGNotificationsFeedDataStoreBadgeManagerListener, _TtP12BCNDatastore32BCNDatastoreDraftsHelperDelegate_, IGWarmStartListener, IGBadgeManaging> {
  /* instance variables */
  NSObject<IGAPIClient> *_networker;
  IGUser<IGIdentifying> *_user;
  NSObject<IGUserLauncherSet> *_launcherSet;
  NSObject<IGBadgeAnnouncer> *_badgeAnnouncer;
  NSObject<IGActivityToastAnnouncer> *_activityToastAnnouncer;
  NSObject<IGMultipleAccountHandling> *_multipleAccountHandler;
  IGFXCALManager *_fxCALManager;
  IGDirectBadgeService *_directBadgeService;
  NSObject<_TtP40IGNotificationsFeedDataStoreBadgeManager40IGNotificationsFeedDataStoreBadgeManager_> *_activityLocalDataStoreBadgeManager;
  IGThreadSafeDictionary *_userBadgeDataMap;
  IGActivityToastData *_activityToastData;
  IGThreadSafeMutableSet *_clearedBadges;
  IGUserDefaults *_sessionUserDefaults;
  _TtC12BCNDatastore24BCNDatastoreDraftsHelper *_draftsDatastoreHelper;
  NSNumber *_directTotalBadgeCount;
  NSNumber *_directOpenBadgeCount;
  NSNumber *_directE2EEBadgeCount;
  long long _cachedActivityBadgeCount;
  IGBadgingLogger *_badgingLogger;
  IGBadgingLoggerV2 *_badgingLoggerV2;
  IGBadgeImpressionManager *_badgeImpressionManager;
  NSDate *_lastHomeTabVisitTimestamp;
  double _lastWarmStartFetchTimestamp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNetworker:(id)networker user:(id)user launcherSet:(id)set badgeAnnouncer:(id)announcer activityToastAnnouncer:(id)announcer multipleAccountHandler:(id)handler sessionUserDefauts:(id)defauts analyticsLogger:(id)logger fxCALManager:(id)calmanager directBadgeService:(id)service activityLocalDataStoreBadgeManager:(id)manager draftsDatastoreHelper:(id)helper;
- (void)applicationWillWarmStartWithTimeIntervalSinceBackgrounded:(double)backgrounded;
- (id)logger;
- (id)loggerV2;
- (void)fetchAllBadges;
- (unsigned long long)badgeCountForUserId:(id)id badgeType:(unsigned long long)type;
- (unsigned long long)activityCountForUserId:(id)id;
- (BOOL)shouldBadgeAccountSwitcherForBadgeType:(unsigned long long)type;
- (unsigned long long)accountSwitcherBadgeCountForBadgeType:(unsigned long long)type;
- (unsigned long long)accountSwitcherHorizontalBadgeCountForBadgeType:(BOOL)type;
- (id)badgeInfoForBadgeUseCase:(long long)case;
- (void)clearBadgeForBadgeUseCase:(long long)case;
- (id)activityToastData;
- (id)directTotalBadgeCount;
- (id)directOpenBadgeCount;
- (id)directE2EEBadgeCount;
- (void)IGFXCALManagerDidUpdateAccounts;
- (void)datastoreDraftsHelper:(id)helper didUpdateDraftsFor:(long long)for;
- (void)_retrieveLastHomeTabVisitTimestamp;
- (BOOL)_shouldBadgeHomeForInactivity;
- (void)_updateDirectBadgeCountsForUserBadgeDataMap;
- (void)didUpdateDirectUnseenCount:(id)count;
- (void)didUpdateNotificationsFeedDataStoreBadgeCount;
@end

#endif /* IGBadgeManager_h */