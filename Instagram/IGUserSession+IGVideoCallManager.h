//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserSession_IGVideoCallManager_h
#define IGUserSession_IGVideoCallManager_h
@import Foundation;

#include "AVPictureInPictureControllerDelegate-Protocol.h"
#include "IGAPIClient-Protocol.h"
#include "IGCoPresenceManager.h"
#include "IGMinimizedViewerFullscreenListener-Protocol.h"
#include "IGMinimizedViewerPresenter.h"
#include "IGMultipleAccountHandling-Protocol.h"
#include "IGRTCKragle.h"
#include "IGRTCKragleBridge.h"
#include "IGRealtimeServerPayloadHandler-Protocol.h"
#include "IGScopeEnding-Protocol.h"
#include "IGSessionEndIdentifier.h"
#include "IGSubscriptionToken-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGVideoCallCaptureCoordinatorAREffectProtocol-Protocol.h"
#include "IGVideoCallCurrentCallProvider-Protocol.h"
#include "IGVideoCallLoggingContext.h"
#include "IGVideoCallParticipantsActions.h"
#include "IGVideoCallSession.h"
#include "IGVideoCallStatusStore.h"
#include "IGVideoCallTTRCPerfLoggingMonitor.h"
#include "UNUserNotificationCenterDelegate-Protocol.h"
#include "_TtC24IGVideoCallDismissHelper24IGVideoCallDismissHelper.h"

@class AVPictureInPictureController, IGDeviceSession, IGDirectCache, IGDirectDjangoThreadSubscriptionService, IGFXCALManager, IGMediaStore, IGRealtimeMqttClient, IGUser, IGUserDefaults, IGUserIntentHandler, IGUserSessionProvider, IGUserStore, NSString, UIView;
@protocol IGActivityStatusSettingServiceProtocol, IGAnalyticsEventLoggingProtocol><FBAnalyticsLogging, IGCoWatchCoordinatorProtocol, IGRTCCallFunnelClientConnectPointManagerProtocol, IGRTCCallFunnelClientManagerProtocol, IGRTCCallFunnelClientProtocol, IGSessionEndBlocking, IGVideoCallAnnouncer, IGVideoCallCallKitCoordinatorInterface;

@interface IGUserSession (IGVideoCallManager)
/* instance methods */
- (id)videoCallManager;
@end

#endif /* IGUserSession_IGVideoCallManager_h */