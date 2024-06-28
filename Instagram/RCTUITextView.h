//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTUITextView_h
#define RCTUITextView_h
@import Foundation;

#include "UITextView.h"
#include "RCTBackedTextInputDelegate-Protocol.h"
#include "RCTBackedTextInputViewProtocol-Protocol.h"
#include "RCTBackedTextViewDelegateAdapter.h"

@class NSAttributedString, NSDictionary, NSString, UIColor, UILabel, UITextInputPasswordRules, UITextPosition, UITextRange, UITextView, UIView;
@protocol UITextInputDelegate, UITextInputTokenizer;

@interface RCTUITextView : UITextView<RCTBackedTextInputViewProtocol> {
  /* instance variables */
  UILabel *_placeholderView;
  UITextView *_detachedTextView;
  RCTBackedTextViewDelegateAdapter *_textInputDelegateAdapter;
}

@property (weak, nonatomic) NSObject<RCTBackedTextInputDelegate> *textInputDelegate;
@property (nonatomic) BOOL contextMenuHidden;
@property (readonly, nonatomic) BOOL textWasPasted;
@property (readonly, nonatomic) BOOL dictationRecognizing;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) UIColor *placeholderColor;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic) long long clearButtonMode;
@property (nonatomic) BOOL caretHidden;
@property (retain, nonatomic) NSString *inputAccessoryViewID;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } textContainerInset;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (retain, nonatomic) UIView *inputView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (retain, nonatomic) NSDictionary *defaultTextAttributes;
@property (nonatomic) BOOL editable;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) BOOL scrollEnabled;
@property (readonly, nonatomic) double zoomScale;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (copy, nonatomic) NSString *text;
@property (copy) UITextRange *selectedTextRange;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (weak, nonatomic) NSObject<UITextInputDelegate> *inputDelegate;
@property (readonly, nonatomic) NSObject<UITextInputTokenizer> *tokenizer;
@optional
@property (readonly, nonatomic) UIView *textInputView;
@optional
@property (nonatomic) long long selectionAffinity;
@optional
@property (readonly, nonatomic) id insertDictationResultPlaceholder;
@property (readonly, nonatomic) BOOL hasText;
@optional
@property (nonatomic) long long autocapitalizationType;
@optional
@property (nonatomic) long long autocorrectionType;
@optional
@property (nonatomic) long long spellCheckingType;
@optional
@property (nonatomic) long long smartQuotesType;
@optional
@property (nonatomic) long long smartDashesType;
@optional
@property (nonatomic) long long smartInsertDeleteType;
@optional
@property (nonatomic) long long inlinePredictionType;
@optional
@property (nonatomic) long long keyboardType;
@optional
@property (nonatomic) long long keyboardAppearance;
@optional
@property (nonatomic) long long returnKeyType;
@optional
@property (nonatomic) BOOL secureTextEntry;
@optional
@property (copy, nonatomic) NSString *textContentType;
@optional
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setDelegate:(id)delegate;
- (void)setIsAccessibilityElement:(BOOL)element;
- (id)accessibilityLabel;
- (void)textDidChange;
- (void)setFont:(id)font;
- (void)setTextAlignment:(long long)alignment;
- (void)setSelectedTextRange:(id)range notifyDelegate:(BOOL)delegate;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x0; unsigned long long x1; })visible;
- (void)paste:(id)paste;
- (void)selectAll:(id)all;
- (struct CGSize { double x0; double x1; })placeholderSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;
- (void)buildMenuWithBuilder:(id)builder;
- (void)dictationRecordingDidEnd;
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertResult:(BOOL)result;
- (void)_invalidatePlaceholderVisibility;
- (void)_updatePlaceholder;
- (id)_placeholderTextAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)position;
@end

#endif /* RCTUITextView_h */
