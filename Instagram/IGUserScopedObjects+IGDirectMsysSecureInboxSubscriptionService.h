//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserScopedObjects_IGDirectMsysSecureInboxSubscriptionService_h
#define IGUserScopedObjects_IGDirectMsysSecureInboxSubscriptionService_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGDirectInteropFeatureGating-Protocol.h"
#include "IGDirectMsysSecureInboxNetworker.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "NSObject-Protocol.h"

@class IGDirectDjangoInboxCutoverThreadService, IGDirectMsysMessagingMailbox, IGUser, IGUserStore, MDCLatestSubscriptionValueRetriever, NSMutableDictionary, NSString;
@protocol IGMessageFilterClientProtocol;

@interface IGUserScopedObjects (IGDirectMsysSecureInboxSubscriptionService)
/* instance methods */
- (id)directMsysSecureInboxSubscriptionService;
@end

#endif /* IGUserScopedObjects_IGDirectMsysSecureInboxSubscriptionService_h */
