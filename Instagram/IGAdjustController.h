//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdjustController_h
#define IGAdjustController_h
@import Foundation;

#include "IGAdjustControllerDelegate-Protocol.h"
#include "IGPhotoTransformController-Protocol.h"
#include "NSObject-Protocol.h"

@class IGConvexPolygonCropView, IGTransformController, NSString, UIImage;

@interface IGAdjustController : NSObject<IGPhotoTransformController, NSObject> {
  /* instance variables */
  IGConvexPolygonCropView *_cropView;
  BOOL _shouldDisplayContentImage;
  BOOL _hdrEnabled;
  BOOL _use32BitHDR;
  struct CGSize { double width; double height; } _originalImageSize;
  double _originalCropZoomScale;
  struct CGPoint { double x; double y; } _originalCropCenter;
  IGTransformController *_transformController;
}

@property (weak, nonatomic) NSObject<IGAdjustControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double perspectiveXRotateAngle;
@property (readonly, nonatomic) double perspectiveYRotateAngle;
@property (readonly, nonatomic) double perspectiveZRotateAngle;
@property (nonatomic) double orientationAngle;
@property (nonatomic) struct CGPoint { double x0; double x1; } cropCenter;
@property (nonatomic) double cropZoomScale;
@property (nonatomic) double originalCropAspectRatio;
@property (retain, nonatomic) UIImage *contentImage;

/* instance methods */
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect shouldDisplayContentImage:(BOOL)image shouldIgnoreLeftEdgePan:(BOOL)pan longPressEnabled:(BOOL)enabled hdrEnabled:(BOOL)enabled use32BitHDR:(BOOL)hdr;
- (void)prepareInitialCropAspectRatio:(double)ratio cropCenter:(struct CGPoint { double x0; double x1; })center cropZoomScale:(double)scale;
- (void)enforceContentFill;
- (double)perspectiveRotationAngleForRotationType:(unsigned long long)type;
- (void)setPerspectiveRotationXAngle:(double)xangle yAngle:(double)angle zAngle:(double)angle;
- (void)setPerspectiveRotationAngle:(double)angle rotationType:(unsigned long long)type;
- (BOOL)hasAdjustedValuesWithInitialCropScale:(double)scale initialCropCenter:(struct CGPoint { double x0; double x1; })center;
- (void)commitCropping;
- (void)setDisplayCropView:(BOOL)view;
- (void)setCropViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })largestOutputSizeWithNoUpscaling;
- (union _GLKMatrix4 { struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } x0; float x1[16] })contentTransform;
- (void)cropViewDidUpdateContentTransform:(id)transform;
- (void)cropViewDidBeginInteracting:(id)interacting;
- (void)cropViewDidEndInteracting:(id)interacting;
- (void)cropViewDidBeginLongPress:(id)press;
- (void)cropViewDidEndLongPress:(id)press;
- (void)setEditingTiltShift:(BOOL)shift;
@end

#endif /* IGAdjustController_h */
