//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserScopedObjects_IGDirectQuickReplyService_h
#define IGUserScopedObjects_IGDirectQuickReplyService_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class IGDirectCache, IGUserDefaults, NSArray;
@protocol IGDirectQuickReplyServiceAnnouncer;

@interface IGUserScopedObjects (IGDirectQuickReplyService)
/* instance methods */
- (id)quickReplyService;
@end

#endif /* IGUserScopedObjects_IGDirectQuickReplyService_h */
