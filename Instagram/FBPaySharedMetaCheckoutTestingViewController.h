//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPaySharedMetaCheckoutTestingViewController_h
#define FBPaySharedMetaCheckoutTestingViewController_h
@import Foundation;

#include "UIViewController.h"
#include "FBPayWebBrowserControllerDelegate-Protocol.h"

@class NSString, UIButton;
@protocol FBPayWebBrowserControlling;

@interface FBPaySharedMetaCheckoutTestingViewController : UIViewController<FBPayWebBrowserControllerDelegate> {
  /* instance variables */
  UIButton *_internalTestingSiteButton;
  UIButton *_newCheckoutHelperAPITestingButton;
  NSObject<FBPayWebBrowserControlling> *_webController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)viewDidLoad;
- (void)internalTestingSiteButtonTapped;
- (void)newCheckoutHelperAPITestingButtonTapped;
- (void)browserControllerDidFinish:(id)finish url:(id)url;
- (void)browserControllerDidChange:(id)change url:(id)url;
- (void)browserControllerDidCancel:(id)cancel;
@end

#endif /* FBPaySharedMetaCheckoutTestingViewController_h */
