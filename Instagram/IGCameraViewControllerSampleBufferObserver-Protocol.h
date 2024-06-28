//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraViewControllerSampleBufferObserver_Protocol_h
#define IGCameraViewControllerSampleBufferObserver_Protocol_h
@import Foundation;

@protocol IGCameraViewControllerSampleBufferObserver <NSObject>
/* instance methods */
- (void)cameraViewController:(id)controller willProcessVideoBuffer:(struct opaqueCMSampleBuffer *)buffer metadata:(id)metadata;
- (void)cameraViewController:(id)controller didReceiveProcessedVideoBuffer:(struct opaqueCMSampleBuffer *)buffer metadata:(id)metadata;
- (void)cameraViewController:(id)controller didReceiveAudioBuffer:(struct opaqueCMSampleBuffer *)buffer withVolumeLevel:(float)level;
@end

#endif /* IGCameraViewControllerSampleBufferObserver_Protocol_h */