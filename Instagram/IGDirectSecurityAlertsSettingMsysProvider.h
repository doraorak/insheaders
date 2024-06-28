//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectSecurityAlertsSettingMsysProvider_h
#define IGDirectSecurityAlertsSettingMsysProvider_h
@import Foundation;

#include "IGDirectSecurityAlertsSettingProviding-Protocol.h"
#include "IGUserLauncherSet-Protocol.h"

@class IGDirectMsysMessagingMailbox, IGUserDefaults, NSString;

@interface IGDirectSecurityAlertsSettingMsysProvider : NSObject<IGDirectSecurityAlertsSettingProviding> {
  /* instance variables */
  IGDirectMsysMessagingMailbox *_mailboxProvider;
  IGUserDefaults *_sessionUserDefaults;
  NSObject<IGUserLauncherSet> *_launcherSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMailbox:(id)mailbox sessionUserDefaults:(id)defaults launcherSet:(id)set;
- (void)shouldPresentPeerDeviceSecurityAlertsWithCompletionHandler:(id /* block */)handler;
- (void)setShouldPresentPeerDeviceSecurityAlertsTo:(BOOL)to completionHandler:(id /* block */)handler;
- (void)shouldPresentSecurityAlertsWithCompletionHandler:(id /* block */)handler;
- (void)setShouldPresentSecurityAlertsTo:(BOOL)to completionHandler:(id /* block */)handler;
@end

#endif /* IGDirectSecurityAlertsSettingMsysProvider_h */