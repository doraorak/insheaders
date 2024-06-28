//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedCompositionMediaView_Protocol_h
#define IGFeedCompositionMediaView_Protocol_h
@import Foundation;

@protocol IGFeedCompositionMediaView <NSObject>

@property (nonatomic) BOOL displayOriginal;
@property (readonly, nonatomic) BOOL isLocalLaplacianEnabled;
@property (nonatomic) BOOL luxEnabled;
@property (readonly, nonatomic) BOOL isEdited;
@property (nonatomic) double saturation;
@property (nonatomic) double temperature;
@property (nonatomic) double fade;
@property (nonatomic) double vignette;
@property (nonatomic) double highlights;
@property (nonatomic) double contrast;
@property (nonatomic) double brightness;
@property (nonatomic) double shadows;
@property (nonatomic) double sharpen;
@property (nonatomic) double localLaplacian;
@property (nonatomic) double luxBlend;
@property (nonatomic) double photoFilterStrength;
@property (nonatomic) double tintShadowsIntensity;
@property (nonatomic) struct _GLKVector3 { float x0[3] } tintShadowsColor;
@property (nonatomic) unsigned long long tintShadowsColorIndex;
@property (nonatomic) double tintHighlightsIntensity;
@property (nonatomic) struct _GLKVector3 { float x0[3] } tintHighlightsColor;
@property (nonatomic) unsigned long long tintHighlightsColorIndex;
@property (nonatomic) unsigned long long tiltShiftMode;
@property (nonatomic) struct CGPoint { double x0; double x1; } tiltShiftCenter;
@property (nonatomic) double tiltShiftRadius;
@property (nonatomic) double tiltShiftAngle;
@property (nonatomic) BOOL disableTiltShiftRendering;
@property (readonly, nonatomic) BOOL hasFilterApplied;
@property (retain, nonatomic) NSString *photoFilterIdentifier;
@property (nonatomic) BOOL previewPresentsWithTransaction;
@property (readonly, nonatomic) struct __CVBuffer * mediaPixelBuffer;

/* instance methods */
- (void)setPhotoFilterIdentifier:(id)identifier defaultPhotoFilterStrengthOverride:(double)override;
- (void)animateImageEdits;
- (id)generateFilteredMediaDisplayImageOfSize:(struct CGSize { double x0; double x1; })size;
- (id)generateUnfilteredMediaDisplayImage;
- (void)flashTiltShiftHighlight;
- (void)fadeOutTiltShiftHighlight;
- (void)fadeInTiltShiftHighlight;
- (void)setContentTransform:(struct _GLKMatrix4 { float x0[16] })transform;
- (void)drawIfNeeded;
- (void)setOverlayNeedsRefresh;
- (void)setImage:(id)image viewPortSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)isLuxEnabled;
@end

#endif /* IGFeedCompositionMediaView_Protocol_h */