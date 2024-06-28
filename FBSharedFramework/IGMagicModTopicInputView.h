//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMagicModTopicInputView_h
#define IGMagicModTopicInputView_h
@import Foundation;

#include "UIView.h"
#include "IGStoryTextEntryTextView.h"
#include "IGStoryTextEntryTextViewDelegate-Protocol.h"
#include "IGTextView.h"

@class NSString, UIView;
@protocol IGMagicModTopicInputViewDelegate;

@interface IGMagicModTopicInputView : UIView<IGStoryTextEntryTextViewDelegate> {
  /* instance variables */
  UIView *_containerView;
  IGTextView *_internalTextView;
  IGStoryTextEntryTextView *_topicTextView;
}

@property (weak, nonatomic) NSObject<IGMagicModTopicInputViewDelegate> *delegate;
@property (retain, nonatomic) NSString *topic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)_configTextViewWithInternalTextView:(id)view;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (BOOL)textEntryTextViewShouldBeginEditing:(id)editing;
- (void)textEntryTextViewDidChange:(id)change;
- (BOOL)textEntryTextView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)textEntryTextViewDidChangeSelection:(id)selection;
- (void)textEntryTextViewDidEndEditing:(id)editing;
@end

#endif /* IGMagicModTopicInputView_h */