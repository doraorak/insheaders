//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC27IGStoryPostCaptureTemplates36IGStoryTemplateEditingViewController_IGStoryPostCaptureTemplates1_h
#define _TtC27IGStoryPostCaptureTemplates36IGStoryTemplateEditingViewController_IGStoryPostCaptureTemplates1_h
@import Foundation;

@interface _TtC27IGStoryPostCaptureTemplates36IGStoryTemplateEditingViewController (IGStoryPostCaptureTemplates1) <IGStoryStickerGestureControllerDataSource, IGStoryStickerGestureControllerDelegate>
/* instance methods */
- (double)stickerGestureController:(id)controller maximumScaleForSticker:(id)sticker;
- (double)stickerGestureController:(id)controller minimumScaleForSticker:(id)sticker;
- (id)stickerViewEnumeratorForStickerGestureController:(id)controller;
- (void)stickerGestureController:(id)controller didTapSticker:(id)sticker atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)stickerGestureController:(id)controller didLongPressOnSticker:(id)sticker longPressGesture:(id)gesture;
- (BOOL)stickerGestureController:(id)controller shouldBeginPositioningSticker:(id)sticker withGesture:(id)gesture;
- (void)stickerGestureController:(id)controller willBeginPositioningSticker:(id)sticker;
- (void)stickerGestureController:(id)controller didUpdateStickerPosition:(id)position;
- (void)stickerGestureController:(id)controller didFinishPositioningSticker:(id)sticker deleted:(BOOL)deleted;
- (void)stickerGestureController:(id)controller willDeleteSticker:(id)sticker;
- (void)stickerGestureController:(id)controller didDeleteSticker:(id)sticker deleteVariant:(long long)variant;
- (BOOL)stickerGestureController:(id)controller stickerCanBePlacedOffscreen:(id)offscreen;
- (BOOL)stickerGestureController:(id)controller stickerCanBePlacedOffGuidelines:(id)guidelines;
- (BOOL)stickerGestureController:(id)controller stickerCanBeDeleted:(id)deleted;
- (id)stickerGestureController:(id)controller additionalStickersForDeletionWithSticker:(id)sticker;
- (void)stickerGestureController:(id)controller didUpdateAlignmentGuideState:(unsigned long long)state;
- (BOOL)stickerGestureController:(id)controller shouldBringStickerToFront:(id)front withGesture:(id)gesture;
- (long long)stickerGestureController:(id)controller minimumIndexForSticker:(id)sticker;
- (long long)stickerGestureController:(id)controller maximumIndexForSticker:(id)sticker;
- (void)stickerGestureController:(id)controller didBringStickerToFront:(id)front;
@end

#endif /* _TtC27IGStoryPostCaptureTemplates36IGStoryTemplateEditingViewController_IGStoryPostCaptureTemplates1_h */
