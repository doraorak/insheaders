//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryMediaCompositionView_IGFeedCreationMMCV_h
#define IGStoryMediaCompositionView_IGFeedCreationMMCV_h
@import Foundation;

@interface IGStoryMediaCompositionView (IGFeedCreationMMCV) <IGFeedCompositionMediaView>
/* instance methods */
- (BOOL)displayOriginal;
- (void)setDisplayOriginal:(BOOL)original;
- (BOOL)isLocalLaplacianEnabled;
- (BOOL)isLuxEnabled;
- (void)setLuxEnabled:(BOOL)enabled;
- (BOOL)isEdited;
- (double)saturation;
- (void)setSaturation:(double)saturation;
- (double)temperature;
- (void)setTemperature:(double)temperature;
- (double)fade;
- (void)setFade:(double)fade;
- (double)vignette;
- (void)setVignette:(double)vignette;
- (double)highlights;
- (void)setHighlights:(double)highlights;
- (double)contrast;
- (void)setContrast:(double)contrast;
- (double)brightness;
- (void)setBrightness:(double)brightness;
- (double)shadows;
- (void)setShadows:(double)shadows;
- (double)sharpen;
- (void)setSharpen:(double)sharpen;
- (double)localLaplacian;
- (void)setLocalLaplacian:(double)laplacian;
- (double)luxBlend;
- (void)setLuxBlend:(double)blend;
- (double)photoFilterStrength;
- (void)setPhotoFilterStrength:(double)strength;
- (double)tintShadowsIntensity;
- (void)setTintShadowsIntensity:(double)intensity;
- (union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3] })tintShadowsColor;
- (void)setTintShadowsColor:(union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3] })color;
- (unsigned long long)tintShadowsColorIndex;
- (void)setTintShadowsColorIndex:(unsigned long long)index;
- (double)tintHighlightsIntensity;
- (void)setTintHighlightsIntensity:(double)intensity;
- (union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3] })tintHighlightsColor;
- (void)setTintHighlightsColor:(union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3] })color;
- (unsigned long long)tintHighlightsColorIndex;
- (void)setTintHighlightsColorIndex:(unsigned long long)index;
- (unsigned long long)tiltShiftMode;
- (void)setTiltShiftMode:(unsigned long long)mode;
- (struct CGPoint { double x0; double x1; })tiltShiftCenter;
- (void)setTiltShiftCenter:(struct CGPoint { double x0; double x1; })center;
- (double)tiltShiftRadius;
- (void)setTiltShiftRadius:(double)radius;
- (double)tiltShiftAngle;
- (void)setTiltShiftAngle:(double)angle;
- (BOOL)hasFilterApplied;
- (id)photoFilterIdentifier;
- (void)setPhotoFilterIdentifier:(id)identifier;
- (void)setPhotoFilterIdentifier:(id)identifier defaultPhotoFilterStrengthOverride:(double)override;
- (void)animateImageEdits;
- (id)generateFilteredMediaDisplayImage;
- (id)generateFilteredMediaDisplayImageOfSize:(struct CGSize { double x0; double x1; })size;
- (id)generateUnfilteredMediaDisplayImage;
- (void)flashTiltShiftHighlight;
- (void)fadeOutTiltShiftHighlight;
- (void)fadeInTiltShiftHighlight;
- (BOOL)previewPresentsWithTransaction;
- (void)setPreviewPresentsWithTransaction:(BOOL)transaction;
- (struct __CVBuffer *)mediaPixelBuffer;
- (BOOL)disableTiltShiftRendering;
- (void)setDisableTiltShiftRendering:(BOOL)rendering;
- (void)setContentTransform:(union _GLKMatrix4 { struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } x0; float x1[16] })transform;
- (void)setImage:(id)image viewPortSize:(struct CGSize { double x0; double x1; })size;
- (void)drawIfNeeded;
- (void)setOverlayNeedsRefresh;
@end

#endif /* IGStoryMediaCompositionView_IGFeedCreationMMCV_h */
