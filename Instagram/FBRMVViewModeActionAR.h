//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBRMVViewModeActionAR_h
#define FBRMVViewModeActionAR_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@protocol OS_dispatch_queue;

@interface FBRMVViewModeActionAR : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  id /* block */ _captureImage_completion;
  NSObject<OS_dispatch_queue> *_captureImage_completionQueue;
  id /* block */ _startRecording_completion;
  id /* block */ _stopRecording_completion;
  NSObject<OS_dispatch_queue> *_stopRecording_completionQueue;
}

/* class methods */
+ (id)cancelRecording;
+ (id)captureImageWithCompletion:(id /* block */)completion completionQueue:(id)queue;
+ (id)startRecordingWithCompletion:(id /* block */)completion;
+ (id)stopRecordingWithCompletion:(id /* block */)completion completionQueue:(id)queue;
+ (id)toggleCameraPosition;

/* instance methods */
- (void)matchToggleCameraPosition:(id /* block */)position captureImage:(id /* block */)image startRecording:(id /* block */)recording cancelRecording:(id /* block */)recording stopRecording:(id /* block */)recording;
@end

#endif /* FBRMVViewModeActionAR_h */
