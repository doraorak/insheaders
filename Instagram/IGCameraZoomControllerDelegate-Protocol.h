//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraZoomControllerDelegate_Protocol_h
#define IGCameraZoomControllerDelegate_Protocol_h
@import Foundation;

@protocol IGCameraZoomControllerDelegate <NSObject>
/* instance methods */
- (void)zoomController:(id)controller didChangeZoomScaleBy:(double)by;
- (void)zoomControllerDidStopZoom:(id)zoom withGestureRecognizer:(id)recognizer;
- (void)zoomControllerDidStopZoom:(id)zoom withGestureRecognizer:(id)recognizer;
- (void)captureButtonDidZoomScale:(double)scale;
@end

#endif /* IGCameraZoomControllerDelegate_Protocol_h */