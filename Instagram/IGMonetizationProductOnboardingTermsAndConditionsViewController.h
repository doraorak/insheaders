//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationProductOnboardingTermsAndConditionsViewController_h
#define IGMonetizationProductOnboardingTermsAndConditionsViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGMonetizationProductOnboardingLogger.h"

@class IGBottomButtonsView, IGMonetizationProductOnboardingTermsAndConditionsViewModel, IGSimpleWebViewController, IGUserSession;
@protocol IGMonetizationProductOnboardingTermsAndConditionsViewControllerDelegate;

@interface IGMonetizationProductOnboardingTermsAndConditionsViewController : IGViewController {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGMonetizationProductOnboardingTermsAndConditionsViewControllerDelegate> *_delegate;
  IGSimpleWebViewController *_webViewController;
  IGBottomButtonsView *_bottomButton;
  IGMonetizationProductOnboardingTermsAndConditionsViewModel *_viewModel;
  IGMonetizationProductOnboardingLogger *_onboardingLogger;
}

/* instance methods */
- (id)initWithUserSession:(id)session delegate:(id)delegate viewModel:(id)model;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (long long)preferredTabBarBehavior;
- (id)analyticsModule;
- (void)_onBackButtonTapped;
@end

#endif /* IGMonetizationProductOnboardingTermsAndConditionsViewController_h */