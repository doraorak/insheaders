//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGenericSurveyTextView_h
#define IGGenericSurveyTextView_h
@import Foundation;

#include "UIView.h"
#include "UITextViewDelegate-Protocol.h"

@class IGTextView, NSString;
@protocol IGGenericSurveyTextViewDelegate;

@interface IGGenericSurveyTextView : UIView<UITextViewDelegate> {
  /* instance variables */
  IGTextView *_textView;
}

@property (weak, nonatomic) NSObject<IGGenericSurveyTextViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)textViewDidEndEditing:(id)editing;
- (BOOL)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)_doneButtonTapped;
- (void)setPlaceholderText:(id)text;
@end

#endif /* IGGenericSurveyTextView_h */
