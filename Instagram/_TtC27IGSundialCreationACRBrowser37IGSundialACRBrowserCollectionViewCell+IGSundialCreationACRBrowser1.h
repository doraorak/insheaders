//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC27IGSundialCreationACRBrowser37IGSundialACRBrowserCollectionViewCell_IGSundialCreationACRBrowser1_h
#define _TtC27IGSundialCreationACRBrowser37IGSundialACRBrowserCollectionViewCell_IGSundialCreationACRBrowser1_h
@import Foundation;

@interface _TtC27IGSundialCreationACRBrowser37IGSundialACRBrowserCollectionViewCell (IGSundialCreationACRBrowser1) <IGSundialVideoPlaybackViewDelegate>
/* instance methods */
- (void)sundialVideoPlaybackViewDidLoadVideo:(id)video;
- (void)sundialVideoPlaybackView:(id)view didUpdateLoadingProgress:(double)progress;
- (void)sundialVideoPlaybackViewDidPartiallyLoadPreviewImage:(id)image;
- (void)sundialVideoPlaybackViewDidLoadPreviewImage:(id)image;
- (void)sundialVideoPlaybackViewDidStartPlaying:(id)playing;
- (void)sundialVideoPlaybackView:(id)view didUpdatePlaybackState:(struct { long long x0; double x1; double x2; })state;
- (void)sundialVideoPlaybackViewDidFail:(id)fail withError:(id)error;
- (void)sundialVideoPlaybackViewDidAccessibilityActivate:(id)activate;
- (void)sundialVideoPlaybackView:(id)view willBeginZoomInteractionForView:(id)view withLogging:(id)logging;
- (void)sundialVideoPlaybackView:(id)view didEndZoomInteractionForView:(id)view withLogging:(id)logging;
- (void)sundialVideoPlaybackViewDidFullyLoadVideo:(id)video;
- (void)sundialVideoPlaybackViewDidAdoptPreconfiguredPlayer:(id)player;
- (void)sundialVideoPlaybackViewScrollableOverlayViewDidScrollToIndex:(long long)index withMediaId:(id)id;
@end

#endif /* _TtC27IGSundialCreationACRBrowser37IGSundialACRBrowserCollectionViewCell_IGSundialCreationACRBrowser1_h */
