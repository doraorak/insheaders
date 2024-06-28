//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAccountLogoutController_h
#define IGAccountLogoutController_h
@import Foundation;

#include "IGOneTapLoginLoggingHelper.h"

@class IGAccountStoreCoordinator, IGConfirmPhoneHelper, IGUserSession, UIViewController;
@protocol IGAccountLogoutControllerDelegate;

@interface IGAccountLogoutController : NSObject {
  /* instance variables */
  UIViewController *_alertViewPresenter;
  IGAccountStoreCoordinator *_accountStoreCoordinator;
  IGConfirmPhoneHelper *_confirmPhoneHelper;
  IGOneTapLoginLoggingHelper *_oneTapLoggingHelper;
  BOOL _isSingleUserLogout;
}

@property (readonly, weak, nonatomic) IGUserSession *userSession;
@property (weak, nonatomic) NSObject<IGAccountLogoutControllerDelegate> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session alertViewPresenter:(id)presenter;
- (void)dealloc;
- (id)_loggedInLinkedIGAccounts;
- (id)_linkedIGAccountUsernames;
- (id)_filterLoggedInAccounts:(id)accounts withLinkedAccounts:(id)accounts;
- (void)_showFetaLogoutAlertViewForAllLinkedProfilesWithUIUpdateBlock:(id /* block */)block savedPasswordProfilePKs:(id)pks logoutEntryPoint:(long long)point;
- (void)showFetaLogoutOrSPIDialog;
- (void)_performLogoutAfterACUpsell;
- (void)_showFetaSimpleLogoutDialogForMetaAccountWithLogoutBlock:(id /* block */)block;
@end

#endif /* IGAccountLogoutController_h */
