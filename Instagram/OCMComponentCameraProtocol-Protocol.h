//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef OCMComponentCameraProtocol_Protocol_h
#define OCMComponentCameraProtocol_Protocol_h
@import Foundation;

@protocol OCMComponentCameraProtocol <OCMComponentProtocol>
/* instance methods */
- (id)cameraEvents;
- (void)switchToCaptureDevice:(id)device completion:(id /* block */)completion;
- (long long)flashMode;
- (void)setFlashMode:(long long)mode;
- (long long)torchMode;
- (void)setTorchMode:(long long)mode;
- (double)maxZoomFactor;
- (double)zoomFactor;
- (void)setZoomFactor:(double)factor;
- (double)zoomScale;
- (void)setZoomScale:(double)scale;
- (void)setFocusAndExposurePoint:(struct CGPoint { double x0; double x1; })point completion:(id /* block */)completion;
- (void)lockFocusWithCompletion:(id /* block */)completion;
- (void)unlockFocusWithCompletion:(id /* block */)completion;
- (struct CGPoint { double x0; double x1; })convertToScaledDevicePointFromPoint:(struct CGPoint { double x0; double x1; })point inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)willStartRecordingVideo;
- (void)didStartRecordingVideo;
- (void)willStopRecordingVideo;
- (void)didStopRecordingVideo;
@end

#endif /* OCMComponentCameraProtocol_Protocol_h */