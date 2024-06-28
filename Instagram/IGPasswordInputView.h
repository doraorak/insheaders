//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPasswordInputView_h
#define IGPasswordInputView_h
@import Foundation;

#include "UIView.h"
#include "IGInformativeTextView.h"
#include "IGTextFieldDelegate-Protocol.h"

@class IGInsetLayout, NSString;
@protocol IGPasswordInputViewDelegate;

@interface IGPasswordInputView : UIView<IGTextFieldDelegate> {
  /* instance variables */
  BOOL _isCurrentPasswordNeeded;
  IGInformativeTextView *_currentPasswordFieldView;
  IGInformativeTextView *_newPasswordFieldView;
  IGInformativeTextView *_verifyPasswordFieldView;
  NSString *_currentPasswordFieldPlaceholder;
  IGInsetLayout *_layout;
}

@property (weak, nonatomic) NSObject<IGPasswordInputViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIsCurrentPasswordNeeded:(BOOL)needed;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (BOOL)becomeFirstResponder;
- (BOOL)textFieldShouldReturn:(id)return;
- (void)textFieldDidBeginEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (void)textFieldDidChange:(id)change;
@end

#endif /* IGPasswordInputView_h */
