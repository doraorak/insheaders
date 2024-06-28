//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserScopedObjects_IGDirectMsysTestMessageSender_h
#define IGUserScopedObjects_IGDirectMsysTestMessageSender_h
@import Foundation;

#include "IGDirectCache.h"
#include "IGDirectMessageSendingListener-Protocol.h"
#include "IGDirectMsysMessagingMailbox.h"
#include "IGDirectMsysTestSendManager.h"
#include "IGDirectOneTraceIDLogger.h"
#include "IGDirectOutgoingUpdateListener-Protocol.h"
#include "IGUser.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGUserStore.h"

@class NSMutableDictionary, NSString;

@interface IGUserScopedObjects (IGDirectMsysTestMessageSender)
/* instance methods */
- (id)testMessageSender;
@end

#endif /* IGUserScopedObjects_IGDirectMsysTestMessageSender_h */
