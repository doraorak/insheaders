//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserScopedObjects_IGPrefetchManager_h
#define IGUserScopedObjects_IGPrefetchManager_h
@import Foundation;

#include "FNFPrefetchChain.h"
#include "IGAutomatedImageTrackerAnnouncer-Protocol.h"
#include "IGAutomatedImageTrackerListener-Protocol.h"
#include "IGAutomatedVideoTrackerAnnouncer-Protocol.h"
#include "IGAutomatedVideoTrackerListener-Protocol.h"
#include "IGBulkMediaRequestManager.h"
#include "IGNetworkSpeedProvider.h"
#include "IGPrefetchDeduplicator.h"
#include "IGPrefetchManaging-Protocol.h"
#include "IGPrefetchPostsConfiguration.h"
#include "IGScopeEnding-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGVideoLoading-Protocol.h"
#include "_TtC22IGMediaPrefetchUIGraph17IGPrefetchUIGraph.h"

@class NSDate, NSDictionary, NSString;

@interface IGUserScopedObjects (IGPrefetchManager)
/* instance methods */
- (id)prefetchManager;
@end

#endif /* IGUserScopedObjects_IGPrefetchManager_h */
