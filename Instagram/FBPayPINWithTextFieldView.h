//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayPINWithTextFieldView_h
#define FBPayPINWithTextFieldView_h
@import Foundation;

#include "FBPayPINView.h"
#include "FBPayAuthenticationNavigationView.h"
#include "FBPayCredentialAuthHeaderView.h"
#include "FBPaySecurityPINTextFieldView.h"
#include "NSObject-Protocol.h"

@class NSString, UIButton;
@protocol FBPayPINViewDataSource, FBPayPINViewDelegate;

@interface FBPayPINWithTextFieldView : FBPayPINView<NSObject> {
  /* instance variables */
  FBPayAuthenticationNavigationView *_navigationView;
  FBPayCredentialAuthHeaderView *_authHeaderView;
  FBPaySecurityPINTextFieldView *_securityTextField;
  UIButton *_actionButton;
  NSObject<FBPayPINViewDelegate> *_delegate;
  NSObject<FBPayPINViewDataSource> *_dataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_didTapActionButton;
- (void)reloadView;
- (void)reloadViewAnimated;
- (void)showError:(id)error withCompletion:(id /* block */)completion;
- (void)hideErrorMessage;
- (void)startLoadingWithCompletion:(id /* block */)completion;
- (void)stopLoadingWithCompletion:(id /* block */)completion;
- (void)finishLoadingWithCompletion:(id /* block */)completion;
- (id)navigationViewTitle:(id)title;
- (void)navigationViewDidTapLeftButton:(id)button;
- (id)pinHeaderTitleView:(id)view textForUserStep:(long long)step;
- (long long)pinHeaderTitleViewCurrentUserStep:(id)step;
- (id)descriptionViewText:(id)text;
- (BOOL)descriptionViewShouldShowLearnMoreLink:(id)link;
- (void)descriptionViewDidTapLearnMoreLink:(id)link;
- (id)securityTextFieldViewTitle:(id)title;
- (long long)securityTextFieldViewUserStep:(id)step;
- (BOOL)isTextFieldViewInTestMode:(id)mode;
- (void)securityTextFieldView:(id)view didTapOnNumber:(unsigned long long)number;
- (void)securityTextFieldViewDidTapBackSpace:(id)space;
- (void)credentialAuthHeaderViewTermsButton:(id)button;
- (void)credentialAuthHeaderViewDidTapHeaderLink:(id)link;
- (id)delegate;
- (void)setDelegate:(id)delegate;
- (id)dataSource;
- (void)setDataSource:(id)source;
@end

#endif /* FBPayPINWithTextFieldView_h */