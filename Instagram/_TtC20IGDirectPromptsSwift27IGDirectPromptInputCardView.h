//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC20IGDirectPromptsSwift27IGDirectPromptInputCardView_h
#define _TtC20IGDirectPromptsSwift27IGDirectPromptInputCardView_h
@import Foundation;

#include "IGBaseView.h"
#include "_TtP20IGDirectPromptsSwift35IGDirectPromptInputCardViewDelegate_-Protocol.h"

@class NSString;

@interface _TtC20IGDirectPromptsSwift27IGDirectPromptInputCardView : IGBaseView { // (Swift)
  /* instance variables */
   shouldDismissKeyboardOnReturn;
   textInput;
   headerView;
   headerViewSize;
   accessoryView;
   accessoryViewSize;
   topInset;
   placeholderText;
   $__lazy_storage_$_promptCardView;
}

@property (nonatomic, weak) NSObject<_TtP20IGDirectPromptsSwift35IGDirectPromptInputCardViewDelegate_> *delegate;
@property (nonatomic, copy) NSString *text;

/* instance methods */
- (id)initWithTopInset:(double)inset placeholderText:(id)text headerView:(id)view headerViewSize:(struct CGSize { double x0; double x1; })size accessoryView:(id)view accessoryViewSize:(struct CGSize { double x0; double x1; })size;
- (void)textInputBecomeFirstResponder;
- (void)textInputResignFirstResponder;
- (void)layoutSubviews;
- (void)updateBackgroundColor:(id)color;
- (void)didTapOnPromptSuggestion:(id)suggestion;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC20IGDirectPromptsSwift27IGDirectPromptInputCardView_h */
