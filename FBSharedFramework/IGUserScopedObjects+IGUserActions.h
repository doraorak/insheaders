//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserScopedObjects_IGUserActions_h
#define IGUserScopedObjects_IGUserActions_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGObjectStores.h"
#include "IGRequestToken-Protocol.h"
#include "IGSessionChainProvider-Protocol.h"
#include "IGUser.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGUserStore.h"
#include "IGUserUpdating-Protocol.h"

@class NSMutableDictionary;
@protocol IGFollowFriendStatusAnnouncer, IGFriendStatusChangedAnnouncer, IGFriendStatusReceivedAnnouncer, IGLiveArchiveAnnouncer, IGRestrictedUserControllerAnnouncer, IGStandaloneFundraiserChangeAnnouncer, IGToggleBroadcastChatNotificationsStatusAnnouncer, IGToggleIGTVNotificationsStatusAnnouncer, IGTogglePostNotificationsStatusAnnouncer, IGToggleReelsNotificationsStatusAnnouncer, IGToggleStoryNotificationsStatusAnnouncer, IGUpdateLiveSubscriptionStatusAnnouncer, IGUserActionsAnnouncer, IGUserBlockingActionAnnouncer, IGUserContentMuteUpdatedAnnouncer, IGUserFavoritesActionAnnouncer, IGUserFeedFavoritesActionAnnouncer, IGUserUpdatedAnnouncer, OS_dispatch_queue;

@interface IGUserScopedObjects (IGUserActions)
/* instance methods */
- (id)userActions;
@end

#endif /* IGUserScopedObjects_IGUserActions_h */