//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPhotoEditorViewController_IGFeedCompositionMediaViewProvider_h
#define IGPhotoEditorViewController_IGFeedCompositionMediaViewProvider_h
@import Foundation;

@interface IGPhotoEditorViewController (IGFeedCompositionMediaViewProvider) <IGStoryMediaCompositionViewDelegate>
/* instance methods */
- (BOOL)mediaCompositionViewIsForSundial:(id)sundial;
- (BOOL)mediaCompositionViewIsForStories:(id)stories;
- (void)mediaCompositionView:(id)view didSettleOnColorFilter:(id)filter;
- (void)mediaCompositionViewColorFilterDidFinishLoading:(id)loading;
- (BOOL)mediaCompositionView:(id)view shouldBeginPositioningAndResizingMediaWithGesture:(id)gesture;
- (BOOL)mediaCompositionViewShouldDecoupleBurnedInStickersFromBackgroundTransform:(id)transform;
- (void)mediaCompositionViewDidBeginResizingAndPositioningMedia:(id)media;
- (void)mediaCompositionViewDidFinishPositioningAndResizingMedia:(id)media;
- (BOOL)mediaCompositionViewIsInClipTransformMode:(id)mode;
- (struct METAMediaTransform { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; })mediaCompositionView:(id)view additionalMediaTransformAtMediaTime:(double)time;
- (void)mediaCompositionView:(id)view stickerWasAddedToComposition:(id)composition;
- (void)mediaCompositionView:(id)view stickerWillBeRemovedFromComposition:(id)composition;
- (void)mediaCompositionView:(id)view didPlayVideoToTime:(double)time;
- (void)mediaCompositionViewPlaybackDidFail:(id)fail withError:(id)error isFatalError:(BOOL)error;
- (void)mediaCompositionView:(id)view effectivePlaybackRateDidChange:(double)change;
- (void)mediaCompositionViewDidPlayToEnd:(id)end;
- (void)mediaCompositionViewDidDraw:(id)draw atPlayBackTime:(double)time;
- (void)mediaCompositionView:(id)view loadingIndicatorVisibilityChanged:(BOOL)changed;
- (void)mediaCompositionViewDidUpdateContentTransform:(id)transform;
@end

#endif /* IGPhotoEditorViewController_IGFeedCompositionMediaViewProvider_h */
