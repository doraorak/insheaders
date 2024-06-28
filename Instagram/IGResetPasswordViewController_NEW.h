//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGResetPasswordViewController_NEW_h
#define IGResetPasswordViewController_NEW_h
@import Foundation;

#include "IGViewController.h"
#include "IGFXCALResetPasswordView.h"
#include "IGResetPasswordView_NEW.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSString, UIBarButtonItem, UINavigationController;

@interface IGResetPasswordViewController_NEW : IGViewController<NSObject> {
  /* instance variables */
  IGResetPasswordView_NEW *_newResetPasswordView;
  UIBarButtonItem *_saveBarButtonItem;
  IGUserSession *_userSession;
  NSString *_token;
  BOOL _isSubmitting;
  BOOL _isFXCAL;
  IGFXCALResetPasswordView *_fxcalResetPasswordView;
  UINavigationController *_presenterNavigationController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session token:(id)token isFXCAL:(BOOL)fxcal;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)enableSaveButton:(BOOL)button;
- (void)didTapSaveButton;
- (void)resetPasswordViewDidFocusNewPasswordTextField;
- (void)resetPasswordViewDidFocusVerifyPasswordTextField;
- (void)_didTapCancelButton;
@end

#endif /* IGResetPasswordViewController_NEW_h */