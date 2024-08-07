//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryMediaCompositionView_IGFeedCreationMMCV2_h
#define IGStoryMediaCompositionView_IGFeedCreationMMCV2_h
@import Foundation;

@interface IGStoryMediaCompositionView (IGFeedCreationMMCV2) <IGPhotoTransformController>
/* instance methods */
- (double)perspectiveXRotateAngle;
- (double)perspectiveYRotateAngle;
- (double)perspectiveZRotateAngle;
- (void)setPerspectiveRotationAngle:(double)angle rotationType:(unsigned long long)type;
- (double)perspectiveRotationAngleForRotationType:(unsigned long long)type;
- (void)setPerspectiveRotationXAngle:(double)xangle yAngle:(double)angle zAngle:(double)angle;
- (double)orientationAngle;
- (void)setOrientationAngle:(double)angle;
- (void)setEditingTiltShift:(BOOL)shift;
- (BOOL)hasAdjustedValuesWithInitialCropScale:(double)scale initialCropCenter:(struct CGPoint { double x0; double x1; })center;
- (struct CGPoint { double x0; double x1; })cropCenter;
- (void)setCropCenter:(struct CGPoint { double x0; double x1; })center;
- (double)cropZoomScale;
- (void)setCropZoomScale:(double)scale;
- (double)originalCropAspectRatio;
- (void)setOriginalCropAspectRatio:(double)ratio;
- (id)contentImage;
- (void)setContentImage:(id)image;
- (void)commitCropping;
- (void)enforceContentFill;
- (void)setDisplayCropView:(BOOL)view;
- (void)setCropViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })largestOutputSizeWithNoUpscaling;
- (void)prepareInitialCropAspectRatio:(double)ratio cropCenter:(struct CGPoint { double x0; double x1; })center cropZoomScale:(double)scale;
- (union _GLKMatrix4 { struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } x0; float x1[16] })contentTransform;
@end

#endif /* IGStoryMediaCompositionView_IGFeedCreationMMCV2_h */
