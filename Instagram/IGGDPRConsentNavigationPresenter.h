//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGDPRConsentNavigationPresenter_h
#define IGGDPRConsentNavigationPresenter_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGGDPRConsentContext.h"
#include "IGGDPRConsentDataSource.h"

@class IGUserSession;
@protocol IGGDPRConsentNavigationPresenterDelegate;

@interface IGGDPRConsentNavigationPresenter : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  IGGDPRConsentContext *_consentContext;
  NSObject<IGAPIClient> *_networker;
  BOOL _isPresentedParentalConsent;
  IGGDPRConsentDataSource *_consentDataSource;
}

@property (weak, nonatomic) NSObject<IGGDPRConsentNavigationPresenterDelegate> *delegate;

/* class methods */
+ (id)entryPointFromParams:(id)params;
+ (void)showBlockingViewWithUserSession:(id)session hostViewController:(id)controller;

/* instance methods */
- (id)initWithUserSession:(id)session consentContext:(id)context networker:(id)networker;
- (void)initConsentViewWithHostViewController:(id)controller;
- (void)presentConsentViewWithData:(id)data withHostViewController:(id)controller animated:(BOOL)animated;
- (void)presentParentalConsentViewWithHostViewController:(id)controller animated:(BOOL)animated;
- (void)updateUserSession:(id)session;
- (void)presentLeaveConfirmationDialogWithKeepReviewBlock:(id /* block */)block leaveReviewBlock:(id /* block */)block;
- (void)_showActivityIndicatorInViewController:(id)controller;
@end

#endif /* IGGDPRConsentNavigationPresenter_h */