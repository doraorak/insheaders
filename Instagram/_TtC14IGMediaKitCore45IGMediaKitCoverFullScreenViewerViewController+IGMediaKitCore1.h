//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC14IGMediaKitCore45IGMediaKitCoverFullScreenViewerViewController_IGMediaKitCore1_h
#define _TtC14IGMediaKitCore45IGMediaKitCoverFullScreenViewerViewController_IGMediaKitCore1_h
@import Foundation;

@interface _TtC14IGMediaKitCore45IGMediaKitCoverFullScreenViewerViewController (IGMediaKitCore1) <IGTransitionZoomToCapable>
/* instance methods */
- (void)zoomTransitionWillPrepareWithContext:(id)context;
- (void)zoomTransitionWillBeginWithContext:(id)context;
- (BOOL)shouldZoomToTransition;
- (id)transitionZoomViewToItem:(id)item withZoomContext:(id)context;
- (id)transitionZoomItemOverrideOnExit;
- (void)didCompleteForwardZoomTransition;
- (id)magicMoveSubviews;
- (void)prepareForwardZoomTransitionWithContext:(id)context completionHandler:(id /* block */)handler;
@end

#endif /* _TtC14IGMediaKitCore45IGMediaKitCoverFullScreenViewerViewController_IGMediaKitCore1_h */
