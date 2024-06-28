//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEditPostTextViewController_h
#define IGEditPostTextViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGAutocompleteControllerTextInput-Protocol.h"
#include "IGEditPostTextViewControllerDelegate-Protocol.h"
#include "IGKeyboardObserverHideDelegate-Protocol.h"
#include "IGKeyboardObserverShowDelegate-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class IGKeyboardObserver, NSAttributedString, NSString, UIFont, UILabel, UITextInputPasswordRules, UITextView;

@interface IGEditPostTextViewController : UIViewController<IGKeyboardObserverHideDelegate, IGKeyboardObserverShowDelegate, IGAutocompleteControllerTextInput, UITextViewDelegate> {
  /* instance variables */
  UIFont *_defaultFont;
  double _horizontalTextContainerPadding;
  double _extraBottomPadding;
  IGKeyboardObserver *_keyboardObserver;
  BOOL _enableHeightChangeFix;
  BOOL _shouldInsetTextForKeyboard;
}

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UILabel *placeholderLabel;
@property (nonatomic) double height;
@property (weak, nonatomic) NSObject<IGEditPostTextViewControllerDelegate> *delegate;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *placeholderText;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;
@property (nonatomic) long long spellCheckingType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@optional
@property (nonatomic) long long autocapitalizationType;
@optional
@property (nonatomic) long long autocorrectionType;
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
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@optional
@property (nonatomic) BOOL secureTextEntry;
@optional
@property (copy, nonatomic) NSString *textContentType;
@optional
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;

/* instance methods */
- (id)initWithDefaultFont:(id)font horizontalTextContainerPadding:(double)padding extraBottomPadding:(double)padding enableHeightChangeFix:(BOOL)fix;
- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)disappear;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)clearText;
- (void)beginEditing;
- (void)textViewDidChangeSelection:(id)selection;
- (BOOL)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)textViewDidBeginEditing:(id)editing;
- (void)textViewDidEndEditing:(id)editing;
- (void)textViewDidChange:(id)change;
- (id)accessibilityValue;
- (id)beginningOfDocument;
- (id)positionFromPosition:(id)position offset:(long long)offset;
- (id)textRangeFromPosition:(id)position toPosition:(id)position;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })point;
- (void)setSelectedTextRange:(id)range;
- (long long)offsetFromPosition:(id)position toPosition:(id)position;
- (id)inputTextView;
- (void)keyboardObserverKeyboardDidHide:(id)hide;
- (void)keyboardObserver:(id)observer keyboardWillHideWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidShow:(id)show;
- (void)keyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
@end

#endif /* IGEditPostTextViewController_h */
