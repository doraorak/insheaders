//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC24IGDirectNotesPogVideoKit43IGDirectNotesPogVideoCreationViewController_IGDirectNotesPogVideoKit_h
#define _TtC24IGDirectNotesPogVideoKit43IGDirectNotesPogVideoCreationViewController_IGDirectNotesPogVideoKit_h
@import Foundation;

@interface _TtC24IGDirectNotesPogVideoKit43IGDirectNotesPogVideoCreationViewController (IGDirectNotesPogVideoKit) <IGStoryPostCaptureEditingViewControllerDelegate>
/* instance methods */
- (void)storyPostCaptureEditingViewController:(id)controller didShareToStory:(long long)story andDirectRecipients:(id)recipients storyModelArray:(id)array metadataArray:(id)array highlightIds:(id)ids exitPoint:(long long)point completion:(id /* block */)completion;
- (void)storyPostCaptureEditingViewControllerDidCancel:(id)cancel;
- (void)storyPostCaptureEditingViewController:(id)controller didTapSendRollCallWithDirectRecipients:(id)recipients;
- (void)storyPostCaptureEditingViewController:(id)controller didTapSendPermanentMediaWithAsset:(id)asset entryPoint:(long long)point;
- (void)storyPostCaptureEditingViewController:(id)controller didTapConfirmNotesPogVideoWithComposition:(id)composition;
@end

#endif /* _TtC24IGDirectNotesPogVideoKit43IGDirectNotesPogVideoCreationViewController_IGDirectNotesPogVideoKit_h */
