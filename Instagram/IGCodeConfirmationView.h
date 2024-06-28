//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCodeConfirmationView_h
#define IGCodeConfirmationView_h
@import Foundation;

#include "UIView.h"
#include "IGCodeConfirmationViewModel.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGAccessFooterView, IGCoreTextView, IGLabel, IGRegistrationNextButton, IGRegistrationTextField, NSString, UIButton, UILabel;
@protocol IGCoreTextLinkHandler><IGTextFieldDelegate><IGCodeConfirmationViewDelegate;

@interface IGCodeConfirmationView : UIView<UIGestureRecognizerDelegate> {
  /* instance variables */
  IGCodeConfirmationViewModel *_viewModel;
  UIButton *_backButton;
  UILabel *_titleLabel;
  IGCoreTextView *_subTitleTextView;
  IGRegistrationTextField *_confirmationCodeField;
  IGLabel *_inlineErrorLabel;
  IGRegistrationNextButton *_nextButton;
  IGAccessFooterView *_footerView;
}

@property (weak, nonatomic) NSObject<IGCoreTextLinkHandler><IGTextFieldDelegate><IGCodeConfirmationViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model;
- (void)layoutSubviews;
- (BOOL)becomeFirstResponder;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)_hideKeyboard;
- (void)_didTapBackButton;
- (void)_didTapNextButton;
- (void)configureWithViewModel:(id)model;
- (void)accessFooterViewDidTapPrimaryButton:(id)button;
- (void)accessFooterViewDidTapSecondaryButton:(id)button;
@end

#endif /* IGCodeConfirmationView_h */
