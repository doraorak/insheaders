//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLUImageSourceProcessor_h
#define IGLUImageSourceProcessor_h
@import Foundation;

#include "ColorSpaceMatchingImageSourceProcessing-Protocol.h"
#include "InputTransformableImageSourceProcessing-Protocol.h"
#include "OptionalImageSourceProcessing-Protocol.h"
#include "OutputTransformableImageSourceProcessing-Protocol.h"
#include "RenderableImageSourceProcessing-Protocol.h"
#include "ScalableImageSourceProcessing-Protocol.h"

@class NSMutableDictionary, NSString, UIColor;
@protocol {shared_ptr<iglu::filterkit::IFilter>="__ptr_"^{IFilter}"__cntrl_"^{__shared_weak_count}};

@interface IGLUImageSourceProcessor : NSObject<RenderableImageSourceProcessing, OptionalImageSourceProcessing, InputTransformableImageSourceProcessing, OutputTransformableImageSourceProcessing, ColorSpaceMatchingImageSourceProcessing, ScalableImageSourceProcessing>

@property (readonly, nonatomic) const void * filter;
@property (readonly, nonatomic) NSString *filterIdentifier;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } inputTransform;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } outputTransform;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (nonatomic) BOOL shouldClearOutput;
@property (nonatomic) BOOL blendingEnabled;
@property (retain, nonatomic) UIColor *clearColor;
@property (nonatomic) BOOL isMatchingColorSpace;
@property (retain, nonatomic) NSMutableDictionary *colorspaceOptions;
@property (nonatomic) BOOL errorOnStickerRenderingFailure;
@property (nonatomic) BOOL enableRetryFrames;
@property (readonly, nonatomic) BOOL canBlend;
@property (readonly, nonatomic) BOOL canUpdateInputTransform;
@property (readonly, nonatomic) BOOL shouldTryToOptimizeOut;
@property (readonly, nonatomic) BOOL canOptimizeOut;
@property (readonly, nonatomic) BOOL canMatchColorSpace;
@property (readonly, nonatomic) long long scalingMethod;

/* instance methods */
- (id)initWithFilter:(struct shared_ptr<iglu::filterkit::IFilter> { struct IFilter * x0; struct __shared_weak_count * x1; })filter context:(id)context;
- (void)prepareToProcessWithContext:(id)context;
- (BOOL)processWithInput:(id)input output:(id)output context:(id)context commandBuffer:(id)buffer error:(id *)error;
- (struct float4x4 { x0[4] })_convertToFloat4x4FromTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (void)_updateFilterTransform:(struct CGSize { double x0; double x1; })transform outputSize:(struct CGSize { double x0; double x1; })size;
- (id)description;
@end

#endif /* IGLUImageSourceProcessor_h */