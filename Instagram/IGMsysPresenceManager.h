//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMsysPresenceManager_h
#define IGMsysPresenceManager_h
@import Foundation;

#include "FBCancelable-Protocol.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGUserLauncherSet-Protocol.h"
#include "NSObject-Protocol.h"

@class IGDirectMsysMessagingMailbox, IGPresenceManager, NSString;
@protocol IGActivityStatusSettingServiceProtocol;

@interface IGMsysPresenceManager : NSObject<NSObject> {
  /* instance variables */
  IGDirectMsysMessagingMailbox *_messagingMailbox;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  BOOL _presenceReliabilityLoggingEnabled;
  NSObject<FBCancelable> *_msysSyncSubscriber;
  IGPresenceManager *_presenceBridgingManager;
  NSObject<IGActivityStatusSettingServiceProtocol> *_activityStatusSettingService;
  NSObject<IGUserLauncherSet> *_launcherSet;
  unsigned long long _sessionCreationReason;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserScopedObjects:(id)objects;
- (void)reportAppState:(long long)state completion:(id /* block */)completion;
- (void)reportActiveStatusSetting:(BOOL)setting completion:(id /* block */)completion;
@end

#endif /* IGMsysPresenceManager_h */
