//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTimeSpentManager_h
#define IGTimeSpentManager_h
@import Foundation;

#include "IGTimeInAppControllerWrapper.h"
#include "IGTimeSpentManaging-Protocol.h"
#include "IGTimeSpentNetworkSource.h"
#include "IGTimeSpentReminderPresenter.h"
#include "IGTimeSpentScreenTimePerScreen.h"
#include "IGUsageInsightsLogger.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGUserUpdatedListener-Protocol.h"
#include "_TtC11IGTimeSpent26TimeSpentReminderScheduler.h"

@class FBGraphQLServiceToken, FBTimer, IGUser, IGUserDefaults, NSDate, NSString, PNPandoGraphQLService;
@protocol IGTimeSpentAnnouncer, IGUserUpdating;

@interface IGTimeSpentManager : NSObject<IGUserUpdatedListener, IGTimeSpentManaging> {
  /* instance variables */
  IGUser *_user;
  NSObject<IGUserUpdating> *_userUpdater;
  NSObject<IGUserLauncherSetProviding> *_launcherSetProvider;
  IGUserDefaults *_userDefaults;
  IGUserDefaults *_sessionUserDefaults;
  IGUsageInsightsLogger *_logger;
  IGTimeInAppControllerWrapper *_controllerWrapper;
  double _dailyTimeSpentAtSessionStart;
  double _sessionEndTimeSpent;
  NSDate *_sessionEndDate;
  FBTimer *_takeABreakShouldFireTimer;
  FBTimer *_heartbeatTimer;
  BOOL _didLogOutliers;
  IGTimeSpentNetworkSource *_timeSpentNetworkSource;
  NSObject<IGTimeSpentAnnouncer> *_timeSpentAnnouncer;
  FBTimer *_screenTimeUploadTimer;
  IGTimeSpentScreenTimePerScreen *_timeSpentPerScreen;
  PNPandoGraphQLService *_pandoGraphQLService;
  FBGraphQLServiceToken *_supervisedUserScreenTimeSettingsSubscriptionToken;
  FBGraphQLServiceToken *_supervisedUserQuietTimeSettingsSubscriptionToken;
  _TtC11IGTimeSpent26TimeSpentReminderScheduler *_reminderScheduler;
  IGTimeSpentReminderPresenter *_reminderPresenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUser:(id)user concurrentSessionHandling:(id)handling userDefaults:(id)defaults sessionUserDefaults:(id)defaults timeSpentPerScreen:(id)screen timeSpentNetworkSource:(id)source pandoGraphQLService:(id)qlservice timeSpentAnnouncer:(id)announcer userUpdater:(id)updater userUpdatedAnnouncer:(id)announcer videoCallAccouncer:(id)accouncer analyticsLogger:(id)logger launcherSetProvider:(id)provider;
- (void)startTracking;
- (void)startTrackingScreenTimeForScreen:(long long)screen;
- (void)stopTrackingScreenTimeForScreen;
- (void)stopTracking;
- (void)setupViews;
- (id)fetchDailyTimeSpentForWeek;
- (id)fetchDeviceDailyTimeSpentForWeek;
- (id)fetchDeviceDailyTimeSpentForWeekWithInUTC;
- (id)fetchTimeSpentIntervals;
- (double)fetchDailyTimeSpentForToday;
- (double)fetchDeviceDailyTimeSpentForToday;
- (double)sessionTimeSpent;
- (double)sessionTimeSpentWithSessionization;
- (BOOL)showAggregatedScreenTime;
- (void)syncScreenTime;
- (id)fetchReminderWithType:(unsigned long long)type;
- (id)_getTimeSpentReminderFromLocalStorageWithType:(unsigned long long)type;
- (void)storeDailyLimitExtension:(double)extension;
- (void)storeTimeSpentReminder:(id)reminder;
- (id)activeScreenTimeReminders;
- (void)userWasUpdated:(id)updated;
- (void)videoCallJoined;
- (void)videoCallEnded;
@end

#endif /* IGTimeSpentManager_h */