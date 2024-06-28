//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC38IGFeedItemShowreelNativeCellController42IGFeedItemShowreelNativeCellControllerImpl_IGFeedItemShowreelNativeCellController_h
#define _TtC38IGFeedItemShowreelNativeCellController42IGFeedItemShowreelNativeCellControllerImpl_IGFeedItemShowreelNativeCellController_h
@import Foundation;

@interface _TtC38IGFeedItemShowreelNativeCellController42IGFeedItemShowreelNativeCellControllerImpl (IGFeedItemShowreelNativeCellController) <IGCreativeTransformationsRenderingDelegate>
/* instance methods */
- (void)renderingController:(id)controller didTapTouchableRegionAtPoint:(struct CGPoint { double x0; double x1; })point type:(id)type value:(id)value previouslyTappedValue:(id)value gestureRecognizer:(id)recognizer;
- (void)renderingController:(id)controller didLongPressTouchableRegionAtPoint:(struct CGPoint { double x0; double x1; })point type:(id)type value:(id)value gestureRecognizer:(id)recognizer gestureState:(long long)state;
- (void)renderingController:(id)controller didTapNonTouchableRegion:(id)region;
- (void)renderingController:(id)controller didLongPressNonTouchableRegion:(id)region gestureState:(long long)state;
- (void)renderingController:(id)controller didTapToOpenMultiDocumentWithName:(id)name closeMultiDocumentBlock:(id /* block */)block;
- (void)renderingControllerShouldFallbackRendering:(id)rendering;
- (void)renderingController:(id)controller shouldFallbackRendering:(BOOL *)rendering;
- (void)renderingControllerIsReadyToPlayback:(id)playback;
- (void)renderingControllerHasLoopedIn:(id)in;
- (void)renderingControllerDidStartPlayback:(id)playback;
- (void)renderingControllerDidFinishPlayback:(id)playback;
@end

#endif /* _TtC38IGFeedItemShowreelNativeCellController42IGFeedItemShowreelNativeCellControllerImpl_IGFeedItemShowreelNativeCellController_h */