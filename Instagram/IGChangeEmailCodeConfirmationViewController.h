//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGChangeEmailCodeConfirmationViewController_h
#define IGChangeEmailCodeConfirmationViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGCodeConfirmationView.h"
#include "IGCodeConfirmationViewModel.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGNUXLayoutSpec.h"
#include "IGTextFieldDelegate-Protocol.h"

@class IGUserSession, NSString;
@protocol IGChangeEmailCodeConfirmationViewControllerDelegate;

@interface IGChangeEmailCodeConfirmationViewController : IGViewController<IGCoreTextLinkHandler, IGTextFieldDelegate> {
  /* instance variables */
  IGNUXLayoutSpec *_layoutSpec;
  IGCodeConfirmationView *_codeConfirmationView;
  IGCodeConfirmationViewModel *_codeConfirmationViewModel;
  NSString *_email;
  IGUserSession *_userSession;
  long long _source;
}

@property (weak, nonatomic) NSObject<IGChangeEmailCodeConfirmationViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEmail:(id)email userSession:(id)session fromSource:(long long)source;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (BOOL)prefersNavigationBarHidden;
- (void)codeConfirmationViewDidTapBackButton;
- (void)codeConfirmationViewDidTapNextButtonWithCode:(id)code shouldConvert:(BOOL)convert;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)textFieldDidChange:(id)change;
@end

#endif /* IGChangeEmailCodeConfirmationViewController_h */
