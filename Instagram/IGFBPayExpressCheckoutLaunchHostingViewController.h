//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFBPayExpressCheckoutLaunchHostingViewController_h
#define IGFBPayExpressCheckoutLaunchHostingViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGFBPayExpressCheckoutLauncher.h"

@class IGUserSession, UIButton, UILabel, UISwitch;
@protocol FBPayECPPlaygroundTestingProviding;

@interface IGFBPayExpressCheckoutLaunchHostingViewController : UIViewController {
  /* instance variables */
  NSObject<FBPayECPPlaygroundTestingProviding> *_playgroundTestingProvider;
  IGUserSession *_session;
  UIButton *_fbpayButton;
  UISwitch *_nuxOrPuxSwitch;
  UILabel *_nuxOrPuxSwitchLabel;
  IGFBPayExpressCheckoutLauncher *_fbpayButtonLauncher;
}

/* instance methods */
- (id)initWithSession:(id)session playgroundTestingProvider:(id)provider;
- (void)viewDidLoad;
- (void)nuxOrPuxToggleChangedValue:(id)value;
- (void)_onFBPayButtonTapped;
@end

#endif /* IGFBPayExpressCheckoutLaunchHostingViewController_h */
