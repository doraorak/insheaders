//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationSignInHelperViewController_h
#define IGRegistrationSignInHelperViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGAPIClient-Protocol.h"
#include "IGAccountRecoveryTriageViewControllerDelegate-Protocol.h"
#include "IGAnalyticsModule-Protocol.h"
#include "IGAssistedAccountRecoveryManager.h"
#include "IGAssistedAccountRecoveryManagerDelegate-Protocol.h"
#include "IGKeyboardObserverHideDelegate-Protocol.h"
#include "IGKeyboardObserverShowDelegate-Protocol.h"
#include "IGNUXLayoutSpec.h"
#include "IGRegistrationSignInHelperView.h"
#include "IGTextFieldDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGAccessLoginCodeSendingManager, IGAlertDialogView, IGDeviceSession, IGFXLoginManager, IGKeyboardObserver, IGRegistrationLogger, NSString, UITapGestureRecognizer;
@protocol IGRegistrationSignInHelperViewControllerDelegate;

@interface IGRegistrationSignInHelperViewController : UIViewController<IGAccountRecoveryTriageViewControllerDelegate, IGAnalyticsModule, IGTextFieldDelegate, IGKeyboardObserverHideDelegate, IGKeyboardObserverShowDelegate, UIGestureRecognizerDelegate, IGAssistedAccountRecoveryManagerDelegate> {
  /* instance variables */
  IGDeviceSession *_deviceSession;
  IGRegistrationLogger *_logger;
  IGAccessLoginCodeSendingManager *_codeSendingManager;
  IGAssistedAccountRecoveryManager *_assistedAccountRecoveryManager;
  IGFXLoginManager *_fxLoginManager;
  NSString *_username;
  BOOL _isSwitchingUsers;
  NSString *_prefilledUsername;
  IGNUXLayoutSpec *_layoutSpec;
  long long _regStep;
  NSString *_stepName;
  BOOL _linkRecoveryAlertViewShown;
  BOOL _isSubmitting;
  IGRegistrationSignInHelperView *_helperView;
  IGAlertDialogView *_alertView;
  UITapGestureRecognizer *_tapGesture;
  IGKeyboardObserver *_keyboardObserver;
}

@property (nonatomic) long long inputMode;
@property (readonly, nonatomic) NSObject<IGAPIClient> *networker;
@property (weak, nonatomic) NSObject<IGRegistrationSignInHelperViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNetworker:(id)networker deviceSession:(id)session fbAuthHelper:(id)helper ssoFetcher:(id)fetcher logger:(id)logger layoutSpec:(id)spec username:(id)username isSwitchingUsers:(BOOL)users;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (BOOL)prefersNavigationBarHidden;
- (void)_countryCodeButtonTapped;
- (void)_backButtonTapped;
- (void)_facebookButtonTapped;
- (void)_helperButtonTapped;
- (void)_backgroundTapped;
- (void)_applicationDidEnterBackground:(id)background;
- (void)keyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidShow:(id)show;
- (void)keyboardObserver:(id)observer keyboardWillHideWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidHide:(id)hide;
- (void)textFieldDidChange:(id)change;
- (BOOL)textFieldShouldReturn:(id)return;
- (void)userDidSelectCountryWithName:(id)name countryNumber:(id)number;
- (void)startFacebookButtonLoading;
- (void)stopFacebookButtonLoading;
- (void)facebookAuthHelperDidTapLogInButton:(id)button;
- (void)facebookAuthHelperDidTapSignUpButton:(id)button isFacebookRegExempt:(BOOL)exempt;
- (void)facebookAuthHelperDidTapHelpButton:(id)button;
- (void)facebookAuthHelperDidTapDismissButton:(id)button;
- (void)facebookAuthHelperDidFail:(id)fail withError:(id)error withResponse:(id)response;
- (void)facebookAuthHelperDidTapActiveUser:(id)user;
- (void)facebookAuthHelper:(id)helper willProceedRegistrationWithFBInfo:(id)fbinfo facebookAccessToken:(id)token tosVersion:(id)version;
- (void)facebookAuthHelper:(id)helper willProceedTwoFactorWithInfo:(id)info facebookAccessToken:(id)token;
- (void)facebookAuthHelper:(id)helper willResetPasswordToken:(id)token user:(id)user facebookAccessToken:(id)token;
- (void)facebookAuthHelper:(id)helper willPrefillUsername:(id)username;
- (void)facebookAuthHelper:(id)helper willShowAccountPickerForTokenResult:(id)result;
- (void)facebookAuthHelperDidTriggerAgeRegulationErrorDialog;
- (void)accountRecoveryTriageViewController:(id)controller didRequestRecoverCodeWithContext:(id)context;
- (void)accountRecoveryTriageViewControllerDidTapBackToLogin:(id)login;
- (void)assistedAccountRecoveryManagerDidBackToLogin:(id)login;
- (id)analyticsModule;
- (void)codeSendingManager:(id)manager didTapUpdateContactPoint:(id)point;
- (void)signInHelperViewDelegateDidTapSendButton:(id)button inputText:(id)text;
- (void)signInHelperViewDelegateDidTapHelperButton:(id)button;
- (void)signInHelperViewDelegateDidTapBackButton:(id)button;
- (void)signInHelperViewDelegateDidTapSwitchToUsername:(id)username;
- (void)signInHelperViewDelegateDidTapSwitchToPhone:(id)phone;
- (void)signInHelperViewDelegateDidTapCountryCodeButton:(id)button;
- (void)signInHelperViewDelegateDidTapFacebookButton:(id)button;
@end

#endif /* IGRegistrationSignInHelperViewController_h */