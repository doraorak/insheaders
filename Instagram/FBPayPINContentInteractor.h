//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayPINContentInteractor_h
#define FBPayPINContentInteractor_h
@import Foundation;

#include "FBPayAuthenticationDialogScreen.h"
#include "FBPayAuthenticationFlowContentManager.h"
#include "FBPayPINScreen.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface FBPayPINContentInteractor : NSObject<NSObject> {
  /* instance variables */
  NSString *_paymentType;
  NSString *_authenticationFlowType;
  NSString *_authenticationSubFlowType;
  FBPayAuthenticationFlowContentManager *_authenticationFlowContentManager;
  FBPayPINScreen *_pinScreenContent;
  FBPayAuthenticationDialogScreen *_dismissalAlertContent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContext:(id)context authenticationFlowType:(id)type authenticationSubFlowType:(id)type;
- (void)pinViewControllerReloadContent:(id)content forOperation:(long long)operation atUserStep:(long long)step screenType:(long long)type withCompletion:(id /* block */)completion;
- (id)pinViewControllerDescriptionText:(id)text forOperation:(long long)operation;
- (id)pinViewControllerErrorMessage:(id)message fromAddPINResponse:(id)pinresponse;
- (id)pinViewControllerErrorMessage:(id)message fromSwitchPINStatusResponse:(id)response;
- (id)pinViewControllerErrorMessage:(id)message fromUpdatePINResponse:(id)pinresponse;
- (id)pinViewControllerErrorMessage:(id)message fromVerifyResponse:(id)response;
- (id)pinViewControllerLearnMoreURL:(id)url;
- (id)pinViewControllerPINDoNotMatchErrorMessage:(id)message;
- (id)pinViewControllerPageTitle:(id)title;
- (BOOL)pinViewControllerShouldShowDescriptionButton:(id)button forOperation:(long long)operation;
- (id)fbpayPINViewControllerDescriptionButtonTitle:(id)title;
- (id)fbpayPINViewControllerDescriptionURL:(id)url;
- (id)pinViewControllerTitleText:(id)text forOperation:(long long)operation atUserStep:(long long)step;
- (id)pinViewControllerforgotPINButtonTitle:(id)title;
- (id)pinViewControllerTextFieldTitle:(id)title;
- (id)pinViewControllerDismissDialogTitle:(id)title;
- (id)pinViewControllerDismissDialogMessage:(id)message;
- (id)pinViewControllerDismissDialogPrimaryButtonTitle:(id)title;
- (id)pinViewControllerDismissDialogSecondaryButtonTitle:(id)title;
@end

#endif /* FBPayPINContentInteractor_h */