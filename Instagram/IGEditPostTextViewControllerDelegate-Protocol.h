//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEditPostTextViewControllerDelegate_Protocol_h
#define IGEditPostTextViewControllerDelegate_Protocol_h
@import Foundation;

@protocol IGEditPostTextViewControllerDelegate <NSObject>
/* instance methods */
- (void)textViewController:(id)controller didChangeContentHeightToHeight:(double)height;
@optional
/* instance methods */
- (void)textViewController:(id)controller textViewDidBeginEditing:(id)editing;
- (void)textViewController:(id)controller textViewDidChange:(id)change;
- (BOOL)textViewController:(id)controller shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (BOOL)textViewController:(id)controller shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)textViewController:(id)controller textViewDidChangeSelection:(id)selection;
@end

#endif /* IGEditPostTextViewControllerDelegate_Protocol_h */