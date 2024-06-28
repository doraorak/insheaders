//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInAppNotificationService_h
#define IGDirectInAppNotificationService_h
@import Foundation;

#include "IGDirectInboxHapticFeedbackInvokerDeprecated.h"
#include "IGDirectOutgoingMessageSendFailureNotificationScheduler.h"
#include "IGDirectReceivedMessageInAppNotificationPresenter.h"
#include "IGScopeEnding-Protocol.h"

@class IGDirectThreadNotificationPresenter, IGUserSession, NSNotificationCenter, NSString;
@protocol IGDirectSecureNotificationCoordinating;

@interface IGDirectInAppNotificationService : NSObject<IGScopeEnding> {
  /* instance variables */
  IGUserSession *_userSession;
  NSNotificationCenter *_notificationCenter;
  IGDirectReceivedMessageInAppNotificationPresenter *_receivedMessagesInAppNotificationPresenter;
  IGDirectOutgoingMessageSendFailureNotificationScheduler *_failedOutgoingMessageNotificationScheduler;
  IGDirectInboxHapticFeedbackInvokerDeprecated *_hapticFeedbackInvoker;
  NSObject<IGDirectSecureNotificationCoordinating> *_secureNotificationCoordinator;
  IGDirectThreadNotificationPresenter *_threadNotificationPresenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)scopeWillEnd;
- (BOOL)inboxViewIsVisible;
- (void)_stop;
- (void)_userChangedAccountType;
@end

#endif /* IGDirectInAppNotificationService_h */
