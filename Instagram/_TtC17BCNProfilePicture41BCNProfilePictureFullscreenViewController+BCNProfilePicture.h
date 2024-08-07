//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC17BCNProfilePicture41BCNProfilePictureFullscreenViewController_BCNProfilePicture_h
#define _TtC17BCNProfilePicture41BCNProfilePictureFullscreenViewController_BCNProfilePicture_h
@import Foundation;

@interface _TtC17BCNProfilePicture41BCNProfilePictureFullscreenViewController (BCNProfilePicture) <IGTransitionZoomToCapable>
/* instance methods */
- (BOOL)shouldZoomToTransition;
- (id)transitionZoomViewToItem:(id)item withZoomContext:(id)context;
- (void)didCompleteForwardZoomTransition;
- (void)zoomTransitionWillBeginWithContext:(id)context;
- (void)zoomTransitionWillPrepareWithContext:(id)context;
- (id)transitionZoomItemOverrideOnExit;
- (id)magicMoveSubviews;
- (void)prepareForwardZoomTransitionWithContext:(id)context completionHandler:(id /* block */)handler;
@end

#endif /* _TtC17BCNProfilePicture41BCNProfilePictureFullscreenViewController_BCNProfilePicture_h */
