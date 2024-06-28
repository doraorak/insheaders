//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectBadgeService_h
#define IGDirectBadgeService_h
@import Foundation;

#include "IGDirectBadgeCounts.h"
#include "IGScopeEnding-Protocol.h"
#include "IGSubscriptionToken-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "MDCDataSubscriptionPipe.h"

@class NSString;
@protocol IGDirectBadgeServiceAnnouncer;

@interface IGDirectBadgeService : NSObject<IGScopeEnding> {
  /* instance variables */
  BOOL _shouldResetBadgeCountToZeroInBackground;
  BOOL _shouldUpdateBadgeDirectlyIgnoringAppState;
  BOOL _shouldUnsubscribeBadgeSubscriptionInBackground;
  NSObject<IGDirectBadgeServiceAnnouncer> *_announcer;
  MDCDataSubscriptionPipe *_badgeCountSubscriptionPipe;
  NSObject<IGSubscriptionToken> *_subscription;
  IGDirectBadgeCounts *_directBadgeCounts;
  NSObject<IGUserLauncherSetProviding> *_featureSets;
  NSString *_currentUserPk;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBadgeCountSubscriptionPipe:(id)pipe featureSets:(id)sets currentUserPk:(id)pk multipleAccountHandler:(id)handler;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (void)didSwitchToAccountWithUserPk:(id)pk;
- (void)didUpdateMultipleAccounts;
- (void)applicationWillEnterForegroundListener;
- (void)_applicationDidEnterBackground:(id)background;
- (void)scopeWillEnd;
@end

#endif /* IGDirectBadgeService_h */