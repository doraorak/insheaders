//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNetworkSourceManager_IGActivityFeedsProvider_h
#define IGNetworkSourceManager_IGActivityFeedsProvider_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGNetworkSourceProviding-Protocol.h"
#include "IGNewsInboxStoryParser.h"
#include "IGUserLauncherSet-Protocol.h"

@class NSString;
@protocol IGNetworkSourceContainerProvider;

@interface IGNetworkSourceManager (IGActivityFeedsProvider)
/* instance methods */
- (id)activityFeeds;
@end

#endif /* IGNetworkSourceManager_IGActivityFeedsProvider_h */
