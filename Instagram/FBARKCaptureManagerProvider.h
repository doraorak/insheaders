//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARKCaptureManagerProvider_h
#define FBARKCaptureManagerProvider_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@interface FBARKCaptureManagerProvider : NSObject<NSObject>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)captureManagerWithCameraConfiguration:(const struct FBCameraConfiguration *)configuration requiredCameraCapabilities:(unsigned long long)capabilities orientationTracker:(id)tracker systemAudioCaptureSessionInteractor:(id)interactor audioPipelineProviding:(id)providing captureCoordinatorLogger:(id)logger analyticsPayloadProvider:(id)provider experimentManager:(id)manager;
@end

#endif /* FBARKCaptureManagerProvider_h */
