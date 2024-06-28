//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationProductOnboardingUniversalAdSettingsViewController_h
#define IGMonetizationProductOnboardingUniversalAdSettingsViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGMonetizationProductOnboardingLogger.h"
#include "IGMonetizationProductOnboardingUniversalAdSettingsView.h"
#include "NSObject-Protocol.h"

@class IGMonetizationProductOnboardingUniversalAdSettingsViewModel, IGUserSession, NSString;
@protocol IGMonetizationProductOnboardingUniversalAdSettingsViewControllerDelegate;

@interface IGMonetizationProductOnboardingUniversalAdSettingsViewController : IGViewController<NSObject> {
  /* instance variables */
  IGMonetizationProductOnboardingUniversalAdSettingsView *_universalAdSettingsView;
  NSObject<IGMonetizationProductOnboardingUniversalAdSettingsViewControllerDelegate> *_delegate;
  IGMonetizationProductOnboardingUniversalAdSettingsViewModel *_viewModel;
  IGUserSession *_userSession;
  IGMonetizationProductOnboardingLogger *_onboardingLogger;
  long long _productType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session delegate:(id)delegate viewModel:(id)model productType:(long long)type;
- (long long)preferredTabBarBehavior;
- (id)analyticsModule;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (void)monetizationProductOnboardingUniversalAdView:(id)view didTapPrimaryButtonWithToggleValue:(BOOL)value;
- (void)monetizationProductOnboardingUniversalAdView:(id)view didTapPolicyLink:(id)link;
- (void)monetizationProductOnboardingUniversalAdView:(id)view didTapSubtitleLink:(id)link;
- (void)monetizationProductOnboardingUniversalAdView:(id)view didTapAnnotatedTextLink:(id)link;
- (void)_onBackButtonTapped;
@end

#endif /* IGMonetizationProductOnboardingUniversalAdSettingsViewController_h */