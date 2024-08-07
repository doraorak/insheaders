//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC11BCNComposer23BCNComposerTextViewCell_BCNComposer_h
#define _TtC11BCNComposer23BCNComposerTextViewCell_BCNComposer_h
@import Foundation;

@interface _TtC11BCNComposer23BCNComposerTextViewCell (BCNComposer) <UITextViewDelegate>
/* instance methods */
- (void)textViewDidChange:(id)change;
- (BOOL)textViewShouldBeginEditing:(id)editing;
- (void)textViewDidBeginEditing:(id)editing;
- (void)textViewDidEndEditing:(id)editing;
- (BOOL)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)textViewDidChangeSelection:(id)selection;
- (id)textView:(id)view editMenuForTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range suggestedActions:(id)actions;
@end

#endif /* _TtC11BCNComposer23BCNComposerTextViewCell_BCNComposer_h */
