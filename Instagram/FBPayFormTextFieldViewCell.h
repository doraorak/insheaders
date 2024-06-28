//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayFormTextFieldViewCell_h
#define FBPayFormTextFieldViewCell_h
@import Foundation;

#include "FBPayFormCellBase.h"
#include "FBPayFormCellViewModel.h"
#include "FBPayUPLLoggingAPI-Protocol.h"
#include "UITextFieldDelegate-Protocol.h"

@class NSString, UITextField;
@protocol FBPayDropdownControlling;

@interface FBPayFormTextFieldViewCell : FBPayFormCellBase<UITextFieldDelegate> {
  /* instance variables */
  UITextField *_textField;
  NSObject<FBPayDropdownControlling> *_dropdownController;
  BOOL _shouldEnableOSAutofill;
  BOOL _isNUXFlow;
  NSObject<FBPayUPLLoggingAPI> *_logger;
  FBPayFormCellViewModel *_viewModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)setViewModel:(id)model;
- (void)setLogger:(id)logger;
- (BOOL)isFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)layoutSubviews;
- (void)_setFieldValue:(id)value;
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (BOOL)textFieldShouldReturn:(id)return;
- (void)textFieldDidBeginEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (unsigned long long)accessibilityTraits;
- (id)viewModel;
@end

#endif /* FBPayFormTextFieldViewCell_h */
