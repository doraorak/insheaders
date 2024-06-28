//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedAddYoursPromptEntryView_h
#define IGFeedAddYoursPromptEntryView_h
@import Foundation;

#include "UIView.h"
#include "UITextFieldDelegate-Protocol.h"

@class NSString, UILabel, UITextField, UIView;
@protocol IGFeedAddYoursPromptEntryViewDelegate;

@interface IGFeedAddYoursPromptEntryView : UIView<UITextFieldDelegate> {
  /* instance variables */
  UILabel *_titleLabel;
  UITextField *_textField;
  UIView *_underlineView;
  UILabel *_privacyDisclaimerLabel;
  long long _maxCharacterCount;
}

@property (weak, nonatomic) NSObject<IGFeedAddYoursPromptEntryViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (BOOL)becomeFirstResponder;
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (void)_textFieldDidChange:(id)change;
@end

#endif /* IGFeedAddYoursPromptEntryView_h */