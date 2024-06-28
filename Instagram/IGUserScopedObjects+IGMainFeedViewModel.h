//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserScopedObjects_IGMainFeedViewModel_h
#define IGUserScopedObjects_IGMainFeedViewModel_h
@import Foundation;

#include "IGFeedItemPostedListener-Protocol.h"
#include "IGFlashFeedCacheController.h"
#include "IGMainFeedAdInsertionDataSource.h"
#include "IGMainFeedAdInsertionHandler.h"
#include "IGMainFeedCachedItemVender.h"
#include "IGMainFeedConfiguration.h"
#include "IGMainFeedDataController.h"
#include "IGMainFeedItemConfiguration.h"
#include "IGMainFeedLogger.h"
#include "IGMainFeedNetworkSourceSessionDeps.h"
#include "IGMainFeedNewPostExistNetworkSource.h"
#include "IGMainFeedRequestStartupAnalyzerWrapper.h"
#include "IGMainFeedViewModelAdsDeps.h"
#include "IGNavigationEventListener-Protocol.h"
#include "IGStartupAnalyzerListener-Protocol.h"
#include "IGStoriesTrayLoadQPLogger.h"
#include "IGStoriesTrayRefreshController.h"
#include "IGStoryAdsPrefetchCoordinator.h"
#include "IGStoryDataController.h"
#include "IGSundialVideoUploadListener-Protocol.h"
#include "IGWarmStartListener-Protocol.h"

@class IGAdItemMapper, IGAdRealTimePeakChecker, IGFunctionalErrorReporter, IGHScrollAYMFModel, IGImmersiveFeedConfiguration, IGNetworkConnectionManager, IGSponsoredSupportConfiguration, IGUserDefaults, IGUserSessionProvider, NSDate, NSString;
@protocol IGMainFeedViewModelDelegate><IGMainFeedViewStateProvider;

@interface IGUserScopedObjects (IGMainFeedViewModel)
/* instance methods */
- (id)mainFeedViewModel;
@end

#endif /* IGUserScopedObjects_IGMainFeedViewModel_h */