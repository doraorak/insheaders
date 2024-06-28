//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInteropUpgradeButtonAction_h
#define IGDirectInteropUpgradeButtonAction_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGDirectInteropUpgradeBottomButtonsViewModel.h"

@class NSString, NSURL, UIViewController;
@protocol UIViewController<IGDirectInteropUpgradeNavigating;

@interface IGDirectInteropUpgradeButtonAction : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  UIViewController<IGDirectInteropUpgradeNavigating> *_pushViewControllerAction_viewControllerToPush;
  IGDirectInteropUpgradeBottomButtonsViewModel *_pushViewControllerAction_updatedBottomButtonsViewModel;
  UIViewController *_presentViewControllerAction_viewController;
  NSURL *_intentAction_url;
  NSString *_intentAction_loggingEventName;
  BOOL _intentAction_dismissInteropInterstitial;
  UIViewController *_intentAction_presenterViewController;
}

/* class methods */
+ (id)dismissAction;
+ (id)intentActionWithUrl:(id)url loggingEventName:(id)name dismissInteropInterstitial:(BOOL)interstitial presenterViewController:(id)controller;
+ (id)presentViewControllerActionWithViewController:(id)controller;
+ (id)pushViewControllerActionWithViewControllerToPush:(id)push updatedBottomButtonsViewModel:(id)model;
+ (id)upgradeAction;

/* instance methods */
@end

#endif /* IGDirectInteropUpgradeButtonAction_h */
