//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC3CDS16CDSTextInputView_h
#define _TtC3CDS16CDSTextInputView_h
@import Foundation;

#include "UIControl.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UITextInputTraits-Protocol.h"
#include "_TtP26FOAPlainTextInputPrimitive34FOAPlainTextInputPrimitiveDelegate_-Protocol.h"

@class NSString;

@interface _TtC3CDS16CDSTextInputView : UIControl<UITextInputTraits, _TtP26FOAPlainTextInputPrimitive34FOAPlainTextInputPrimitiveDelegate_, UIGestureRecognizerDelegate> {
  /* instance variables */
   mode;
   placeholderText;
   showPlaceholderWhenNonEmpty;
   maxLength;
   validationState;
   hasShadow;
   isMultiline;
   desiredHeightConstrainedToNumberOfLines;
   delegate;
   textInputPrimitive;
   label;
   currentWidgetType;
   widget;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, copy) NSString *textContentType;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (BOOL)becomeFirstResponder;
- (void)tap:(id)tap;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)clearButtonTapped;
- (void)showPasswordTapped;
- (void)hidePasswordTapped;
- (void)textInputPrimitiveDidBeginEditing:(id)editing;
- (void)textInputPrimitiveDidEndEditing:(id)editing;
- (void)textInputPrimitiveDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC3CDS16CDSTextInputView_h */