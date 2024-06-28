//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBDepthDataWrapper_h
#define FBDepthDataWrapper_h
@import Foundation;

#include "NSObject-Protocol.h"

@class AVCameraCalibrationData, AVDepthData, NSString;

@interface FBDepthDataWrapper : NSObject<NSObject> {
  /* instance variables */
  AVDepthData *_avDepthData;
  struct __CVBuffer * _arDepthMap;
}

@property (readonly) AVCameraCalibrationData *cameraCalibrationData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAVDepthData:(id)data;
- (id)initWithDepthMap:(struct __CVBuffer *)map calibrationData:(id)data;
- (void)dealloc;
- (struct __CVBuffer *)depthDataMap;
- (struct { x0[3] })intrinsicMatrix;
- (struct CGSize { double x0; double x1; })intrinsicMatrixReferenceDimensions;
- (struct { x0[4] })extrinsicMatrix;
- (float)pixelSize;
- (void)convertToDepthDataType:(unsigned int)type;
@end

#endif /* FBDepthDataWrapper_h */