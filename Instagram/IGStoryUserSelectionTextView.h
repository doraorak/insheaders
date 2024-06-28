//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryUserSelectionTextView_h
#define IGStoryUserSelectionTextView_h
@import Foundation;

#include "UIView.h"
#include "UITextFieldDelegate-Protocol.h"

@class IGTapButton, NSString, UIColor, UITextField, UIView, UIVisualEffectView;
@protocol IGStoryUserSelectionTextViewDelegate;

@interface IGStoryUserSelectionTextView : UIView<UITextFieldDelegate> {
  /* instance variables */
  UITextField *_searchField;
  IGTapButton *_clearButton;
  UIVisualEffectView *_blurredBackgroundView;
  BOOL _hasInputAccessoryView;
  BOOL _clearButtonVisible;
  NSString *_currentText;
}

@property (weak, nonatomic) NSObject<IGStoryUserSelectionTextViewDelegate> *delegate;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)textFieldShouldBeginEditing:(id)editing;
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (void)_searchFieldDidChange;
- (void)_didTapClearButton;
@end

#endif /* IGStoryUserSelectionTextView_h */
