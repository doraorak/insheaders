//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInboxViewModelGenerator_h
#define IGDirectInboxViewModelGenerator_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGDirectInteropFeatureGating-Protocol.h"
#include "IGSuggestedUserLogger.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "MPESettings.h"
#include "_TtC33IGDirectInboxReplyReminderService33IGDirectInboxReplyReminderService.h"

@class IGDirectImpressionManager, IGDirectInstrumentFeedToInboxTTRCTracker, IGDirectMessageStateDateFormatter, IGDirectNotesService, IGDirectRecipientService, IGFriendsMapService, IGSpotlightService, IGUser, IGUserDefaults, IGUserSession, IGUserStore, IGVersionHandler, NSString;
@protocol IGActivityStatusSettingServiceProtocol, OS_dispatch_queue;

@interface IGDirectInboxViewModelGenerator : NSObject {
  /* instance variables */
  NSObject<IGDirectInteropFeatureGating> *_featureSetProvider;
  IGUserSession *_userSession;
  IGUserStore *_userStore;
  IGDirectMessageStateDateFormatter *_messageStateDateFormatter;
  NSString *_analyticsModule;
  long long _accountType;
  NSObject<IGUserLauncherSetProviding> *_launcherSetProviding;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  IGVersionHandler *_versionHandler;
  IGUserDefaults *_sessionUserDefaults;
  IGUser *_currentUser;
  IGDirectNotesService *_notesService;
  NSObject<IGActivityStatusSettingServiceProtocol> *_activityStatusSettingService;
  NSString *_sessionId;
  IGDirectImpressionManager *_directImpressionManager;
  IGSuggestedUserLogger *_suggestedUserLogger;
  IGDirectRecipientService *_defaultRecipientService;
  IGFriendsMapService *_friendsMapService;
  IGSpotlightService *_spotlightService;
  _TtC33IGDirectInboxReplyReminderService33IGDirectInboxReplyReminderService *_inboxReplyReminderService;
  MPESettings *_directPrivacySettings;
  IGDirectInstrumentFeedToInboxTTRCTracker *_feedToInboxTTRCTracker;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

/* class methods */
+ (id)threadViewModelForThread:(id)thread accessibilityIdentifier:(id)identifier inboxConfig:(id)config selectedTab:(id)tab currentUser:(id)user userStore:(id)store shouldShowPlayButtonWithText:(BOOL)text featureSetProvider:(id)provider shouldShowAsEditing:(BOOL)editing isSelectedInEditing:(BOOL)editing lastViewedUnseenVisualMessageBelongsToCurrentThread:(BOOL)thread hasReplayableVisualMessages:(BOOL)messages currentPreloadContextIdentifier:(id)identifier unexpiredStoryStatus:(unsigned long long)status typingStatuses:(id)statuses presenceStateByUserId:(id)id statusesByUserId:(id)id analyticsModule:(id)module index:(unsigned long long)index activeVideoCall:(BOOL)call isAudioCall:(BOOL)call isBusinessMessagingHighVolumeRateLimit:(BOOL)limit messageStateDateFormatter:(id)formatter launcherSetProviding:(id)providing isNudge:(BOOL)nudge isUserActivityEnabled:(BOOL)enabled versionHandler:(id)handler sessionUserDefaults:(id)defaults sessionId:(id)id directImpressionManager:(id)manager directPrivacySettings:(id)settings threadIsSenderReplyReminderEligible:(BOOL)eligible threadIsReceiverReplyReminderEligible:(BOOL)eligible;

/* instance methods */
- (id)initWithFeatureSetProvider:(id)provider userSession:(id)session accountType:(long long)type userStore:(id)store messageStateDateFormatter:(id)formatter analyticsModule:(id)module queue:(id)queue launcherSetProviding:(id)providing analyticsLogger:(id)logger versionHandler:(id)handler sessionUserDefaults:(id)defaults currentUser:(id)user notesService:(id)service activityStatusSettingService:(id)service sessionId:(id)id directImpressionManager:(id)manager suggestedUserLogger:(id)logger defaultRecipientService:(id)service friendsMapService:(id)service directPrivacySettings:(id)settings feedToInboxTTRCTracker:(id)ttrctracker spotlightService:(id)service inboxReplyReminderService:(id)service;
@end

#endif /* IGDirectInboxViewModelGenerator_h */