//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemViewModelContext_h
#define IGFeedItemViewModelContext_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGCarouselIndexProviding-Protocol.h"
#include "IGFeedConfigurationType-Protocol.h"
#include "IGFeedItemConfigurationType-Protocol.h"
#include "IGFeedItemLoggingProviderDelegate-Protocol.h"
#include "IGFeedItemPageCellState.h"
#include "IGFeedSectionPerformUpdateAnnouncer-Protocol.h"
#include "IGSponsoredInfoProviding-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class FBWeakObjectContainer, IGNUXManager, IGPlaybackCoordinator, IGUserDefaults, IGUserStore, NSString;
@protocol FBAnalyticsLogging><IGAnalyticsEventLoggingProtocol, IGMediaSectionPerformUpdateAnnouncer;

@interface IGFeedItemViewModelContext : NSObject

@property (readonly, nonatomic) NSObject<IGUserLauncherSetProviding> *launcherSet;
@property (readonly, nonatomic) NSObject<IGFeedConfigurationType> *feedConfiguration;
@property (readonly, nonatomic) NSObject<IGFeedItemConfigurationType> *feedItemConfiguration;
@property (readonly, nonatomic) NSString *analyticsModule;
@property (readonly, nonatomic) NSString *userPK;
@property (readonly, nonatomic) IGUserStore *userStore;
@property (readonly, nonatomic) IGUserDefaults *userSessionDefaults;
@property (readonly, nonatomic) NSObject<FBAnalyticsLogging><IGAnalyticsEventLoggingProtocol> *analyticsLogger;
@property (readonly, nonatomic) NSObject<IGAPIClient> *networker;
@property (readonly, nonatomic) IGNUXManager *nuxManager;
@property (readonly, nonatomic) FBWeakObjectContainer *actionDelegate;
@property (readonly, nonatomic) NSObject<IGFeedItemLoggingProviderDelegate> *loggingProvider;
@property (readonly, nonatomic) IGPlaybackCoordinator *playbackCoordinator;
@property (readonly, nonatomic) NSObject<IGFeedSectionPerformUpdateAnnouncer> *feedSectionPerformUpdateAnnouncer;
@property (readonly, nonatomic) NSObject<IGMediaSectionPerformUpdateAnnouncer> *mediaSectionPerformUpdateAnnouncer;
@property (readonly, nonatomic) NSObject<IGSponsoredInfoProviding> *sponsoredPostInfo;
@property (readonly, nonatomic) NSObject<IGCarouselIndexProviding> *carouselIndexProvider;
@property (readonly, nonatomic) IGFeedItemPageCellState *pageCellState;

/* instance methods */
- (id)initWithLauncherSet:(id)set feedConfiguration:(id)configuration feedItemConfiguration:(id)configuration analyticsModule:(id)module userPK:(id)pk userStore:(id)store userSessionDefaults:(id)defaults analyticsLogger:(id)logger networker:(id)networker nuxManager:(id)manager actionDelegate:(id)delegate loggingProvider:(id)provider playbackCoordinator:(id)coordinator feedSectionPerformUpdateAnnouncer:(id)announcer mediaSectionPerformUpdateAnnouncer:(id)announcer sponsoredPostInfo:(id)info carouselIndexProvider:(id)provider pageCellState:(id)state;
@end

#endif /* IGFeedItemViewModelContext_h */
