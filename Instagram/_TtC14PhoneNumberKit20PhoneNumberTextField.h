//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC14PhoneNumberKit20PhoneNumberTextField_h
#define _TtC14PhoneNumberKit20PhoneNumberTextField_h
@import Foundation;

#include "UITextField.h"
#include "UITextFieldDelegate-Protocol.h"

@class NSString;

@interface _TtC14PhoneNumberKit20PhoneNumberTextField : UITextField<UITextFieldDelegate> { // (Swift)
  /* instance variables */
   phoneNumberKit;
   $__lazy_storage_$_flagButton;
   $__lazy_storage_$__defaultRegion;
   withPrefix;
   withFlag;
   withExamplePlaceholder;
   countryCodePlaceholderColor;
   numberPlaceholderColor;
   _withDefaultPickerUI;
   modalPresentationStyle;
   isPartialFormatterEnabled;
   maxDigits;
   $__lazy_storage_$_partialFormatter;
   nonNumericSet;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) NSObject<UITextFieldDelegate> *delegate;

/* instance methods */
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didPressFlagButton;
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (BOOL)textFieldShouldBeginEditing:(id)editing;
- (void)textFieldDidBeginEditing:(id)editing;
- (BOOL)textFieldShouldEndEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing reason:(long long)reason;
- (BOOL)textFieldShouldClear:(id)clear;
- (BOOL)textFieldShouldReturn:(id)return;
- (void)textFieldDidChangeSelection:(id)selection;
@end

#endif /* _TtC14PhoneNumberKit20PhoneNumberTextField_h */