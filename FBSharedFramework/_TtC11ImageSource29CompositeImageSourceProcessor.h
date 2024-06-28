//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC11ImageSource29CompositeImageSourceProcessor_h
#define _TtC11ImageSource29CompositeImageSourceProcessor_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "BlendableImageSourceProcessing-Protocol.h"
#include "ColorSpaceMatchingImageSourceProcessing-Protocol.h"
#include "ImageSourceProcessing-Protocol.h"
#include "OptionalImageSourceProcessing-Protocol.h"
#include "OutputTransformableImageSourceProcessing-Protocol.h"

@class NSDictionary, UIColor;

@interface _TtC11ImageSource29CompositeImageSourceProcessor : _TtCs12_SwiftObject<OptionalImageSourceProcessing, OutputTransformableImageSourceProcessing, ImageSourceProcessing, BlendableImageSourceProcessing, ColorSpaceMatchingImageSourceProcessing> { // (Swift)
  /* instance variables */
   renderPlanGenerators;
   renderPlans;
}

@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } outputTransform;
@property (nonatomic) BOOL shouldClearOutput;
@property (nonatomic) BOOL blendingEnabled;
@property (nonatomic, retain) UIColor *clearColor;
@property (nonatomic, readonly) BOOL canBlend;
@property (nonatomic) BOOL canMatchColorSpace;
@property (nonatomic) BOOL isMatchingColorSpace;
@property (nonatomic, copy) NSDictionary *colorspaceOptions;
@property (nonatomic, readonly) BOOL shouldTryToOptimizeOut;
@property (nonatomic, readonly) BOOL canOptimizeOut;

/* instance methods */
- (BOOL)processWithInput:(id)input output:(id)output context:(id)context commandBuffer:(id)buffer error:(id *)error;
@end

#endif /* _TtC11ImageSource29CompositeImageSourceProcessor_h */