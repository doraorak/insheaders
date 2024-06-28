//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLoginResponseHandler_h
#define IGLoginResponseHandler_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGAssistedAccountRecoveryManager.h"

@class IGAuthenticator, IGLoginAutoCompleteUser, IGLoginDialogFactory, IGRegistrationLogger, NSArray, NSString, UIViewController;
@protocol IGAuthenticationFlowDismissDelegate, IGLoginResponseHandlerDelegate;

@interface IGLoginResponseHandler : NSObject {
  /* instance variables */
  UIViewController *_hostViewController;
  IGRegistrationLogger *_logger;
  IGAuthenticator *_authenticator;
  NSString *_username;
  IGLoginAutoCompleteUser *_currentFBUser;
  NSString *_stepName;
  NSObject<IGAPIClient> *_networker;
  BOOL _isEligibleForBadPasswordAlternativeLogin;
  NSObject<IGAuthenticationFlowDismissDelegate> *_flowDismissDelegate;
  IGLoginDialogFactory *_dialogFactory;
  IGAssistedAccountRecoveryManager *_assistedAccountRecoveryManager;
  NSArray *_autoCompleteFBUsers;
}

@property (weak, nonatomic) NSObject<IGLoginResponseHandlerDelegate> *delegate;

/* instance methods */
- (id)initWithHostViewController:(id)controller stepName:(id)name autoCompleteFBUsers:(id)fbusers deviceSession:(id)session networker:(id)networker authenticator:(id)authenticator logger:(id)logger flowDismissDelegate:(id)delegate;
@end

#endif /* IGLoginResponseHandler_h */
