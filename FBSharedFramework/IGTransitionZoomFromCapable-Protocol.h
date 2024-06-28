//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTransitionZoomFromCapable_Protocol_h
#define IGTransitionZoomFromCapable_Protocol_h
@import Foundation;

@protocol IGTransitionZoomFromCapable <IGTransitionZoomMagicMoveSubviewProvider, IGTransitionZoomAware>
/* instance methods */
- (BOOL)shouldZoomFromTransition;
- (id)transitionZoomViewFromItem:(id)item withZoomContext:(id)context shouldMoveToVisiblePosition:(BOOL)position;
- (void)prepareBackwardZoomTransitionWithContext:(id)context completionHandler:(id /* block */)handler;
- (void)didCompleteBackwardZoomTransition;
@end

#endif /* IGTransitionZoomFromCapable_Protocol_h */
