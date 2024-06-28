//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCameraCaptureImageAction_h
#define FBCameraCaptureImageAction_h
@import Foundation;

@class AVCaptureDevice;
@protocol OS_dispatch_queue;

@interface FBCameraCaptureImageAction : NSObject

@property (readonly, nonatomic) BOOL highResolution;
@property (readonly, nonatomic) BOOL rotatedToVideoOrientation;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly, copy, nonatomic) id /* block */ livePhotoCompletion;
@property (readonly, nonatomic) AVCaptureDevice *captureDevice;

/* class methods */
+ (id)newWithHighResolutionCaptureEnabled:(BOOL)enabled rotatedToVideoOrientation:(BOOL)orientation completionQueue:(id)queue completion:(id /* block */)completion;
+ (id)newWithHighResolutionCaptureEnabled:(BOOL)enabled captureDevice:(id)device rotatedToVideoOrientation:(BOOL)orientation completionQueue:(id)queue completion:(id /* block */)completion;
+ (id)newLivePhotoCaptureWithHighResolutionCaptureEnabled:(BOOL)enabled captureDevice:(id)device rotatedToVideoOrientation:(BOOL)orientation completionQueue:(id)queue completion:(id /* block */)completion livePhotoCompletion:(id /* block */)completion;

/* instance methods */
- (id)initWithHighResolutionCaptureEnabled:(BOOL)enabled captureDevice:(id)device rotatedToVideoOrientation:(BOOL)orientation completionQueue:(id)queue completion:(id /* block */)completion livePhotoCompletion:(id /* block */)completion;
@end

#endif /* FBCameraCaptureImageAction_h */
