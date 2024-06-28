//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FOAStoryTextEntryTextViewDelegate_Protocol_h
#define FOAStoryTextEntryTextViewDelegate_Protocol_h
@import Foundation;

@protocol FOAStoryTextEntryTextViewDelegate <NSObject, UIScrollViewDelegate>
@optional
/* instance methods */
- (BOOL)textEntryTextViewShouldBeginEditing:(id)editing;
- (BOOL)textEntryTextViewShouldEndEditing:(id)editing;
- (void)textEntryTextViewDidBeginEditing:(id)editing;
- (void)textEntryTextViewDidEndEditing:(id)editing;
- (BOOL)textEntryTextView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)textEntryTextViewDidChange:(id)change;
- (void)textEntryTextViewDidChangeSelection:(id)selection;
@end

#endif /* FOAStoryTextEntryTextViewDelegate_Protocol_h */
