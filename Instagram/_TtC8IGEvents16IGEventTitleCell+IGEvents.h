//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC8IGEvents16IGEventTitleCell_IGEvents_h
#define _TtC8IGEvents16IGEventTitleCell_IGEvents_h
@import Foundation;

@interface _TtC8IGEvents16IGEventTitleCell (IGEvents) <UITextViewDelegate>
/* instance methods */
- (BOOL)textViewShouldBeginEditing:(id)editing;
- (void)textViewDidChange:(id)change;
- (BOOL)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)textViewDidBeginEditing:(id)editing;
- (void)textViewDidEndEditing:(id)editing;
@end

#endif /* _TtC8IGEvents16IGEventTitleCell_IGEvents_h */