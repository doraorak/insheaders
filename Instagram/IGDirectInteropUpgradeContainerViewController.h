//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInteropUpgradeContainerViewController_h
#define IGDirectInteropUpgradeContainerViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGAnalyticsModule-Protocol.h"
#include "IGDirectInteropUpgradeBottomButtonsViewController.h"
#include "IGDirectInteropUpgradeNavigationController.h"
#include "IGGestureHandler-Protocol.h"

@class NSString;

@interface IGDirectInteropUpgradeContainerViewController : UIViewController<IGAnalyticsModule, IGGestureHandler> {
  /* instance variables */
  IGDirectInteropUpgradeNavigationController *_navViewController;
  IGDirectInteropUpgradeBottomButtonsViewController *_bottomButtonsViewController;
  NSString *_interstitialType;
  BOOL _presentingBloksUpsell;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRootViewController:(id)controller bottomButtonsViewModel:(id)model userSession:(id)session upgradeSourceIdentifier:(id)identifier interstitialType:(id)type canNavigateToSetting:(BOOL)setting navigationBarHidden:(BOOL)hidden successBlock:(id /* block */)block failureBlock:(id /* block */)block;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (id)analyticsModule;
- (BOOL)canRespondToGesture:(id)gesture;
- (id)totalVideosSeen;
- (void)dismissFlowIfNeeded;
- (void)dismissWithoutAlertCompletion:(id /* block */)completion;
- (BOOL)isDisplayingPrivacyViewController;
- (void)didUpdateUpgradeFlowState:(unsigned long long)state;
- (id)interstitialType;
- (void)handleUpgradeSuccess;
- (void)handleUpgradeFailure;
- (void)buttonTappedForPushViewController:(id)controller newBottomButtonsViewModel:(id)model;
- (void)handlePresentViewControllerAction:(id)action;
- (void)dismissIfNeededWithCompletion:(id /* block */)completion;
- (void)updateBottomButtonsViewModel:(id)model;
- (void)updateLoadingState:(BOOL)state;
- (void)moveBottomButtonsToViewController:(id)controller;
@end

#endif /* IGDirectInteropUpgradeContainerViewController_h */