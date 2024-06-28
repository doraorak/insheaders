//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksTextInputComponentController_h
#define BKBloksTextInputComponentController_h
@import Foundation;

#include "BKBloksComponentController.h"
#include "BKBloksTextFieldTextProtocol-Protocol.h"
#include "BKTextInputCursorColorProtocol-Protocol.h"
#include "UITextFieldDelegate-Protocol.h"

@class NSNumber, NSString, UITextField;
@protocol BKBloksTextInputFormatterProtocol;

@interface BKBloksTextInputComponentController : BKBloksComponentController<UITextFieldDelegate, BKTextInputCursorColorProtocol, BKBloksTextFieldTextProtocol> {
  /* instance variables */
  UITextField *_textField;
  NSString *_textFieldText;
  NSObject<BKBloksTextInputFormatterProtocol> *_formatter;
  NSNumber *_maxTextLength;
  id _allowTextChangeCallback;
  id _keyboardWillShowObserver;
  id _keyboardWillHideObserver;
  BOOL _cursorColorMatchesText;
  BOOL _isNotInitialRender;
  BOOL _shouldPreventPasswordCleanupUntilUnfocus;
  BOOL _isDeletingText;
  NSString *_previousToolbarTitle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)didMount:(id)mount;
- (void)dealloc;
- (void)didAcquireView:(id)view;
- (void)willUnmount:(id)unmount;
- (id)textFieldText;
- (void)setTextFieldText:(id)text;
- (void)textFieldDidBeginEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (void)textFieldDidChange:(id)change;
- (BOOL)textFieldShouldReturn:(id)return;
- (void)_keyboardWillShow:(id)show;
- (void)_keyboardWillHide:(id)hide;
- (void)_textFieldToolBarButtonTapped:(id)tapped;
- (void)setCursorColorMatchesText:(BOOL)text;
@end

#endif /* BKBloksTextInputComponentController_h */