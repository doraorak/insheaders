//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQuickPromotionCoordinatorSessionDeps_h
#define IGQuickPromotionCoordinatorSessionDeps_h
@import Foundation;

#include "FBMobileConfigAPI-Protocol.h"
#include "IGAPIClient-Protocol.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGDeviceSession.h"
#include "IGDiskManager.h"
#include "IGQPAppConfiguration.h"
#include "IGUserDefaults.h"
#include "IGUserLauncherSet-Protocol.h"

@class NSString;
@protocol IGQPWebViewDismissedAnnouncer;

@interface IGQuickPromotionCoordinatorSessionDeps : NSObject

@property (readonly, nonatomic) NSString *userPk;
@property (readonly, nonatomic) NSObject<IGAPIClient> *networker;
@property (readonly, nonatomic) IGDiskManager *diskManager;
@property (readonly, nonatomic) IGUserDefaults *sessionUserDefaults;
@property (readonly, nonatomic) IGDeviceSession *deviceSession;
@property (readonly, nonatomic) IGQPAppConfiguration *qpAppConfiguration;
@property (readonly, nonatomic) NSObject<IGQPWebViewDismissedAnnouncer> *qpWebViewDismissedAnnouncer;
@property (readonly, nonatomic) NSObject<IGAnalyticsEventLoggingProtocol> *analyticsLogger;
@property (readonly, nonatomic) NSObject<IGUserLauncherSet> *launcherSet;
@property (readonly, nonatomic) NSObject<FBMobileConfigAPI> *mobileConfig;

/* instance methods */
- (id)initWithUserPk:(id)pk networker:(id)networker diskManager:(id)manager sessionUserDefaults:(id)defaults deviceSession:(id)session qpAppConfiguration:(id)configuration qpWebViewDismissedAnnouncer:(id)announcer analyticsLogger:(id)logger launcherSet:(id)set mobileConfig:(id)config;
@end

#endif /* IGQuickPromotionCoordinatorSessionDeps_h */