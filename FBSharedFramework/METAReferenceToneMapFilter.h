//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef METAReferenceToneMapFilter_h
#define METAReferenceToneMapFilter_h
@import Foundation;

#include "CIFilter.h"

@class CIImage, NSNumber;

@interface METAReferenceToneMapFilter : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputSourceHeadroom;
@property (retain) NSNumber *inputTargetHeadroom;

/* class methods */
+ (id)customAttributes;

/* instance methods */
- (struct Uniforms { float x0; float x1; float x2; float x3; float x4; float x5; float x6; })uniforms;
- (id)outputImage;
@end

#endif /* METAReferenceToneMapFilter_h */