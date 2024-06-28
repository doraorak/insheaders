//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AESelfieCaptureInteractorState_h
#define AESelfieCaptureInteractorState_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "AEFaceAlignment.h"
#include "AESelfieCapturedData.h"

@interface AESelfieCaptureInteractorState : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  AEFaceAlignment *_faceAligned_alignment;
  AESelfieCapturedData *_videoRecorded_capturedData;
}

/* class methods */
+ (id)initialized;
+ (id)aligningFinished;
+ (id)aligningStarted;
+ (id)faceAlignedWithAlignment:(id)alignment;
+ (id)faceDetected;
+ (id)lookingForFace;
+ (id)videoRecordedWithCapturedData:(id)data;

/* instance methods */
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)matchInitialized:(id /* block */)initialized aligningStarted:(id /* block */)started lookingForFace:(id /* block */)face faceDetected:(id /* block */)detected faceAligned:(id /* block */)aligned aligningFinished:(id /* block */)finished videoRecorded:(id /* block */)recorded;
@end

#endif /* AESelfieCaptureInteractorState_h */