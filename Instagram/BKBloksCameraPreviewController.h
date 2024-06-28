//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksCameraPreviewController_h
#define BKBloksCameraPreviewController_h
@import Foundation;

#include "BKBloksComponentController.h"

@interface BKBloksCameraPreviewController : BKBloksComponentController {
  /* instance variables */
  BOOL _needsReleaseCameraPreview;
  BOOL _captureSessionDidSetup;
  BOOL _isFrontDevicePosition;
}

/* instance methods */
- (void)didAcquireView:(id)view;
- (void)willRelinquishView:(id)view;
@end

#endif /* BKBloksCameraPreviewController_h */
