//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGChangePasswordViewController_h
#define IGChangePasswordViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGChangePasswordView.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSString, UIBarButtonItem;

@interface IGChangePasswordViewController : IGViewController<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  UIBarButtonItem *_saveBarButtonItem;
  IGChangePasswordView *_changePasswordView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (void)_didTapSaveBarButtonItem;
- (void)_validateAndSubmit;
- (void)changePasswordViewDidTapSaveButton:(id)button;
- (void)changePasswordView:(id)view inputChanged:(BOOL)changed;
- (void)changePasswordView:(id)view didRequestErrorDialogWithMessage:(id)message;
@end

#endif /* IGChangePasswordViewController_h */