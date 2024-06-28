//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInboxAccountSwitchingManager_h
#define IGDirectInboxAccountSwitchingManager_h
@import Foundation;

#include "IGAccountSwitcherPresenting-Protocol.h"
#include "IGProfileTitleViewController.h"
#include "IGSwitchUsersViewControllerDelegate-Protocol.h"

@class IGOneTapLoginSwitchErrorManager, IGUserSession, NSString, UIViewController;

@interface IGDirectInboxAccountSwitchingManager : NSObject<IGSwitchUsersViewControllerDelegate> {
  /* instance variables */
  IGProfileTitleViewController *_profileTitleViewController;
  UIViewController *_accountSwitcherPresentingViewController;
  NSString *_analyticsModule;
  IGUserSession *_userSession;
  NSObject<IGAccountSwitcherPresenting> *_accountSwitcherPresenter;
  IGOneTapLoginSwitchErrorManager *_accountSwitcherErrorManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session accountSwitcherPresenter:(id)presenter analyticsModule:(id)module;
- (void)switchUsersController:(id)controller tableViewDidSelectRowWithUser:(id)user;
- (void)switchUsersController:(id)controller tableViewDidSelectRowWithOneTapLoginSwitchAccount:(id)account;
- (void)switchUsersControllerDidSelectAddAccountRow:(id)row completion:(id /* block */)completion;
- (void)switchUsersControllerDidSelectRowWithCurrentUser:(id)user;
@end

#endif /* IGDirectInboxAccountSwitchingManager_h */