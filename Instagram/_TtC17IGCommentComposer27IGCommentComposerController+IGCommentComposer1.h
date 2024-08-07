//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC17IGCommentComposer27IGCommentComposerController_IGCommentComposer1_h
#define _TtC17IGCommentComposer27IGCommentComposerController_IGCommentComposer1_h
@import Foundation;

@interface _TtC17IGCommentComposer27IGCommentComposerController (IGCommentComposer1) <IGGrowingTextViewDelegate>
/* instance methods */
- (void)growingTextViewDidBeginEditing:(id)editing;
- (void)growingTextViewDidEndEditing:(id)editing;
- (void)growingTextViewDidChange:(id)change;
- (BOOL)growingTextView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)growingTextView:(id)view willChangeHeight:(double)height;
- (void)growingTextView:(id)view didChangeHeight:(double)height;
- (BOOL)growingTextViewShouldReturn:(id)return;
@end

#endif /* _TtC17IGCommentComposer27IGCommentComposerController_IGCommentComposer1_h */
