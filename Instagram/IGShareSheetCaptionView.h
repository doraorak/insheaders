//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShareSheetCaptionView_h
#define IGShareSheetCaptionView_h
@import Foundation;

#include "UIView.h"
#include "IGAutocompleteController.h"
#include "IGAutocompleteControllerDelegate-Protocol.h"
#include "IGAutocompleteControllerTextInput-Protocol.h"
#include "IGCreationFlowSeparatorView.h"
#include "UITextViewDelegate-Protocol.h"

@class IGTextView, NSString, UITextInputPasswordRules;
@protocol IGShareSheetCaptionViewDelegate;

@interface IGShareSheetCaptionView : UIView<IGAutocompleteControllerDelegate, UITextViewDelegate, IGAutocompleteControllerTextInput> {
  /* instance variables */
  IGCreationFlowSeparatorView *_titleAndDescriptionSeparator;
  IGAutocompleteController *_autocompleteController;
  IGTextView *_captionTextView;
  IGTextView *_titleTextView;
  NSObject<IGShareSheetCaptionViewDelegate> *_delegate;
  long long _autocompleteSource;
}

@property (retain, nonatomic) NSString *caption;
@property (retain, nonatomic) NSString *title;
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
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@optional
@property (nonatomic) BOOL secureTextEntry;
@optional
@property (copy, nonatomic) NSString *textContentType;
@optional
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;

/* instance methods */
- (id)initWithUserSession:(id)session parentViewController:(id)controller analyticsModule:(id)module searchNetworkAttribution:(long long)attribution searchEntrypoint:(long long)entrypoint delegate:(id)delegate;
- (void)layoutSubviews;
- (void)textViewDidChange:(id)change;
- (void)textViewDidBeginEditing:(id)editing;
- (void)textViewDidEndEditing:(id)editing;
- (BOOL)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)autocompleteController:(id)controller willShowContainerView:(id)view type:(long long)type;
- (void)autocompleteController:(id)controller willHideContainerView:(id)view;
- (void)autocompleteControllerDidAutocomplete:(id)autocomplete autocompleteText:(id)text resultUser:(id)user;
- (void)autocompleteController:(id)controller atIndex:(long long)index isUserSearch:(BOOL)search allResults:(id)results indexInNullState:(unsigned long long)state;
- (void)autocompleteControllerDidReload:(id)reload;
- (id)text;
- (void)setText:(id)text;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (id)beginningOfDocument;
- (id)positionFromPosition:(id)position offset:(long long)offset;
- (id)textRangeFromPosition:(id)position toPosition:(id)position;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })point;
- (void)setSelectedTextRange:(id)range;
- (long long)offsetFromPosition:(id)position toPosition:(id)position;
- (id)inputTextView;
@end

#endif /* IGShareSheetCaptionView_h */