//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BillingWizardNativeWrapperIGContainer_h
#define BillingWizardNativeWrapperIGContainer_h
@import Foundation;

#include "IGViewController.h"
#include "BillingWizardWebViewController.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface BillingWizardNativeWrapperIGContainer : IGViewController<NSObject> {
  /* instance variables */
  BillingWizardWebViewController *_webViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContentViewController:(id)controller;
- (void)viewDidLoad;
- (void)updateTitle:(id)title;
- (void)_onBackBarButtonTapped;
- (void)_onCloseBarButtonTapped;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarHidden;
- (long long)preferredTabBarBehavior;
@end

#endif /* BillingWizardNativeWrapperIGContainer_h */
