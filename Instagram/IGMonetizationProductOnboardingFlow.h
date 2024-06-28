//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationProductOnboardingFlow_h
#define IGMonetizationProductOnboardingFlow_h
@import Foundation;

#include "IGMonetizationProductOnboardingFlowViewModel.h"
#include "IGMonetizationProductOnboardingLogger.h"
#include "IGScopedListener-Protocol.h"

@class IGBloksAsyncActionHandler, IGMonetizationProductOnboardingConfig, IGUserSession, NSArray, NSString, UINavigationController, UIViewController;
@protocol FBPayUPLLoggerWrapper, IGMonetizationProductOnboardingFlowDelegate;

@interface IGMonetizationProductOnboardingFlow : NSObject<IGScopedListener> {
  /* instance variables */
  UINavigationController *_navigationController;
  IGUserSession *_userSession;
  IGMonetizationProductOnboardingFlowViewModel *_viewModel;
  IGMonetizationProductOnboardingLogger *_onboardingLogger;
  NSObject<FBPayUPLLoggerWrapper> *_contentAppreciationLogger;
  IGMonetizationProductOnboardingConfig *_productConfig;
  IGBloksAsyncActionHandler *_asyncActionHandler;
  long long _flowType;
  BOOL _isPresentedModally;
  BOOL _presentNextViewControllerModally;
  NSArray *_steps;
}

@property (readonly, weak, nonatomic) NSObject<IGMonetizationProductOnboardingFlowDelegate> *delegate;
@property (readonly, weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)_start;
- (void)_dismissPresentedViewController;
- (void)monetizationProductOnboardingChecklistViewControllerPresentNextStep;
- (void)monetizationProductOnboardingIntroductionSplashViewControllerDidTapPrimaryButton;
- (void)monetizationProductOnboardingWelcomeViewControllerDidTapPrimaryButton;
- (void)monetizationProductOnboardingWelcomeViewControllerDidTapSecondaryButton;
- (void)monetizationProductOnboardingTermsAndConditionsViewControllerDidAgreeToTerms;
- (void)monetizationProductOnboardingTermsAndConditionsViewControllerDidNavigateBack;
- (void)monetizationProductOnboardingUniversalAdSettingsViewController:(id)controller didTapDoneWithAdsToggleValue:(BOOL)value;
- (void)monetizationProductOnboardingUniversalAdSettingsViewControllerDidNavigateBack:(id)back;
- (void)monetizationProductOnboardingUniversalAdSettingsViewController:(id)controller handleCustomNavigationForURL:(id)url;
- (void)didExitOnboarding:(BOOL)onboarding;
- (void)didExitPayoutOnboardingWithSessionId:(id)id;
@end

#endif /* IGMonetizationProductOnboardingFlow_h */
