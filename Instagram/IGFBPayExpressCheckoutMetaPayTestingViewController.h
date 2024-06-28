//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFBPayExpressCheckoutMetaPayTestingViewController_h
#define IGFBPayExpressCheckoutMetaPayTestingViewController_h
@import Foundation;

#include "UIViewController.h"

@class IGUserSession, UIButton, UILabel, UISwitch;

@interface IGFBPayExpressCheckoutMetaPayTestingViewController : UIViewController {
  /* instance variables */
  UISwitch *_paymentEnvSwitch;
  UILabel *_paymentEnvSwitchLabel;
  UIButton *_nonProactiveCheckoutButton;
  UIButton *_metaCheckoutTestingButton;
  UIButton *_internalTestingSiteButton;
  IGUserSession *_session;
}

/* instance methods */
- (id)initWithSession:(id)session;
- (void)viewDidLoad;
- (void)_paymentEnvToggleChangedValue:(id)value;
- (void)_nonProactiveButtonTapped;
- (void)_metaCheckoutTestingButtonTapped;
- (void)_internalTestingSiteButtonTapped;
@end

#endif /* IGFBPayExpressCheckoutMetaPayTestingViewController_h */
